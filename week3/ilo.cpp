#include <algorithm>
#include <cstdio>
#include <vector>

int main() {
  int n;
  scanf("%d\n", &n);
  vector<int> a(n);
  for (int i = 0; i <= n-1; i++) 
    scanf("%d\n", &a[i]); 
    
  sort(a.begin(), a.end());

  int i = 0,j = a.size() - 1;
  int sum = 0;

  while (i <= j) {
    if (i == j) {
      sum += a[i];
      break;
    }
    sum+= 2 * a[j];
    i++;
    j--;
  }

  printf("%d\n", sum);

  return 0;
}
