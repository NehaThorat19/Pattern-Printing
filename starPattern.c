#include<stdio.h>
int main()
{
	int h,v;
	int r,c;
	printf("Enter the no of rows :");
	scanf("%d",&v);
	printf("Enter the no of columns :");
	scanf("%d",&h);
	if(h==v)
	{
		for(r=0;r<v;r++)
		{
			for(c=0;c<h;c++)
			{
				printf(" * ");
			}
			printf("\n");
		}
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
}