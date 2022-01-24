#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter two numbers: ";
	cin>>m>>n;
    while(n!=m){
    	if(n>m){
    		n=n-m;
		} else if(m>n){
			m=m-n;
		}
		}
		cout<<"GCD is "<<n;	
}
