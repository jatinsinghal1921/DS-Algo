#include <iostream>
#include <climits>
using namespace std;

void longest_common_prefix(string a[],int n)
{
    int i,min_length=INT_MAX;
    int l;
    for(i=0;i<n;i++)
    {
        l = a[i].length();
        if(l < min_length)
        {
            min_length = l;
        }
    }
    
    int j;
    for(i=0;i<min_length;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[0][i] != a[j][i])
                break;
        }
        if(j!=n)
            break;
        else
            cout<<a[0][i];
    }
    if(i==0)
        cout<<-1;

}


int main() {
	int t,n;
	cin>>t;
	while(t){
        cin>>n;
        string a[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        longest_common_prefix(a,n);
        cout<<endl;
        t--;
	}
	return 0;
}