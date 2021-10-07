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
    
    int n,s;cin>>n>>s;
    ll a[n]; for(int i = 0; i<n; i++) cin>>a[i];
    
    ll st = a[0], en = st;
    ll sum = 0;
    while(en<n && sum + a[en] <= s){
        sum+=a[en];
        en++;
    }
    if(sum == s){
        cout<<st+1<<" "<<en<<endl;
        return;
    }

    while(en<n){
        sum+=a[en];
        while(sum>s){
            sum-=a[st];
            st++;
        }
        if(sum==s){
            cout<<st+1<<" "<<en+1<<endl;
            return;
        }
        en++;
    }

	return 0;
}

