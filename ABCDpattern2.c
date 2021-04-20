#include<stdio.h>

void fun()
{

	char r=65,c=65;
	int v,h;
	printf("Enter the no. of rows :");
	scanf("%d",&v);
	printf("Enter the no. of columns :");
	scanf("%d",&h);
	
	if(v<26 && h<26)
	{
		for(r=65;r<=65+v;r++)
		{
			for(c=65;c<=65+h;c++)
			{
				printf(" %c ",r);
			}
			printf("\n");
		}
	}
		
}

int main()
{
	fun();
		return 0;
}