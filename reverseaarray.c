#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int i,j=4,temp;
	printf("Array to be reversed:\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	for(i=0;i<j;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	printf("\nThis is a reversed array\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	return 0;
}
