#include <iostream>
using namespace std;


void longestPalindromicSubString(string s)
{
    long long start=0,largest=1, n=s.length(), low, high, i;
    for(i=1;i<n;i++)
    {
        // Even length palindrome
        low = i-1;
        high = i;
        while(low>=0 && high<n && (s[low] == s[high]))
        {
            if(high-low+1 > largest)
            {
                largest = high-low+1;
                start = low;
            }
            low--;
            high++;
        }
        
        // Odd length Palindrome
        low = i-1;
        high = i+1;
        while(low>=0 && high<n && (s[low] == s[high]))
        {
            if(high-low+1 > largest)
            {
                largest = high-low+1;
                start = low;
            }
            low--;
            high++;
        }
    }
    
    for(i=start; i<largest+start; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}


int main() {
	int t;
	cin>>t;
	
	string s;
	while(t)
	{
	    cin >> s;
        longestPalindromicSubString(s);
	    t--;
	}
	
	
	return 0;
}