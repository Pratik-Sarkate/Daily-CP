#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

void solve(){
    
}
int main()
{
    fast_io;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	std::ios::sync_with_stdio(false);
    
        // solve();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n-1; i++){
        int minInd = i;
        for(int j = i; j<n; j++){
            if(a[minInd] > a[j])
            {
                minInd = j;
            }
        }
        int t = a[i];
        a[i] = a[minInd];
        a[minInd] = t;
    }

    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    
	return 0;
}

