#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    fast_io;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	std::ios::sync_with_stdio(false);
    
    int n;cin>>n;
    int a[n]; for(int i = 0; i<n; i++) cin>>a[i];
    int mx = a[0];
    int ma[n] = {0};
    for(int i = 0; i<n; i++){
        mx = max(a[i],mx);
        ma[i] = mx;
    }

    for(int i = 0; i<n; i++) cout<<ma[i]<<" ";
	return 0;
}

