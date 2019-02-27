char * strnrev(char *c1,int m)
{
	char temp[50]={0};
	int i,n,len;
	//printf("%s",c1);
	len=strlen(c1);
	//printf("%d",strlen(c1));
	for(i=0;i<m;i++)
		temp[i]=c1[i];
	n=len-1;
	for(i=m;i<len;i++)
	{
		temp[i]=c1[n--];
	}
	return temp;
}

int strlen(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

void main()
{
	int m;
	char *c1;
	clrscr();
	scanf("%s",c1);
	scanf(" %d",&m);
	c1=strnrev(c1,m);
	printf("%s",c1);
	getch();
}