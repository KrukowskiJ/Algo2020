#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, r, a;
    scanf_s("%d %d", &n , &r);
    vector<vector <int> > Prefix_sums(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf_s("%d", &a);
            Prefix_sums[i].push_back(a);
            if ((j - 1) >= 0)
                Prefix_sums[i][j] += Prefix_sums[i][j - 1];
            if ((i - 1) >= 0)
                Prefix_sums[i][j] += Prefix_sums[i - 1][j];
            if ((i - 1) >= 0 && (j-1) >= 0)
                Prefix_sums[i][j] -= Prefix_sums[i - 1][j - 1];
        }
    };

  int x =0;
  for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
          int i1 = min(i + r, n - 1);
          int j1 = min(j + r, n - 1);
          x = Prefix_sums[i1][j1];

          if (j - 1 - r >= 0)
              x -= Prefix_sums[i1][j - 1 - r];
          if (i - 1 - r >= 0)
          x -= Prefix_sums[i - 1 - r][j1];
          if (i - 1 - r >= 0 && j - 1 - r >= 0)
              x += Prefix_sums[i - 1 - r][j - 1 - r];
 
          printf("%d ", x);
          x = 0;
      }
      printf("\n", x);
  }
}