#include<iostream>
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
	    int len =0,maxLen=0;
	    for(int i =0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            len++;
	        }
	        else
	        {
	            len = 0;
	        }
	        maxLen = max(maxLen,len);
	    }
	    cout<<maxLen<<endl;
	}
	return 0;
}
