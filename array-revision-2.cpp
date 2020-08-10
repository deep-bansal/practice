#include <bits/stdc++.h>
using namespace std;

bool staircasesearch(int arr[5][4],int r,int c,int key)
{
    int i = 0, j =c-1;
    while(i<r and j>=0)
    {
        if(key == arr[i][j])
        {
            return true;
        }
        else if(key > arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{

    wave print
    int arr[5][4] = {{1,11,111,1111},    
                     {2,22,222,2222},
                     {3,33,333,3333},
                     {4,44,444,4444},
                     {5,55,555,5555}};


    for (int i = 0; i < 4 ; ++i)
    {
        if(i%2 ==0)
        {
            for (int j = 0; j < 5; ++j)
            {
                cout<<arr[j][i]<<" ";
            }

        }
        else
        {
            for (int j = 4; j >= 0; --j)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }

    int arr[5][4];

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            arr[i][j] = (10*i) + j +1;
        }
    }

    for (int i = 0; i < 5; ++i)
    {
       if(i%2 == 0)
       {
         for (int j = 0; j < 4; ++j)
        {
            cout<<arr[i][j]<<" ";
        }

       }
       else
       {
         for (int j = 3; j >= 0; --j)
        {
            cout<<arr[i][j]<<" ";
        }
       }
       cout<<endl;
    }

    stair case search
    int key;
    cin>>key;
    int arr[5][4]=     { {1,11,111,1111},

                         {2,22,222,2222},

                         {3,33,333,3333},

                         {4,44,444,4444},

                         {5,55,555,5555} };
       bool result= staircasesearch (arr,5,4,key);
        if(result)
        {
            cout<<"is found"<<endl;
        }
        else
        {
            cout<<"is not found"<<endl;
        }

    spiral print clockwise

     int arr[5][4]=     { {1,11,111,1111},

                          {2,22,222,2222},

                          {3,33,333,3333},

                          {4,44,444,4444},

                          {5,55,555,5555} };

    int startRow = 0,endRow = 4,startCol = 0,endCol = 3;

    while(startRow <= endRow && startCol <= endCol)
    {
        //startrow
        int i = startCol;

        while(i <= endCol)
        {
            cout<<arr[startRow][i]<<" ";
            i++;
        }

        startRow++;
        cout<<endl;

        //endcol

        i = startRow;
        while(i<= endRow)
        {
            cout<<arr[i][endCol]<<" ";
            i++;
        }
        endCol--;

        //endrow

        if(endRow >= startRow)
        {
             i = endCol;
             while(i >= startCol)
        {
            cout<<arr[endRow][i]<<" ";
            i--;
        }
        endRow--;

        }

        if(startCol <= endCol)
        {
             i = endRow;
             while(i >= startRow)
        {
            cout<<arr[i][startCol]<<" ";
            i--;
        }
        startCol++;

        }

    }






    
    return 0;
}
