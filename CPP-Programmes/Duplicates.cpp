#include<iostream>
using namespace std;
struct array{
	int a[10];
	int length;
	int size;
};
Display(struct array arr){
	cout<<"Elements are:"<<endl;
	for(int i=0;i<arr.length;i++){
		cout<<arr.a[i];
	}
}
Duplicate(struct array arr){
	int lastduplicate=0;
	for(int i=0;i<arr.length-1;i++){
		if(arr.a[i]==arr.a[i+1]){
			int j= i+1;
			while(arr.a[i]==arr.a[j]){
				j++;
			}
			cout<<arr.a[i]<<" repeats "<<j-i<<" times"<<endl;
		    i=j-1;
		}
	}
}

int main(){
	struct array arr={{1,2,2,3,4,4,4,5,7,8},10,5};
	Duplicate(arr);
	Display(arr);
}
