#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

int octal_decimal(int n){
    int ans = 0;
    int m = 1;
    while(n>0){
        ans+=((n%10)*m);
        m*=8;
        n/=10;
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
    int n;cin>>n;
    cout<<octal_decimal(n);
	return 0;
}

