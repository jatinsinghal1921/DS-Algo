#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
#include <unordered_map>

using namespace std;

bool sort_func(pair<int,int>p1, pair<int,int>p2)
{
    return p1.first < p2.first;
}

int platform_count(int a[], int d[], int n)
{
    vector<pair<int,int>>v;
    int i;
    for(i=0;i<n;i++)
    {
        v.push_back( make_pair(a[i],d[i]) );
    }
    sort(v.begin(),v.end(),sort_func);
    
    unordered_map<int,int>umap;
    unordered_map<int,int>:: iterator it;
    umap[1] = v[0].second;
    
    int platform_count = 1;
    for(i=1;i<n;i++)
    {
        for(it = umap.begin(); it!= umap.end() ;it++)
        {
            if(v[i].first > it->second)
            {
                it->second = v[i].second;
                break;
            }
        }
        if(it == umap.end())
        {
            platform_count++;
            umap[platform_count] = v[i].second;
        }
    }
    
    return platform_count;
}

int main() {
	//code
    int t,n,i;
    cin>>t;
    while(t)
    {
        cin>>n;
        int a[n];
        int d[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>d[i];
        cout<<platform_count(a,d,n)<<endl;
        t--;
    }
	return 0;
}