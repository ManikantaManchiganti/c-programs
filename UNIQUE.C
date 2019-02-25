#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,i=1,n2,n,rem1,rem2,count,m;
	clrscr();
	printf("enter a value:");
	scanf("%d",&n1);
	printf("enter a value:");
	scanf("%d",&n2);
	m=n1;
	while(n1)
	{
		count=0;
		rem1=n1%10;
		n1=n1/10;
		n=n2;
		while(n)
		{
			rem2=n%10;
			n=n/10;
			if(rem1==rem2)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d\t",rem1);
		}
		if(i && n1==0)
		{
			n1=n2;
			n2=m;
			i--;
		}
	}
	getch();
}
