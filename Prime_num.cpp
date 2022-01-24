#include<iostream>
using namespace std;
int main(){
	int n,i, count=0;
	cout<<"Enter number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"Its a prime number!"<<endl;
	} else{
		cout<<"Its not a prime number!"<<endl;
	}
	return 0;
}
