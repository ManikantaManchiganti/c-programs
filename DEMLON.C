void main()
{
	unsigned long int num,s=0,rem=0;
	int n=1,i=0;
	clrscr();
	printf("enter a value:");
	scanf("%lu",&num);
	while(num)
	{
		rem+=num%10;
		num=num/10;
	}
	//printf("%ld",rem);
	while(n)
	{
		if(n<=rem && i==0)
		{
			s=s*10+n;
			n++;
			if(n==rem)
				i=1;
		}
		else
		{
			s=s*10+n;
			n--;
		}
	}
	printf("%lu",s);
	getch();
}