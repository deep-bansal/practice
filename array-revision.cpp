#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	//bubble sort

	int arr[] = {5,9,5,3,2,6};
	int  n  =sizeof(arr)/sizeof(int);

	bool isSorted = true;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < (n-i-1) ; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				isSorted =false;
			}

		}

		    if(isSorted)
		    {
				break;
		    }

	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	//insertion sort

	for(int i=1; i<n; i++)
	{
		int key = arr[i];
		int j = i-1;
		while(j>=0 and arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	//selection sort

	for (int i = 0; i < n; ++i)
	{
		int min_index = i;

		for (int j = i; j < n; ++j)
		{
			if(arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		swap(arr[min_index],arr[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	
	}

	//stable selection sort
	for (int i = 0; i < n; ++i)
	{
		int min_index = i;

		for (int j = i; j < n; ++j)
		{
			if(arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		int key = arr[min_index];
		for (int j = min_index-1; j >= i; j--)
		{
			arr[j+1] = arr[j];
		}
		arr[i] = key;

	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	//wave sort

	int arr[] = {5,6,7,2,9,10,3};
	int n = sizeof(arr)/sizeof(int);

	for (int i = 0; i < n; i=i+2)
	{
		if(i < n-1 and arr[i] < arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}

		if(i > 0 and arr[i] < arr[i-1])
		{
			swap(arr[i],arr[i-1]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}
