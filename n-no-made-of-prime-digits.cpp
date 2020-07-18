#include<bits/stdc++.h>
using namespace std;

void makeArr(int* arr)
{
    arr[0] = 2 ;arr[1] = 3;arr[2] =5;arr[3] =7;
    int j = 4;
    
    for(int i =22; i<2300; i++)
    {
        bool isNum = true;
        int x = i;
        while(x>0)
        {
            int r = x % 10;
            if(r !=2 && r!=3 && r!=5 && r!=7 )
            {
                isNum = false;
                break;
            }
             x = x/10;
        }
        if(isNum == true)
        {
            arr[j] = i;
            j++;
            
        }
        
    }
}
int main()
 {
	//code
	
	int t;
	cin>>t;
	int arr[150];
	makeArr(arr);
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<arr[n-1]<<endl;
	}
	return 0;
}
