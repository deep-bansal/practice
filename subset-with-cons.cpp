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
	    int count =1;
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++)
	    {
	       if(arr[i+1] != arr[i]+1)
	       {
	           count++;
	       }
	    }
	    cout<<count <<endl;
	}
	return 0;
}
