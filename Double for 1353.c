#include<stdio.h>

int main(void)
{
	int p;
	scanf("%d",&p);
	
	for(int i=0; i<p; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	
}
