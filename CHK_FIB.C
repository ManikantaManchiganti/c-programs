void main()
{
	int n1=0,n2=1,check,temp,flag=0;
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
		if(check==n2)
		{
			printf("\nnumber is in fibanocci series");
			flag=1;
			break;
		}
		/*if(n2>check)
		{
			printf("\nnumber not in fibanooci series");
			break;
		} */
	}
	if(flag==0)
	{
		printf("\nnumber not in fibanooci series");
	}
	getch();

}