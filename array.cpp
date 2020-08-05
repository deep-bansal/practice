#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	//smaller nos at right of number

	int arr[] = {10,9,5,7,4,6,2,1};
	int n = sizeof(arr)/sizeof(int);

	int count = 1;
	int max = arr[n-1];

	for (int i = n-2; i >= 0; --i)
	{
		if(arr[i] > max)
		{
			count++;
			max = arr[i];
		}
		
	}
	cout<<count<<endl;

 //	greater at right and smaller at left
	int arr[] = {2,5,6,4,9,11,10,12};
	int n = sizeof(arr)/sizeof(n);
	int rightMin[8];
	rightMin[7] = INT_MAX;
	int leftMax[8];
	leftMax[0] = INT_MIN;

	for (int i = 1; i < n; ++i)
	{
		leftMax[i] = max(arr[i-1],leftMax[i-1]);		
	}

	for (int i = 6; i >=0 ; --i)
	{
		rightMin[i] = min(arr[i+1],rightMin[i+1]);
	}

	int count =0;
	for (int i = 0; i < 8; ++i)
	{
		if(arr[i] > leftMax[i] and arr[i] < rightMin[i])
		{
			count++;
			cout<<arr[i]<<", ";
		}		
	}

	//to find square root with precision

	int n,p;
	cin>>n>>p;
	float ans = 0;
	float inc = 1;
	int times = 0;
	while(times <= p)
	{
		while(ans*ans <= n)
		{
			ans = ans + inc;
	        cout<<ans<<endl;
		}
		ans = ans -inc;
		inc = inc/10;
		cout<<"outer"<<ans<<endl;
		times=times+1;
	}
	cout<<ans<<endl;

   // generating subarrays

	int arr [] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			for (int k = i; k <= j ; ++k)
			{
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
	}

	


	return 0;
}
