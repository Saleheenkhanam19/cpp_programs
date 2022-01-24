#include<algorithm>
#include<iostream>
using namespace std;
void display(int A[], int array_size ){
	for(int i=0; i<array_size; ++i){
		cout<<A[i]<<" ";
	}
}
int main(){
	int A[] = {1,8,0,2,3,5,6};
	int asize= sizeof(A)/sizeof(A[0]);
	sort(A, A + asize);
	display(A, asize);
	//for even
	int i=asize-1, j=asize-1, even=0, odd=0, r=0, p=0;
		while(even!=2){
		 if(i%2==0 && even!=2){
			even++;
			r=A[i];
			i--;
		}else{
		   i--;	
		}
		}
		
			

	//for odd
		while(odd!=2){
			if(j%2!=0){
			odd++;
			p=A[j];
			j--;
		} else{
			j--;
		}
		}
		cout<<"sum of even and odd number are: "<<p+r;
	
}
