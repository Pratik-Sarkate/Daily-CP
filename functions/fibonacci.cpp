#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

void fibonacci(int n){
    int a = 0,b = 1;
    for(int i = 0; i<n; i++){
        cout<<a<<" ";
        int t = a;
        a = b;
        b+=t;
    }
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
    fibonacci(n);
	return 0;
}

