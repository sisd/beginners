#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[120],b[5]="hello";
	int c=0;
	scanf("%s",a);
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i]==b[c])
		{
			c++;
		}
		if (c==5)
		{
			break;/* code */
		}
	}	/* code */
		if(c==5)
			printf("YES\n");
		else 
			printf("NO\n");
	
	
	return 0;
}
