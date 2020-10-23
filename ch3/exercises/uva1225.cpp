#include<iostream>
using namespace std;
const int maxn = 10005;
int ans[maxn][10];
int main(){
    //记录一个数字中的各个位数是多少
    int cnt[10]={0};
    for(int i = 1; i < maxn; ++i){
        int temp = i;
        while(temp!=0){
            cnt[temp%10]++;
            temp/=10;
        }
        for(int j=0;j<10;++j){
            ans[i][j] = cnt[j];
        }
    }
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        for(int i = 0; i < 10; ++i){
            if(i > 0)
                cout <<" ";
             cout << ans[n][i];
        }
        cout << endl;
        /* code */
    }
}