#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int array_size)
{
	for (int i = 0; i < array_size; ++i)
		cout << a[i] << " ";
}
int main()
{
	int a[] = {1, 8, 0, 2, 3, 5, 6};
	int asize = sizeof(a) / sizeof(a[0]);
	sort(a, a + asize);
	show(a, asize);
	
	int i=asize-1, even=0;
		while(even!=2){
		 if(i%2==0){
			even++;
		}else{
			i--;
		} 
		}
		cout<<a[i];
	int j=asize-1, odd=0;
		while(odd!=2){
			if(j%2!=0){
			odd++;
		} else{
			j--;
		}
		}
		cout<<a[j];
	
}

