#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>mp;
void fibSeries()
{
    int a=0,b=1,c;
    mp[0] = 0,mp[1] = 1;
    for(int i =0;i<100000;i++)
    {
        c= a+b;
        mp[c] = i+2;
        a=b;
        b=c;
        
    }

    
}

int main()
 {
	//code
	fibSeries();
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	cin>>n;
	int arr[n];
	for(int i =0 ;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i =0;i<n;i++)
	{
	    if(mp.count(arr[i]))
	    {
	        cout<<arr[i]<<" ";
	    }
	}
	cout<<endl;
	}
	return 0;
}
