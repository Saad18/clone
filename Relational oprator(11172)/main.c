#include <stdio.h>

int main() {

  int a, b, t;

  scanf("%d", &t);

  while (t--)
  {
    scanf("%d %d", &a, &b);

    if (a == b)  printf("=");
    if (a < b)   puts("<");
    if (a > b)   puts(">");
  }

  return 0;
}
