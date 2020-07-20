int findExtra(int a[], int b[], int n) {
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end)
    {
        int mid = (start + end)/2;
        
        if (a[mid] == b[mid])
        {
            start = mid+1;
        }
        else 
        {
            ans = mid;
            end =mid-1;
        }
    }
    return ans;
    // add code here.
}
