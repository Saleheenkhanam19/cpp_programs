#include<iostream>
using namespace std;
int main(){
	int m, n, sum=0, sum1=0;
	cout<<"Enter two numbers: ";
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		if(i%m==0){
			sum=sum+i;
		} else {
			sum1=sum1+i;
		}
	}
	if(sum>sum1){
		sum=sum-sum1;
		cout<<sum;
	} else {
		sum1=sum1-sum;
		cout<<sum1;
	}
}
