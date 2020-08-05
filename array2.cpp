#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //max sum 1
    int arr [] = {1, 2, 3, 4, -5};
    int n = sizeof(arr) / sizeof(n);
    int maxsum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n ; ++j)
        {

            int currentsum = 0;
            for (int k = i; k <= j ; ++k)
            {
                currentsum += arr[k];
            }
            if (maxsum < currentsum)
            {
                maxsum = currentsum;
            }
        }
    }
    cout<<maxsum<<endl;

   // max sum 2
    int arr [] = {1, 2, 3, 4, -5};
    int n = sizeof(arr) / sizeof(n);
    int maxsum = 0;
    int currentsum = 0;
    int left, right;

    int cumSum[n] = {0};
    cumSum[0] = arr[0];


    for (int i = 1; i < n ; ++i)
    {
        cumSum[i] = arr[i] + cumSum[i - 1];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << cumSum[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; ++i)
    {
        for (int j = i; j < n ; ++j)
        {
            currentsum = 0;
            currentsum = cumSum[j] - cumSum[i - 1];

            if (maxsum < currentsum)
            {
                maxsum = currentsum;
                left = i;
                right = j;
            }

        }
    }

    currentsum = maxsum + arr[0];

    if (maxsum < currentsum)
    {
        maxsum = currentsum;
        left = 0;
    }


    cout << maxsum << endl;
    for (int i = left; i <= right ; ++i)
    {
        cout << arr[i] << " ";
    }
    

    //max sum 3
    int arr [] = {-1, 2, 3, 4, -5};
    int n = sizeof(arr) / sizeof(n);
    int maxsum = 0;
    int cumSum[n] = {0};

    if(arr[0] < 0)
    {
        cumSum[0] = 0;
    }
    else
    {
        cumSum[0] = arr[0];
    }

    for (int i = 1; i < n; ++i)
    {
        cumSum[i] = cumSum[i-1] + arr[i];

        if(cumSum[i] < 0)
        {
            cumSum[i] = 0;
        }

        maxsum = max(maxsum,cumSum[i]);
    }
    cout<<maxsum<<endl;



    return 0;
}
