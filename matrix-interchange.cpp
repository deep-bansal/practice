#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n] = {0};
	    while(k>0)
	    {
	       int x;
	       cin>>x;
	       for(int i = x-1; i<n ;i++)
	       {
	           arr[i]++;
	       }
	       k--;
	    }
	    for(int i = 0;i <n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
