#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

int hexadecimal_decimal(string n){
    int ans = 0;
    int m = 1, l = n.length();
    for(int i = l-1; i>=0; i--){
        if(n[i]>='0'&& n[i]<='9') ans+=((n[i]-'0')*m);
        else ans+=((n[i]-'A'+10)*m);
        m*=16;
    }
    return ans;
}
int main()
{
    fast_io;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	std::ios::sync_with_stdio(false);
    string n;cin>>n;
    cout<<hexadecimal_decimal(n);
	return 0;
}

