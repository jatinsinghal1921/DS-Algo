#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string remove_adjacent_duplicates(string s)
{
    int n = s.length();
    
    if(n==0)
        return "";
    
    int i,v[n] = {0};
    
    int is_similar = 0;
    for(i=0;i<n-1;i++)
    {
        if(s[i] == s[i+1])
        {
            v[i] = 1;
            v[i+1] = 1;
            is_similar = 1;
        }
    }
    
    if(is_similar == 0)
        return s;
    
    string output = "";
    for(i=0;i<n;i++)
    {
        if(v[i]==0)
        {
           output += s[i]; 
        }
    }
    return remove_adjacent_duplicates(output);
}

int main() {
	int t;
	cin>>t;
	string s;
	while(t)
	{
	    cin>>s;
	    cout<<remove_adjacent_duplicates(s)<<endl;
	    t--;
	}
	return 0;
}