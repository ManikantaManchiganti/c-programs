void main()
{
	char str1[10][100];
	int a[10][10],i,j,n,k,order,sum=0,b[10];
	clrscr();
	printf("enter no of cities:");
	scanf("%d",&n);
	printf("enter city names:");
	for(i=0;i<n;i++)
		scanf("%s",str1+i);
	printf("enter matrix values:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//for(i=0;i<n;i++)
	//	printf("%s\n",*(str1+i));
	printf("enter cities traveled:");
	scanf("%d",&order);
	for(i=0;i<n;i++)
	{
		printf("%s(%d)\n",*(str1+i),i);
	}
	printf("enter order:");
	for(i=0;i<order;i++)
	{
		scanf("%d",&b[i]);
	}
	//s=b[0];
	//sum=a[0][s];
	for(i=0,k=0;i<n || k<order;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[k]==i && b[k+1]==j)
			{
				sum+=a[i][j];
				k++;
			}
		}
	}
	printf("%d",sum);
	getch();
}