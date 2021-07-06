#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],i,item,n;
	clrscr();
	printf("Enter limit of the array:");
	scanf("%d",&n);
	printf("Enter Elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("\nARRAY\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}