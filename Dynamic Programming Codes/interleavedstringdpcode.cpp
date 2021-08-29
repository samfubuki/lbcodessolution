u#include<bits/stdc++.h>
using namespace std;
bool go(string fs,string ss,string is,auto &dp)
{
	if(fs.empty() && ss.empty() && is.empty())
		return true;
	if(is.empty())
		return false;
	string str=fs+"|"+ss+"|"+is;
	if(dp.count(str))
		return dp[str];
	bool first=(!fs.empty() and fs[0]==is[0]) and go(fs.substr(1),ss,is.substr(1),dp);
	bool second=(!ss.empty() and ss[0]==is[0]) and go(fs,ss.substr(1),is.substr(1),dp);
	return dp[str]=(first or second);
}
int main()
{
	fast;
	// take_input;
	string fs,ss,is;
	cin>>fs>>ss>>is;
	unordered_map<string,bool> dp;
	cout<<go(fs,ss,is,dp);
}
