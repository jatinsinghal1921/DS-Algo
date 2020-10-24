#include <iostream>
using namespace std;

int get_element(int a[], int left, int right)
{
    if(left>right)
        return -1;
    if(left == right)
        return a[left];
    int mid = left + (right-left)/2;
    int diff;
    if(a[mid] == a[mid-1])
    {
        diff = mid-1-left;
        if(diff%2 == 0)
            return get_element(a, mid+1, right);
        else
            return get_element(a, left, mid-2);
    }
    else if(a[mid] == a[mid+1])
    {
        diff = right-mid-1;
        if(diff%2==0)
            return get_element(a, left, mid-1);
        else
            return get_element(a, mid+2, right);
    }
    return a[mid];
}


int main() {
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
	    cout<<get_element(a, 0, n-1)<<endl;
	    t--;
	}
	
	return 0;
}
