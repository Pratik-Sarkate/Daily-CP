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
        int ml = 2,cd = a[1]-a[0],cl = 2;
        int j = 2;
        while(j<n){
            if(cd==a[j]-a[j-1]){
                cl++;
                ml = max(ml,cl);
            }else{
                cl = 2;
                cd = a[j]-a[j-1];
            }
            j++;
            
        }
        cout<<"Case #"<<t<<":"<<ml<<endl;
        t--;
    }
	return 0;
}

