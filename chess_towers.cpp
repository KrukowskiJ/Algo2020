#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 3010;
vector<pair<int, int>>R;
vector<pair<int, int>>C;
int r[N], c[N];
int n;
bool solve(vector<pair<int, int>> W, int* w) {

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	vector<pair<int, int>> start;
	for (int i = 0; i < n; i++)
		start.push_back(make_pair(W[i].first, i));

	sort(start.begin(), start.end());

	int j = 0;
	for (int i = 0; i < n; ++i) {
		while (j < n && start[j].first == i+1) {
			int row_num = start[j].second;
			q.push(make_pair(W[row_num].second, row_num));
			++j;
		}

		if (q.empty()) return false;
		int num = q.top().second;
		w[num] = i + 1; 
		q.pop();
		
		if (!q.empty() && q.top().first == i+1) return false;
	}
	return true;
}

int main() {
	scanf("%d", &n);
	int a, b, e, d;
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d%d", &a,&b,&e,&d);
		R.push_back(make_pair(a, e));
		C.push_back(make_pair(b, d));
	}
	int ok = 1;
	ok &= solve(R, r);
	ok &= solve(C, c);

	if (ok) {
		for (int i = 0; i < n; i++)
			printf("%d %d\n", r[i], c[i]);
	}
	else
		printf("NIE\n");

	return 0;
}