void main()
{
	char str[100];
	int i,len,vow=0,con=0,spe=0,num=0;
	clrscr();
	printf("enter a string:");
	scanf("%s",str);
	printf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
		{
			if(str[i]=='a' || str[i]=='A'|| str[i]=='e' || str[i]=='E'|| str[i]=='i' || str[i]=='I'
			|| str[i]=='o' || str[i]=='O'|| str[i]=='u' || str[i]=='U')
				vow++;
			else
				con++;
		}
		else if(str[i]>=48 && str[i]<=57)
			num++;
		else
			spe++;
	}
	printf("\nnumber of vowels:%d",vow);
	printf("\nnumber of consonants:%d",con);
	printf("\nnumber of numbers:%d",num);
	printf("\nnumber of special characters:%d",spe);
	getch();
}