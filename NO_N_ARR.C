void main()
{
	int i,a[20],n,count=0,len=0,flag=0,j,uni[20];
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	/*for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}                */
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<len;j++)
		{
			if(a[i]==uni[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			uni[j]=a[i];
			len++;
		}
	}
	/*for(i=0;i<len;i++)
	{
		printf("%d ",uni[i]);
	} */
	for(i=0;i<len;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(uni[i]==a[j])
			{
				count++;
			}
		}
		printf("\n%d --> %d",uni[i],count);
	}
	getch();
}