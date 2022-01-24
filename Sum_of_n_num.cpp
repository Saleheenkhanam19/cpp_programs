#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		sum=sum+i;
		cout<<"First n prime number is: "<<sum<<endl;
	}
	return 0;
}
