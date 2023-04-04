#include<stdio.h>

main()
{
	char ch[100];
	int i;
	
	printf("Enter String=");
	scanf("%s",&ch);
	
	for (i=0;ch[i]!='\0';i++)
	{
		if (ch[i]>='A' && ch[i]<='Z')
		ch[i]=ch[i]+32;
		
		else if (ch[i]>='a' && ch[i]<='z')
		ch[i]=ch[i]-32; 
	}
	
	printf("\nEnter Togglecase String=%s",ch);
}
