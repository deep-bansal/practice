#include<iostream>
using namespace std;

int maxVal(int*arr, int n)
{
    if(arr[n-2]<=arr[n-1])
    {
        return arr[n-1];
    }
    int maxAns = arr[0];
    int start = 0, end =n-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
        {
            return arr[mid];
        }
        else if(arr[mid-1]<arr[mid])
        {
            start = mid+1;
        }
        else 
        {
            end =mid-1;
        }
    }
    return maxAns;
}
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
        cout<<maxVal(arr,n)<<endl;
    }
	return 0;
}
