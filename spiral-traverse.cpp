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
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < m; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	    int startrow = 0,endrow = n-1,startcol = 0,endcol = m-1;
	    while(startrow <= endrow and startcol <= endcol)
	    {
	        int i = startcol;
	        while(i <= endcol)
	        {
	            cout<<arr[startrow][i]<<" ";
	            i++;
	        }
	        startrow++;
	        
	        i = startrow;
	        while(i <= endrow)
	        {
	            cout<<arr[i][endcol]<<" ";
	            i++;
	        }
	        endcol--;
	        
	       if(endrow >= startrow)
	       {
	           i = endcol;
	            while(i>=startcol)
               {
               cout<<arr[endrow][i]<<" ";
               i--;
               }
            endrow--;
	       }
	        if(endcol>=startcol)
        {
            i=endrow;
            while(i>=startrow)
            {
                cout<<arr[i][startcol]<<" ";
                i--;
            }
            startcol++;
        }
	        
	        
	    }
	    cout<<endl;
	}
	return 0;
}
