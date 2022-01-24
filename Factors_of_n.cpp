#include<iostream>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	} else {
		return fact(n-1)*n;
	}
}

int main(){
	int i,n;
	cout<<"Enter number "<<endl;
	cin>>n;

     //using loop: // 

//	for(i=1;i<=n;i++){
//		if(n%i==0){
//			cout<<i<<endl;
//		}
//	}

    i=fact(n);
    cout<<i;
	return 0;
}

