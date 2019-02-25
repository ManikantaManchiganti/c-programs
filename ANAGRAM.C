void main()
{
	char str1[100]={0},str2[100]={0},temp[100]={0};
	int len1,len2,i,j,flag=1;
	clrscr();
	printf("enter a string:");
	scanf("%s",&str1);
	len1=strlen(str1);
	printf("enter a string:");
	scanf("%s",&str2);
	len2=strlen(str2);
	strcpy(temp,str2);
	//printf("%s",str2);
	if(len1!=len2)
		printf("\nnot anagram");
	else
	{
		for(i=0;i<len1;i++)
		{
			for(j=0;j<len1;j++)
			{
				if(str1[i]!=temp[j])
					flag=0;
				else
				{
					flag=1;
					str1[i]='*';
					temp[j]='*';
					break;
				}
			}
			if(flag==0)
			{
				//printf("\nnot anagram");
				break;
			}
		}
		if(flag)
			printf("\nanagram");
		else
			printf("\nnot anagram");
	}
	getch();
}
