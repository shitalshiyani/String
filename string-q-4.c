#include<stdio.h>

main()
{
	char ch[100];
	int i;
	
	printf("Enter String=");
	scanf("%s",&ch);
	
	for (i=0;ch[i]!=NULL;i++)
	{
		printf("%c",ch[i]-32);
	}
}
