#include <stdio.h>

int n;



int f(n)
{
	if (n == 1)printf("hello\n");
	else if (n == 2)printf("world\n");
	else printf("\n");
	return 0;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
