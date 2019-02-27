void strrev(char *c1)
{
	char temp;
	int i,n,len=strlen(c1);
	//printf("%d",len);
	for(i=0,n=len-1;i<len/2;i++,n--)
	{
		temp=c1[i];
		c1[i]=c1[n];
		c1[n]=temp;
	}
}

int strlen(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

void main()
{
	char c1[50];
	clrscr();
	scanf("%s",&c1);
	//printf("%d",strlen(c1));
	strrev(c1);
	printf("%s",c1);
	getch();
}