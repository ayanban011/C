#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
	    string s, res="";
	    int len,count=0;
	    int p=1,ans=0;
	    cin>>len;
	    cin>>s;
	    for(int i=len-1;i>=0;i--)
	    {
	        ans+=p*(s[i]-'0');
	        p=p*2;
	        count++;
	        if(count==4)
	        {
	            char ch = (char)(97+ans);
	            res.push_back(ch);
	            count=0;
	            p=1;
	            ans=0;
	        }
	    }
	    reverse(res.begin(),res.end());
	    cout<<res<<endl;
	    res.clear();
	    s.clear();
	}
	return 0;
}
