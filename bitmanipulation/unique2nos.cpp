#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define MOD 1000000007
#define inf 1000000000000000001
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define all(v) (v).begin(), (v).end()
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define print(x) cout << (x) << '\n'
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int setbitpos(int n){
    int pos = 0;
    int setbit = 0;
    while(setbit==0){
        setbit = n & 1;
        n = n>>1;
        pos++;
        // cout<<pos<<" ";
    }pos--;
    return pos;
}
int main()
{
    fast_io;
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin>>t;
    // cin.ignore(); must be there when using getline(cin, s)
    
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        int xr = 0;
        for(int i = 0; i<n; i++){
            xr = xr ^ a[i];
        }

        int pos = setbitpos(xr);
        // cout<<pos<<endl;
        int a0 = 0, a1 = 0;
        for(int i = 0; i<n; i++){
            if((a[i]&(1<<pos))!=0) a0 = a0 ^ a[i];
        }

        cout<<a0<<" "<<(a0^xr)<<endl;
        
    }
    
    return 0;
}