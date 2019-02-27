int strcm(char *c1,char *c2)
{
	int i,len;
	if(strlen(c1)>strlen(c2))
		return 1;
	else if(strlen(c1)<strlen(c2))
		return -1;
	else
	{
		len=strlen(c1);
		for(i=0;i<len;i++)
		{
			if(c1[i]!=c2[i])
				return c1[i]-c2[i];
		}
	}
	return 0;
}

int strlen(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

void main()
{
	int n;
	char c1[50],c2[50];
	clrscr();
	scanf("%s",&c1);
	scanf(" %s",&c2);
	n=strcm(c1,c2);
	if(n==0)
		printf("strings are equal\n");
	else if(n>0)
		printf("string 1 is bigger than string 2");
	else
		printf("string 2 is bigger than string 1");
	getch();
}