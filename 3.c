#include<stdio.h>

int main()
{
	int T,n,k;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&k);
		long long int a[n+1],s[n+1],p[k+1],sum=0,max1=-1000000001,max2=-1000000001,max,MAX,ans,f1,f2,f,start=0,end=n-1;
		
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum+=a[i];
			p[i]=sum;
		
			if(max1<sum) {max1=sum;f1=i;}
			printf("%lld ",p[i]);	
		}
		sum=0;
		
		printf("\n");
		for(int j=n-1;j>=0;j--)
		{
	//		printf("%lld ",a[j]);
			sum+=a[j];
			s[j]=sum;
			if(max2<sum) {max2=sum;f2=j;}
			printf("%lld ",s[j]);
		}
         	printf("\n");
         	printf("max1:%lld max2:%lld\n",max1,max2);
		if(max1>=max2)	{max=max1;f=f1;}
		else	{max=max2;f=f2;}
		sum=0;
		if(k==0) printf("%lld\n",p[n-1]);
		else if(k==1) printf("%lld\n",max);
		else
		{
//			for(int i=0;i<=f;i++) printf("%lld ",a[i]);
			if(f==f1) {end=f1;start=0;}
			else {start=f2;end=n-1;}
			for(int i=start;i<=end;i++)
			{       
				sum+=a[i];
				p[i]=sum;
				if(max1<sum) {max1=sum;}
			        printf("%lld ",p[i]);
			}       
			sum=0;
			printf("\n");
			for(int j=end;j>=start;j--)
			{       
				sum+=a[j];
				s[j]=sum;
				if(max2<sum) {max2=sum;}
				printf("%lld ",s[j]);

			}       
			(max1>=max2)?(MAX=max1):(MAX=max2);
			(MAX>=max)?(ans=MAX):(ans=max);
			printf("\n%lld\n",ans);
		}		
	}
	return 0;
}	


