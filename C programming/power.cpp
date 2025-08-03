 #include<stdio.h>
 int main()
 {
	int a,b,n,x=1;
	printf("Enter number: ");
	scanf("%d",&a);
	printf("Enter power: ");
	scanf("%d",&b);
	for(n=1;n<=b;n++)
	{
		x=x*a;
	}
	printf("Answer = %d",x);
	return 0;
 }
