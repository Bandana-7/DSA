// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
	
		string is_palindrome(int n)
		{
		    string str = to_string(n);
		    string ans = check(str,str.size(),0);
		    return ans;
		}
		
	string check(string &str,int N,int M)
    {
        if(N==0 && M==str.size())
        {
            return "Yes";
        }
        if(str[N-1]==str[M])
        {
            check(str,N-1,M+1);
            return "Yes";
        }
        else
         return "No";
         
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends