#include<bits/stdc++.h>
using namespace std;

int maxSumSubmatrix(int arr[10][10], int r, int c)
{
    int sum = INT_MIN;

    for (int i = r - 1; i >= 0; --i)
    {
        for (int j = c - 2; j >= 0; --j)
        {
            arr[i][j] += arr[i][j + 1];
        }

    }

    for (int i = r - 2; i >= 0 ; --i)
    {
        for (int j = c - 1; j >= 0 ; --j)
        {
            arr[i][j] += arr[i + 1][j];
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            sum = max(sum, arr[i][j]);
        }
    }

    return sum;
}


void rotate(int arr[4][4],int r,int c)
{
    for (int i = 0; i < r; ++i)
    {
        int left = 0,right = c-1;
        while(left <= right)
        {
            swap(arr[i][left],arr[i][right]);
            left++;
            right--;
        }
    }
      for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }

    for (int i = 0; i < c; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

     for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void sort01(int* arr,int n)
{
    int left = 0,right = 0;
    while(right<= n-1)
    {
        if(arr[right] == 0)
        {
            swap(arr[left],arr[right]);
            left++;
            right++;
        }
        else 
        {
            right++;
        }
    }

}

void dnfAlgo(int*arr,int n)
{
    int left = 0,mid = 0,right = n-1;
    while(mid <= right)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid],arr[left]);
            mid++;
            left++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid],arr[right]);
            right--;
        }
    }
}

int rainwater(int*arr ,int n)
{
    int leftMax[n],rightMax[n];

    leftMax[0] = arr[0];

    for (int i = 1; i < n; ++i)
    {
        leftMax[i] = max(arr[i],leftMax[i-1]);
    }

    rightMax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0 ; --i)
    {
        rightMax[i] = max(arr[i],rightMax[i+1]);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum+= min(leftMax[i],rightMax[i]) - arr[i];
    }
    return sum;
}



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
	
	 int arr[10][10] = {{ -12, -11, -10, -9},
                       { -4, 0, 3, 4},
                       {1, 2, 4, 5},
                       {2, 3, 5, 6}
    };

    int r = 4, c = 4;
    int sum = maxSumSubmatrix(arr, r, c);
    cout << sum << endl;

   // matrix rotation

    int arr[4][4] =    {{1,2,3},
                       {5,6,7},
                       {9,10,11},
                       };

    int r = 3, c = 3;

    rotate(arr,r,c);


    //sort 0,1

    int n = 10;
    int arr[10] = {1,0,1,0,1,1,1,0,1,0};
    sort01(arr,n);
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;


   // sort 0,1,2

    int n = 11;
    int arr[11] = {1,2,0,1,1,0,2,0,1,2,1};
    dnfAlgo(arr,n);
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    //rainwater harvesting

    int arr[] = {0,2,1,3,0,1,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);

    int total = rainwater(arr,n);

    cout<<total<<endl;





	return 0;
}
