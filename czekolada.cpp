#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> val;

int main() {
	int cols, rows; // 0 col 1 row
	int i, j;
	scanf("%d%d", &cols, &rows);
	for (i = j = 1; i < cols || j < rows;) {
		int a;
		if (i < cols) {
			scanf("%d", &a);
			val.push_back(std::make_pair(a, 0));
			i++;
		}
		else if (j < rows) {
			scanf("%d", &a);
			val.push_back(std::make_pair(a, 1));
			j++;
		}
	}

	sort(val.begin(), val.end(), std::greater<std::pair<int, int>>());

	int i_col, i_row, ans;
	i_col = i_row = ans = 0;

	for (auto cut : val) {
		int cost = cut.first;
		int type = cut.second;
		if (type) {
			ans += cost * (i_col + 1);
			i_row++;
		}
		else {
			ans += cost * (i_row + 1);
			i_col++;
		}
	}
	printf("%d", ans);
}