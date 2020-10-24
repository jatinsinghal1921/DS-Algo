#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int get_element(int a[], int n)
{
    int i, left[n], right[n];
    left[0] = INT_MIN;
    for(i=1;i<n;i++)
    {
        left[i] = max(left[i-1], a[i-1]);
    }
    right[n-1] = INT_MAX;
    for(i=n-2;i>=0;i--)
    {
        right[i] = min(right[i+1], a[i+1]);
    }
    
    for(i=1;i<n-1;i++)
    {
        if(a[i] >= left[i] && a[i] <= right[i])
            return a[i];
    }
    return -1;
}


int main() {
	//code
    int t,n,i;
    cin>>t;
    while(t)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<get_element(a,n)<<endl;
        t--;
    }
	return 0;
}