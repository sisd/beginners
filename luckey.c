#include<stdio.h>

int main(){
	long int t,k, a;
	scanf("%ld",&t);
	while(t--){
		scanf("%ld",&a);
		k=0; 
		while(a!=0){
			if(a%10==4)
				k++;
			a/=10;
			//printf("%ld %ld\n",a,  k);			
		}
		printf("%ld\n",k);		
	}
	return 0;
}
