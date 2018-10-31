#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{ 
       	int i,j,k,n;
	if(scanf("%d",&n)==)
	for(i=0;i<n;i++)
	{
		int a,b,p=0,q=0,p1,p2,c=0,d=0;
		char s1[a+1],s2[b+1];

		if(scanf("%d %d",&a,&b)==2)
		if(scanf("%s %s",s1,s2))
		for(k=a-1;k>=0;k--)
		{
			if( s1[k]=='1' ) s1[k]='0';
			else s1[k]='1';
		}	
				
//		printf("%s",s1);
		for(j=a-1;j>=0;j--)
		{//	printf("%c\n",s1[j]);
		       	if( s1[j]=='1') p+=(1<<c);
		//	printf("p%d c%d\n",p,c);
			c++;
		}
		
		for(k=b-1;k>=0;k--)
		{
			if( s2[k]=='1' ) q+=(1<<d);
			d++;
		}

		p1=p;
		p2=p+1;
//		printf("p%d q%d p1%d p2%d\n",p,q,p1,p2);

/*		char o[a],t[a],r[b];
		itoa(p1,o,10);
		itoa(p2,t,10);
		itoa(q,r,10);*/

//		printf("%s %s %s\n",o,t,r);
		if(p1==q) printf("ONE\n");
		else if(p2==q) printf("TWO\n");
		else printf("LOL\n");
	}
	return 0;
}

