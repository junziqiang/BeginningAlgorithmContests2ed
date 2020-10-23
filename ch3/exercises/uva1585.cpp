#include<iostream>
#include<cstring>
using namespace std;
char buf[100];
int main(){
    int n;
    cin>>n;
    int ans = 0;
    int cent = 0;
    while(n--){
        cin>>buf;
        int ans = 0;
        int cent = 0;
        int len = strlen(buf);
        for(int i = 0; i < len; ++i){
            if(buf[i] == 'O'){
                ++cent;
                ans+=cent;
            }
            else{
                cent = 0;
            }
        }
        cout << ans<<endl;
    }
    return 0;
}