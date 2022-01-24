#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0,m;
	cout<<"Enter Number: ";
	cin>>n;
	m=n;
	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	if(sum==m){
		cout<<sum<<" Armstrong number"<<endl;
	} else{
		cout<<sum<<" not an armstrong number"<<endl;
	}
	
	return 0;
}
