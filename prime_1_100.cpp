#include<iostream>
using namespace std;
 
int prime(int start, int end)
{
	int l=start, r=end,count,i,j;
	
	for( i=l; i<= r ; i++)
	{
     	if(i==0 || i==1)
		{
		continue;
     	}
		count=1;
		
		for( j=2 ; j<= i/2 ; j++)
		{
			if(i%j==0)
			{
				count=0;
				break;
			}
	}
		
		if(count==1)
			cout<<i<<endl;		
	}
}
		int main()
	{
		
		prime(5,10);
		return 0;
	}
