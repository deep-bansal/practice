#include<bits/stdc++.h>
using namespace std;


void prefixComp(int arr[2][2],int prefixMat[2][2],int r,int c)
{
	for (int i = 0; i < c; ++i)
	{
		prefixMat[0][i] = arr[0][i];
	}

	//doing column wise addition
	for (int i = 1; i < r ; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			prefixMat[i][j] = prefixMat[i-1][j] + arr[i][j];
		}
	}

	//doing row wise addition

	for (int i = 0; i < r; ++i)
	{
		for (int j = 1; j < c ; ++j)
		{
			prefixMat[i][j] += prefixMat[i][j-1];
		}
	}
	
}

int sumAllMatrices(int prefixMat[2][2],int r, int c)
{
	int sum = 0;
	for (int tli = 0; tli < r; ++tli)
	{
		for (int tlj = 0; tlj < c; ++tlj)
		{
		     for (int bri = tli; bri < r ; ++bri)
		     {
		     	for (int brj = tlj; brj < c; ++brj)
		     	{
		     		int subMatSum = prefixMat[bri][brj];
		     		if(tli > 0)
		     		{
		     			subMatSum -= prefixMat[tli-1][brj];
		     		}

		     		if(tlj > 0)
		     		{
		     			subMatSum -= prefixMat[bri][tlj-1];
		     		}

		     		if(tli>0 and tlj>0)
		     		{
		     			subMatSum += prefixMat[tli-1][tlj-1];
		     		}

		     		sum+= subMatSum;
		     	}
		     }
		}
	}
	return sum;
}

int  sumAllsubmatrix(int arr[2][2],int r,int c){

	int sum = 0;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			int topLeft = (i+1) * (j+1);
			int bottomRight = (r-i) * (c - j);
			sum += arr[i][j]* topLeft * bottomRight;
		}
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	//sub matrix brute force approach

	int arr[2][2] = { {1, 1},
		{1, 1}
	};

	int sum = 0;

	for (int tlx = 0; tlx < 2 ; ++tlx)
	{
		for (int tly = 0; tly < 2 ; ++tly)
		{
			for (int blx = tlx; blx < 2; ++blx)
			{
				for (int bly = tly; bly < 2; ++bly)
				{
					for (int l = tlx; l <= blx; ++l)
					{
						for (int k = tly; k <= bly; ++k)
						{
							sum = sum + arr[l][k];
						}
					}
				}
			}
		}
	}
	cout << sum << endl;

	sub matrix cumulative sum approach

	int arr[2][2] = { {1, 2},
		{3, 4}
	};

	int prefixMat[2][2] = {0};
	int r=2,c=2;
	prefixComp(arr,prefixMat,r,c);
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout<<prefixMat[i][j]<<" ";
		}
		cout<<endl;
	}

	int sum = sumAllMatrices(prefixMat,r,c);

	cout<<sum<<endl;

	sub matrix sum 3rd approach

	int arr[2][2] = {{1,1},
					 {1,1}};
	int r =2, c =2;
	int sum = sumAllsubmatrix(arr, r, c);
	cout<<sum<<endl;




	return 0;
}
