#include<stdio.h>

void fun()
{
	

int r,c;
	for(r=1;r<5;r++)
	{
		for(c=1;c<5;c++)
		{
			printf(" %d ",c);
		}
		printf("\n");
	}
}

int main()
{
	fun();
		return 0;
}