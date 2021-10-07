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
    int n; cin>>n;
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=n-i; j++) cout<<"  ";
        for(int j = 1; j<=i; j++) cout<<"* ";
        cout<<endl;
    }
	return 0;
}

/*
      * 
    * * 
  * * * 
* * * * 

*/