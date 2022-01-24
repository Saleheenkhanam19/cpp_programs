#include<iostream>
using namespace std;
int main(){
	int n,i,perfect_num=0;
	cout<<"Enter number: ";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			perfect_num=perfect_num+i;
			cout<<perfect_num<<endl;
		} 
	}
	if(perfect_num==n){
		cout<<"It is perfect number";
	} else{
		cout<<"It is not a perfect number";
	}
	return 0;
}
