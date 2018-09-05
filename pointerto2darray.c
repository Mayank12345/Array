#include<stdio.h>
void fun(int (*)[3][4]);
int main()
{
	printf("Enter the 3*4 matrix");
	int i,j;
	int arr[3][4];
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			scanf("%d",&arr[i][j]);
	fun(&arr);
	return 0;
}
void fun(int (*p)[3][4])
{	
	int i,j;
	printf("This is an address of whole array (p) %u\n",(p));
	printf("This is an address of next array (p+1) %u\n",(p+1));
	printf("This is an address of array *(p+0) %u\n",*(p+0));
	printf("This is an address of array (*(*p+0)+1) %u\n",(*(*p+1)+0));
	printf("This is an address of element in array *(*(p+0)+0) %u\n",*(*(p+0)));
	printf("This is an element in array %u\n",*(*(*(p+0)+0)));
	
	printf("Here we print the whole array\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			printf("%d ",*(*(*p+i)+j));	
	printf("\n");
	}

	printf("Here we print the whole array using arr[][]\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			printf("%d ",(*p)[i][j]);	
	printf("\n");
	}

}


