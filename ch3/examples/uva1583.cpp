/**
 * 
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define maxn 100005
int ans[maxn];
int main(){
    memset(ans,0,sizeof(ans));
    for(int i= 1; i < maxn; ++i){
        int x = i, y = i;
        while(x > 0){
            y+=x%10;
            x/=10;
        }
        //确保最小
        if(ans[y]==0 || i < ans[y]){
            ans[y] = i;
        }
    }
    int n;
    cin >> n;
    while(n--){
        int test;
        cin>>test;
        cout<<ans[test]<<endl;
    }
    return 0;
}