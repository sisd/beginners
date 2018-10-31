#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,j=0,a[5][5],ans;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
			{
				ans=fabs(i-2)+fabs(j-2);
				printf("%d\n",ans);
				return 0;

			}
		}
	}
}
