#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

void remove_duplicate(char in_string[], int n)
{
    unordered_map<char,int>umap;
    int i=-1,j=0;
    while(j<n)
    {
        if( umap[in_string[j]] == 0)
        {
            i = i+1;
            in_string[i] = in_string[j];
            umap[in_string[j]] = 1;
        }
        j++;
    }
    
    i = i+1;
    in_string[i] = '\0';
}

int main() {
	int t;
	cin>>t;
	char in_string[1000];
    cin.getline(in_string,1000);
	while(t)
	{   
	    cin.getline(in_string,1000);    
	   // getline(cin,in_string);
	    int n = strlen(in_string);
	    remove_duplicate(in_string, n);
	    cout<<in_string<<endl;
	    t--;
	}
	return 0;
}