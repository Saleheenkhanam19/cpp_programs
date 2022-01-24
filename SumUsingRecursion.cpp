#include<iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	} else{
		return sum(n-1)+n;
	}
}
int main(){
	int r,n;
	cout<<"Enter number: ";
	cin>>n;
	r=sum(n);
	cout<<r;
	return 0;
}
