#include<stdio.h>
int digits(long long int n)
{
	int c=0;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	return c;
}
long long int p(int x,int y)
{
	long long int rem,base;
	base=x;rem=1;
	while(y>0)
	{
		if(y%2==1) rem=rem*base;
		base=base*base;
		y=y/2;
	}
	return rem;
}
int main()
{
	long long int n,w,k,m;
	scanf("%lld %lld %lld",&w,&m,&k);
	int dig=digits(m),curr,c=0;
	w=w/k;
	while(w>0)
	{
		curr=p(10,dig);
		//		printf("%d",curr);
		if(curr-m<=0) dig++;
		w-=dig;
		c++;m++;
		//		printf("%lld\n",w);

	}
	if(w==0) printf("%d\n",c);	
	else printf("%d",c-1);

}
