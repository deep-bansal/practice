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
	    int k;
	    cin>>k;
	    
	    int ans =0;
	    int length = 0;
	    bool wordPre = false;
	    for(int i =0; i<n; i++)
	    {
	       
	        if(arr[i]>k and wordPre == true)
	        {
	            ans+= length;
	            length = 0;
	            wordPre = false;
	            continue;
	        }
	        else if(arr[i]>k)
	        {
	            wordPre = false;
	            length = 0;
	            continue;
	        }
	        else
	        {
	            length++;
	            if(arr[i] == k)
	            {
	                wordPre = true;
	            }
	        }
	    }
	    if(wordPre == true)
	    {
	        ans+=length;
	    }
	    cout<<ans<<endl;

	}
	return 0;
}
