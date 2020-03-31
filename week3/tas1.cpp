#include <cstdio>
#include <algorithm>
#include <vector>


int main() {
  int n, t;   // t ilosc tasowan  n liczba
  scanf("%d %d\n", &n, &t);

  std::vector<int> talia(1<<n);  //ilosc liczb do wprowadzenia 2^n
  for (size_t i = 0; i < talia.size(); i++) {
    scanf("%d", &talia[i]);
  }

  if (t % 2 == 1) {    //ilosc tasowan nieparzysta
    reverse(talia.begin(), talia.end());
  }

for (size_t i = 0; i < talia.size(); i++)
    printf("%d ", talia[i]);


  return 0;
}
