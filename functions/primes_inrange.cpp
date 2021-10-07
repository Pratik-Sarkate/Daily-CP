#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

bool isprime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    fast_io;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	std::ios::sync_with_stdio(false);
    int a,b; cin>>a>>b;
    for(int i = a; i<=b; i++){
        if(isprime(i)&&i!=1) cout<<i<<" ";
    }
	return 0;
}

