#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	   
	   int start = 0,end = n-1;
	   int mid;
	   while(start<=end)
	   {
	        mid = (start+end)/2;
	       if(arr[mid] == 0)
	       {
	           if(arr[mid-1] == 0)
	           {
	               end = mid-1;
	           }
	           else
	           {
	               break;
	           }
	       }
	       else
	       {
	           start = mid+1;
	       }
	   }
	   cout<<n-mid<<endl;
	    
	}
	return 0;
}
