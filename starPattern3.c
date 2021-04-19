#include<stdio.h>
int main()
{
	int r,c,h,v;
	printf("Enter no. of rows :");
	scanf("%d",&v);
	printf("Enter no. of columns :");
	scanf("%d",&h);

	if(h==v)
	{
		for(r=0;r<v;r++)
		{
			for(c=0;c<h;c++)
			{
				if(r<=c)
				{
					printf(" * ",r);
				}
			}
			printf("\n");
		}
	}
	return 0;
}