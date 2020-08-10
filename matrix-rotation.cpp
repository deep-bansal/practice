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
int main(int argc, char const *argv[])
{
    // int arr[10][10] = {{ -12, -11, -10, -9},
    //                    { -4, 0, 3, 4},
    //                    {1, 2, 4, 5},
    //                    {2, 3, 5, 6}
    // };

    // int r = 4, c = 4;
    // int sum = maxSumSubmatrix(arr, r, c);
    // cout << sum << endl;

    int arr[4][4] =    {{1,2,3},
                       {5,6,7},
                       {9,10,11},
                       };

    int r = 3, c = 3;

    rotate(arr,r,c);


    return 0;
}
