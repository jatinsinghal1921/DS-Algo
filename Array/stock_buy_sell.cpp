#include <iostream>
using namespace std;


void profitable_stock(int a[], int n)
{
    int i,start=-1,profit_present=0;
    for(i=0;i<n-1;i++)
    {
        if(start == -1)
        {
            if(a[i+1] > a[i])
                start = i;
        }
        else
        {
            if(a[i+1] < a[i])
            {
                cout<<"("<<start <<" "<<i<<")"<<" ";
                start = -1;
                profit_present = 1;
            }
        }
    }
    
    if(start == -1){
        if(profit_present==0){
            cout<<"No Profit";
        }
    }
    else{
        cout<<"("<<start <<" "<<i<<")"<<" ";
    }
}


int main() {
	int t,n,i;
	cin>>t;
	while(t)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    profitable_stock(a, n);
	    cout<<endl;
	    t--;
	}
	return 0;
}