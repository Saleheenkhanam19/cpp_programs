#include<iostream>
using namespace std;
 template<class T>
 void print(T & vec, int n, string s){
 	cout<<s<<": [ "<<flush;
 	for(int i=0; i<n; i++){
 		cout<<vec[i]<<flush;
 		if(i<n-1){
 			cout<<", "<<flush;
		 }
	
	 }
	 cout<<"]"<<endl;
 }
 void swap(int *x, int *y){
 	int temp= *x;
 	*x=*y;
 	*y=temp;
 }
 
 void BubbleSort(int A[], int n){
 	int flag=0;
 	for(int i=0; i<n-1; i++){
 		for(int j=0; j<n-1-i; j++){
 			if(A[j]>A[j+1]){
 				swap(&A[j], &A[j+1]);
 				flag=1;
			 }
		 }
		 if(flag==0){
		 	return;
		 }
	 }
 }
 int main(){
 	int A[]={3,7,9,10,6,5,12,4,11,1};
 	int n = sizeof(A);
 	print(A, n, "\t\tA");
 	
 	BubbleSort(A, n);
 	print(A,n,"sorted A");
 	return 0;
 }
