/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;

int longest_distinct_characters(string s)
{
    int longest = INT_MIN;
    int start=0,end=0,i;
    unordered_map<char,int>umap;
    umap[s[0]] = 0;
    
    // abababcdefababcdab
    
    for(i=1;i<s.length();i++)
    {
        // cout<<" Index : "<<i<<" Start : "<<start<<" End : "<<end<<" ";
        if(umap.find(s[i]) != umap.end())
        {
            if(end-start+1 > longest)
                longest = end-start+1;
            
            while(start<umap[s[i]])
            {
                umap.erase(s[start]);
                start++;
            }
            start = umap[s[i]] + 1;
        }
        end = i;
        umap[s[i]] = i;
        // cout<<" Start : "<<start<<" End : "<<end<<endl;
    }
    if(end-start+1 > longest)
        longest = end-start+1;
    return longest;
}

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    string s;
	    cin>>s;
	    int l = longest_distinct_characters(s);
	    cout<<l<<endl;
	    t--;
	}
	return 0;
}
