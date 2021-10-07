#include<stdio.h>
#include<string.h>
// #define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
typedef long long int ll;

int main()
{
    // fast_io;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	// std::ios::sync_with_stdio(false);
    char s[50];int flag = 1;
    while(1){
        if(flag==1){
            scanf("%s",s);
            printf("NSE:%s",s);
            flag = 0;
        }
        scanf("%s",s);
        if(atoi(s)==1) break;
        printf(",NSE:%s",s);
    }
	return 0;
}
