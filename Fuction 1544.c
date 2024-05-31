#include <stdio.h>

int n;



int f(n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%c", '*');
	}
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
