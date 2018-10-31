#include<stdio.h>

long long int pwr( long long int x,long long int y,long long int m)
{
	long long int rem=x%m,ans=1;
	while(y>0)
	{	
		if(y%2==1) ans=(ans*rem)%m;	
		rem=(rem*rem)%m;
		y=y/2;

	}
	return ans;
}

int main()
{
	long long int n,x,y,m;
	int i,j;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x);
		scanf("%lld",&y);
		scanf("%lld",&m);		
		for(j=1;j<=y;j++)
		{
			x=pwr(x,j,m);
		}
		printf("%lld\n",x);
		
	}

	return 0;
	
}
