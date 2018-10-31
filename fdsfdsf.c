#include<stdio.h>
int main()
{
	int n,m,t,c=0,j=0;
	char N[1000000],M[1000000];
	if(scanf("%d %d",&n,&m)==2) 
	if(scanf("%s %s",N,M)==2)
	{
		if (n>=m)
		{
			t=m;
		}
		else
		{
			t=n;
		}
		for(int i=0; i<t; i++,j++)
		{
			if(N[i]>=97 && N[i]<=122)
			{
				N[i]=N[i]-32;
			}
			if(M[i]>=97 && M[i]<=122)
			{
				M[i]=M[i]-32;
			}
			if(N[i]<M[i])
			{
				printf("%d",1);
				return 0;
			}
			else if(N[i]>M[i])
			{
				printf("%d",2);
				return 0;
			}
			c=j;
		}
	}

	if(m>n && c==j)
       	{
		printf("1");
		return 0;
	}
	else if(m<n && c==j)
	{
		printf("2");
		return 0;
	}
	else
	{
		printf("%d",2);
	}
	return 0;
}
