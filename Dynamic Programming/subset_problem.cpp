#include<iostream>
using namespace std;

int dp[100][100];

int does_subset_exists(int a[], int n, int sum)
{

    int i, j;

    for(j=1;j<=sum;j++)
    {
        dp[0][j] = 0;
    }
    for(i=0;i<=n;i++)
    {
        dp[i][0] = 1;
    }
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(a[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else if(a[i-1] == j)
                dp[i][j] = 1;
            else{
                dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
            }
        }
    }

//	Printting the DP matrix    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    j=sum,i=n;
    if(dp[n][sum])
    {
        cout<<"Printing the subset elements for required sum = " << sum <<endl;
        while (j)
        {
            if (dp[i - 1][j] == 0)
            {
                cout << a[i-1] << " ";
                j = j - a[i - 1];
            }
            i--;
        }
    }
    cout<<endl;
    return dp[n][sum];
}

int main()
{
    int a[5] = {2,3,7,8,10};
    int w = 11;
    int status = does_subset_exists(a, 5, 11);
    if(status)
    {
        cout<<"Yes, Subset Exists";
    }
    else{
        cout<<"No, Subset doesn't exists";
    }
}
