#include<string.h>

void main()
{
	int i,len1,len2,count=0;
	char str1[10]={0},str2[10]={0};
	clrscr();
	printf("enter a string:");
	scanf("%s",&str1);
	printf("enter a string:");
	scanf("%s",&str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2)
	{
	for(i=0;i<len1;i++)
	{
		if(str1[i]!=str2[i])
		{
			count=1;
		}
	}
	if(count)
		printf("strings are not equal");
	else
		printf("strings are equal");
	}
	else
		printf("strings are not equal");
	getch();
}