#include<iostream>
using namespace std;

struct array{
	int *A;
	int size;
	int length;
};

display(struct array arr){
	cout<<"elements are"<<endl;
	for(int i=0;i<arr.length;i++){
		cout<<arr.A[i];
	}
}

int main(){
	struct array arr;
	int i,n;
	cout<<"enter size of an array:"<<" ";
	cin>>arr.size;
	arr.A=new int(arr.size);
	arr.length=0;
	cout<<"enter number of numbers:"<<" ";
	cin>>n;
	
	cout<<"enter all elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr.A[i];
	}
	arr.length=n;
	display(arr);
}
