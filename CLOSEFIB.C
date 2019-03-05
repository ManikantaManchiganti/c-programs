void main()
{
	int n1=0,n2=1,check,temp,sub1,sub2;
	clrscr();
	printf("enter a value to check:");
	scanf("%d",&check);
	printf("%d %d ",n1,n2);
	while(check && n2<check)
	{
		temp=n2;
		n2=n1+n2;
		n1=temp;
		printf("%d ",n2);
	}
	sub1=check-n1;
	sub2=n2-check;
	if(check==n2)
	{
		printf("\nfibanooci number");
	}
	else
	{
		if(sub1<sub2)
		{
			printf("\nclosest number is %d",n1);
		}
		else if(sub1>sub2)
		{
			printf("\nclosest number is %d",n2);
		}
		else
		{
			printf("\nclosest number are %d %d",n1,n2);
		}
	}
	getch();
}