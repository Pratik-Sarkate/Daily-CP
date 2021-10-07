#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;
using namespace std;

bool ispytha(int a,int b,int c)
{
    int x1 = max(a,max(b,c));
    int x2,x3;
    if(x1==a) {x2 = b; x3 = c;}
    else if(x1==b){ x2 = c; x3 = a;}
    else {x2 = a; x3 = b;}
    if((x1*x1)==((x2*x2)+(x3*x3))) return true;
    else return false;

}
int main()
{
    fast_io;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	std::ios::sync_with_stdio(false);
    int a,b,c;cin>>a>>b>>c;
    (ispytha(a,b,c))? cout<<"Yes": cout<<"No";
	return 0;
}


