#include<stdio.h>
struct array{
	int A[10];
	int size;
	int length;
};
void display(struct array arr){
	int i;
	printf("\n elements are\n");
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.A[i]);
	}
}
swap(int*x,int*y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int linearsearch(struct array *arr,int key){
	int i;
	for(i=0;i<arr->length;i++){
		if(key==arr->A[i]){
			swap(&arr->A[i],&arr->A[0]);
			return i;
		}
	}
	return -1;
}
int binarysearch(struct array arr,int key)
{
	int l,mid,h;
	l=0;
	h=arr.length-1;
	while(l<=h){
		mid=(l+h)/2;
		if(key==arr.A[mid])
		return mid;
		else
		if(key<arr.A[mid])
		return h=mid-1;
		else
		return l=mid+1;
	}
	return -1;
}
int RBinsearch(int a[],int l,int h,int key){
	if(l<=h){
		int mid=(l+h)/2;
		{
			if(key==a[mid])
			return mid;
			else
			if(key<a[mid])
			return RBinsearch(a,l,mid-1,key);
		else
		return RBinsearch(a,mid+1,h,key);
}
	return -1;
	}
}
int main()
{
	struct array arr1={{2,3,4,5,6,7},10,8};
    printf("%d ",RBinsearch(arr1.A,0,arr1.length,5));
    printf("%d ",linearsearch(&arr1,4));
    printf("%d ",binarysearch(arr1,3));
	display(arr1);
	return 0;
}
