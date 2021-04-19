#include <stdio.h>  
  
int main()  
{  
	int r,c,s;
    int v,h;
    printf("Enter the no. of rows :");  
    scanf("%d",&v);  
    printf("Enter the no. of columns :");
    scanf("%d",&h);
 	
 	if(h==v)
 	{
 		for(r=1;r<=v;r++)
 		{
 			for(c=1;c<=h*2-1;c++)
 			{
 				if(c>=v+1-r && c<=v-1+r)
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