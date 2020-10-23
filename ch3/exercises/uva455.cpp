//提交出错

#include<iostream>
#include<cstring>
using namespace std;
char str[100];
int n;
int main(){
    cin>>n;
    while(n--){
        cin >> str;
        int len = strlen(str);
        for(int i =1 ; i <= len/2; ++i){
            if(len%i==0){
                bool flag = true;
                for(int j = i; j < len; ++j){
                    if(str[j] !=str[j%i]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}