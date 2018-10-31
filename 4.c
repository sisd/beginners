#include<stdio.h>

int possible(long long int f[],long long int n,long long int m,long long int time)
{
	long long int curr=0,count=1;
	for(int i=1;i<=m;)
	{
		if(curr+f[i]>time) {curr=0;count++;}
		else {curr+=f[i];i++;}
	}
	return (n>=count);
}
long long int Min(long long int a,long long int b)
{
	if(a>=b) return b;
	else return a;
}
int main()
{
	int t;
	long long int n,m,a,b,mod;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld %lld",&n,&m,&a,&b,&mod);
		long long int f[m+2],sum=3,max=2,lo=0,hi,mid,min,ans;
		f[0]=0;f[1]=1;f[2]=2;
		for(int i=3;i<=m;i++)
		{
			f[i]=(((f[i-1]*a)%mod+(a*b)%mod+(f[i-2]*b)%mod)%mod + b);
			sum+=f[i];
			if(max<=f[i])	max=f[i];	
		}
//		printf("\n");
//		for(long long int i=1;i<=m;i++) printf("%lld ",f[i]);
//		printf("\n");
		hi=sum;ans=hi;
		while(lo<=hi)
		{
			mid=(hi+lo)/2;
			if(mid>=max && possible(f,n,m,mid)) {hi=mid-1;ans=Min(mid,ans);}
			else lo=mid+1;
//			printf("%lld ",mid);
		}
//		printf("\n");
		if(m==1) printf("1\n");
		else printf("%lld\n",ans);
	   
	}
}
