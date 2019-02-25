void main()
{
	int n,a[20],b[20],temp,j,i,count=0,zob=0,vam=0,count2=0;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//for(i=0;i<n;i++)
	  //	printf("%d ",a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			zob+=a[i];
			b[count]=a[i];
			count++;
		}
		if(a[i]%2)
		{
			vam+=a[i];
			count2++;
		}
	}
	//printf("\n%d \n",count2);
	temp=count+count2+2;
	b[count]=zob;
	//for(i=0;i<n;i++)
	  //	printf("%d ",a[i]);
	for(i=count+1,j=0;i<temp,j<n;j++)
	{
		if(a[j]%2!=0)
		{
			b[i]=a[j];
			i++;
		}
	}
	b[temp-1]=vam;
	for(i=0;i<temp;i++)
	{
		printf("%d ",b[i]);
	}
	getch();
}