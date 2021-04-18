#include<stdio.h>

void fun()
{
	

int r,c;
	for(r=4;r>0;r--)
	{
		for(c=4;c>0;c--)
		{
			printf(" %d ",r);
		}
		printf("\n");
	}
}

int main()
{
	fun();
		return 0;
}