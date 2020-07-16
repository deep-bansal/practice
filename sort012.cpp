  void sort012(int a[], int n)
{
    // coode here 
    int start = 0,mid = 0,end = n-1;
    while(mid<=end)
    {
        if(a[mid] == 0)
        {
            swap(a[start],a[mid]);
            start++;
            mid++;
        }
        else if(a[mid] == 2)
        {
            int x = a[end];
            swap(a[mid],a[end]);
              end--;
          
        }
        else
        {
            mid++;
        }
        
    }
}
