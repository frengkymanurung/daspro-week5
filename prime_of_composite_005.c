#include <stdio.h>

int main() {
  int n, i, m = 0;
  printf("Masukan angka : ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      m = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 bukan bilangan prima atau komposit.");
  } 
  else {
    if (m == 0)
      printf("%d merupakan bilangan prima.", n);
    else
      printf("%d merupakan bilangan komposit.", n);
  }

  return 0;
}