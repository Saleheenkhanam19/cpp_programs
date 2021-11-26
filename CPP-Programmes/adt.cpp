#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *A;
	int size;
	int length;
};
Display(struct array arr)
{
	int i;
	printf("\n Elements are\n");
	for(i=0;i<arr.length;i++)
	printf("%d",arr.A[i]);
}
int main()
{
	struct array arr;
	int i,n,size;
	printf("enter the size of an array");
	scanf("%d",&arr.size);
	arr.A=(int*)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("enter the number of numbers");
	scanf("%d",&n);
	printf("Enter all elements\n");
	for(i=0;i<n;i++)
	scanf("%d",arr.A[i]);
	arr.length=n;
	Display(arr);
}
