#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

	//vasya and strings
	int n,k;
	cin>>n>>k;

	string str;
	cin>>str;
	int ansMax = 0;

	int arr[2] = {0};

	int start = 0,i = 0;

	while(i < n)
	{
		arr[str[i] - 'a']++;
		if(min(arr[0],arr[1]) > k)
		{
			arr[str[start] - 'a']--;
			start++;
		}
		else
		{
			ansMax++;
		}
		i++;

	}
	cout<<ansMax<<endl;

	//closet triplet 

	int arr1[3] = {1,2,6};
	int arr2[2] = {5,6};
	int arr3[3] = {7,10,11};

	int size1 = 3,size2 = 2,size3 = 3;
	int i = 0,j=0,k=0;

	int trip1,trip2,trip3;
	int mindDiff = INT_MAX;
	while(i < size1 && j < size2 && k < size3)
	{
		int miniNum = min(arr1[i],min(arr2[j],arr3[k]));
		int maxNum = max(arr1[i],max(arr2[j],arr3[k]));

		int diff = maxNum - miniNum;
		if(diff < mindDiff)
		{
			mindDiff = diff;
			trip1 = arr1[i];
			trip2 = arr2[j];
			trip3 = arr3[k];
		}
		if(mindDiff == 0)
		{
			break;
		}
		if(miniNum == arr1[i])
		{
			i++;
		}
		else if(miniNum == arr2[j]) j++;
		else k++;
	}

	cout<<"mindDiff : " <<mindDiff<<endl;
	cout<<trip1<<" "<<trip2<<" "<<trip3<<" "<<endl;

	//distinct rectangles

	int n;
	cin>>n;
	int count =0;

	for (int length = 1; length*length <= n; ++length)
	{
		for (int height = length; height*length <= n ; ++height)
		{
			count++;
		}
		
	}
	cout<<count<<endl;

	//making k nos equal

	int arr[] = {10,2,9,3,5,4,1};
	int n = sizeof(arr)/sizeof(int);
	int k = 4;
	sort(arr,arr+n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int minOperations = INT_MAX;
	int Operations = 0;

	int j;
	for (int i = k-1; i < n ; ++i)
	{
		j = i-k+1;

		while(j <= i)
		{
			int diff = arr[i] - arr[j];
			Operations += diff;
			j++;
		}

		if(Operations < minOperations)
		{
			minOperations = Operations;
		}
		Operations = 0;
	}
	cout<<minOperations<<endl;

	




	return 0;
}
