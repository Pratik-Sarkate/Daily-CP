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

    const int N = 1e6+2;
    int idx[N];
    for(int i = 0; i<n; i++) idx[i] = -1;


    int minind = INT_MAX;

    for(int i = 0; i<n; i++){
        if(idx[a[i]] != -1){
            minind = min(minind,idx[a[i]]); 
        }else idx[a[i]] = i;
    }

    if(minind == INT_MAX) cout<<"-1"<<endl;
    else cout<<minind+1<<endl;

	return 0;
}

