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
    
    int t;cin>>t;
    while(t!=0){
        int n;cin>>n;
        int a[n];
        for(int i = 0; i<n; i++) cin>>a[i];
        int mx = a[0],cnt = 0;
        int i = 0;
        if(mx>a[1]) cnt++;
        for(i = 1; i<n-1; i++){
            if(mx<a[i] && a[i]>a[i+1]){
                cnt++;
            }
            mx = max(a[i],mx);
        }
        if(a[i]>mx) cnt++;

        cout<<"Case #"<<t<<":"<<cnt<<endl;
        t--;
    }
	return 0;
}

