#include<stdio.h>

main()
{
	char ch[100];
	int i;
	
	printf("Enter String=");
	scanf("%s",&ch);
	
	if (ch[0]>='a' || ch[0]<='z')
		ch[0]=ch[0]-32;
	
	for (i=1;ch[i]!='\0';i++);
	{
		if (ch[i]>='A' || ch[i]<='Z')
		ch[i]=ch[i]+32;
		
	}
	
	printf("\nEnter Titlecase String=%s",ch);
}
