#include <algorithm>
#include <cstdio>
#include <vector>

int main(){
  int n;
  scanf("%d\n", &n);

  std::vector<std::pair<int, int> > intervals(n);

  for (size_t i = 0; i < n; i++)
    scanf("%d %d", &intervals[i].first, &intervals[i].second);

  sort(intervals.begin(), intervals.end());

  int locmin = intervals[0].first;
  int locmax = intervals[0].second;

  for (size_t i = 1; i < intervals.size(); i++)
    if (locmax < intervals[i].first) {
      printf("%d %d\n", locmin, locmax);
      locmin = intervals[i].first;
      locmax = intervals[i].second;
    }
    else
      if(intervals[i].second>locmax) locmax=intervals[i].second;

printf("%d %d\n", locmin, locmax);
  return 0;
}
