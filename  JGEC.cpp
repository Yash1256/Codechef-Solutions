#include <bits/stdc++.h> 

using namespace std; 

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define speed ios_base::sync_with_stdio(0);
#define upp cin.tie(0);cout.tie(0);
#define ll long long
#define f first
#define s second
#define testcase int tc=1;cin>>tc;while(tc--)

int main()
{
	speed upp
	string find_string = "JGEC";
	string str;
	testcase
	{
		int n , count = 0;
		cin>>n;
		cin>>str;
		size_t found = str.find(find_string);
		while(found != string::npos)
		{
			count++;
			found = str.find(find_string , found+1);
		}
		cout<<count<<endl;
		str.clear();
	}
	return 0;
}
