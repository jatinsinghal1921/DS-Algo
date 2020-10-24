#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void list_permuatations(string s, set<string>&st , int first, int last)
{
    
    if(first >= last)
        st.insert(s);
    else
    {
        int i;
        for(i=first;i<=last;i++)
        {
            swap(s[i], s[first]);
            list_permuatations(s, st, first+1, last);
            swap(s[i], s[first]);
        }
    }
}


int main() {
	int t;
	cin>>t;
	string s;
	
	while(t--)
	{
	    cin>>s;
	    set<string>st;
	    list_permuatations(s, st, 0, s.length()-1);
	    
	    set<string>::iterator it;
	    for(it = st.begin(); it!= st.end(); it++)
	    {
	        cout<<*it<<" ";    
	    }
	    cout<<endl;
	}
	return 0;
}