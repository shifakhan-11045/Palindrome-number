#include<stdio.h>

int main()
{
	int a,b,c,ch;
	do
	{
	printf("Press 1 for enter number");
	printf("\nPress 2 for exit");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\nEnter Number : ");
	scanf("%d",&a);
	c=a;
	b=0;
	while(a>0)
	{
		b=b*10+a%10;
		a=a/10;
	}
	printf("%d",b);
	if(c==b)
	printf("\nNumber is palindrom\n");
	else
	printf("\nNumber is not palindrom\n\n");
	break;
	case 2:break;
	}
	}
	while(ch!=2);
}
