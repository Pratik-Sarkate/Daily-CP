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
    
    for(int i = 1; i<n; i++){
        int current  = a[i];
        int j = i-1;
        while(current<a[j] && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }

    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    
	return 0;
}

