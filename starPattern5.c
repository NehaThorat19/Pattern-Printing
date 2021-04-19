#include<stdio.h>
int main()
{
	int h,v,r,c;
	printf("Enter no. of rows :");
	scanf("%d",&v);
	printf("Enter no. of columns :");
	scanf("%d",&h);

	if(h==v)
	{
		for(r=1;r<=v;r++)
		{
			for(c=1;c<=h;c++)
			{
				if(c>=r)
				{
					printf(" * ");
				}
				else
				{
					printf("   ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}