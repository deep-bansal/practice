#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n][m];
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    long long int ans = 0;
	    for(int i = x1-1;i<x2;i++)
	    {
	        for(int j=y1-1;j<y2;j++)
	        {
	            ans+= arr[i][j];
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
