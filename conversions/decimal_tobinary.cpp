#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

int decimal_tobinary(int n){
    int m = 1, ans = 0;
    while(m<=n) m*=2;
    m/=2;
    while(m>0){
        int ld = n/m;
        n-=ld*m;
        ans = ans*10 + ld;
        m/=2;
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
    cout<<
    decimal_tobinary(n);
	return 0;
}

