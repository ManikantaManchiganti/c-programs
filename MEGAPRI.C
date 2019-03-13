int prime(int);

void main()
{
	int num,count=0,temp,rev=0,c1=0,flag=0;
	clrscr();
	printf("enter a number:");
	scanf("%d",&num);
	temp=num;
	count=prime(num);
	printf("no of factor:%d",count);
	if(count==2 || count==1)
	{
		printf("\nprime number");
		while(num)
		{
			rev=num%10;
			c1=prime(rev);
			if(c1==1 || c1==2)
			{
				flag=1;
			}
			num=num/10;
		}
		if(flag==1)
		{
			printf("\nmega prime");
		}
		else
		{
			printf("\nnot mega prime");
		}
	}
	else
	{
		printf("\ncomposite number");
	}
	getch();
}

int prime(int n)
{
	int i,c=0;
	//printf("factors:");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			//printf("%d ",i);
			c++;
		}
	}
	return c;
}