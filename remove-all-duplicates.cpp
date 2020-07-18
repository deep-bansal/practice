#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string input;
	    cin>>input;
	    set<char>st;
	    string output;
	    for(int i=0;i<input.size();i++)
	    {
	        char ch = input[i];
	        if(st.count(ch) == false)
	        {
	            output+=ch;
	            st.insert(ch);
	        }
	        
	    }
	    cout<<output<<endl;
	}
	return 0;
}
