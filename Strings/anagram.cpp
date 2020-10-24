#include <iostream>
#include <unordered_map>
using namespace std;

void isAnagram(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        cout<<"NO";
        return;
    }
    
    unordered_map<char,int>umap;
    int i;
    for(i=0;i<s1.length();i++)
    {
        umap[s1[i]] += 1;
    }
    for(i=0;i<s2.length();i++)
    {
        if(umap[s2[i]] == 0)
        {
            cout<<"NO";
            return;
        }
        umap[s2[i]] --;
    }
    
    cout<<"YES";
}


int main() {
	int t;
	cin>>t;
	
	while(t)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    isAnagram(s1,s2);
	    cout<<endl;
	    t--;
	}
	
	return 0;
}