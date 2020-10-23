#include<iostream>
#include<math.h>
using namespace std;
#define maxn 1010
int main(){
    int n ,a[maxn],b[maxn];
    int kase = 0;
    while(cin>>n && n){
        cout<<"Game "<< ++kase <<":"<<endl;
        for(int i = 0; i < n; ++i)
            cin>>a[i];//答案序列
        for(;;){
            int A = 0, B = 0;
            for(int i = 0; i < n; ++i){
                cin >>b[i];
                if(a[i]==b[i])
                    ++A;
            }
            if(b[0] == 0)
                break;
            //统计数字在答案序列和猜测序列出现了多少次
            for(int d = 1; d <=9; ++d){
                int c1 = 0,c2 = 0;
                for(int i= 0; i < n; ++i){
                    if(a[i]==d) ++c1;
                    if(b[i]==d) ++c2;
                }
                B+=min(c1,c2);
            }
            printf("    (%d,%d)\n", A, B-A);
        }
        
    }
    return 0;
}