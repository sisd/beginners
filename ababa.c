#include<stdio.h>
int main()
{
	int a,b,i,j,k,n;
	scanf("%d",&n);
	a=(n+1)/2;
	(n%2==1)?(b=0):(b=1);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++) printf(" ");
		{


			for(j=1;j<=n+1-i-b;j++)
			{
//				printf("%d ",j);
				if(i==1 || i==a) printf("o ");
				else if(j==1) printf("o ");
				else if(j==a+1-i) printf("o ");
				else if(j==a) printf("o ");
				else if(j==n+1-i-b) printf("o ");
				else printf("  ");

			}
		}
	
		printf("\n");

	}

}
