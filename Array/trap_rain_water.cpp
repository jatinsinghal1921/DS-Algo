int trappingWater(int arr[], int n){

    int left[n], right[n], i;
    left[0] = INT_MIN;
    for(i=1;i<n;i++)
    {
        left[i] = max(left[i-1], arr[i-1]);
    }
    right[n-1] = INT_MIN;
    for(i=n-2;i>=0;i--)
    {
        right[i] = max(right[i+1], arr[i+1]);
    }
    
    int sum = 0, boundary_limit;
    for(i=1;i<n-1;i++)
    {
        boundary_limit = min(left[i],right[i]);
        if(arr[i]<boundary_limit)
            sum += boundary_limit - arr[i];
    }
    return sum;
}