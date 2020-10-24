#include <iostream>
using namespace std;

void printZigZag(int a[],int n)
{
    int i;
    bool state = true;
    for(i=0;i<n-1;i++)
    {
        if(state && a[i]>a[i+1] || state == false && a[i]<a[i+1])
        {
            swap(a[i],a[i+1]);
        }
        cout<<a[i]<<" ";
        state = !state;
    }
    cout<<a[i];
    
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
	    printZigZag(a, n);
	    cout<<endl;
	    t--;
	}
	
	return 0;
}
