#include<iostream>
#include<cstring>
#define maxn  105
using namespace std;

bool less (const char* s, int p, int q){
    int n = strlen(s);
    for(int i= 0; i < n; ++i){
        if(s[(i + p)%n] != s[(i+q)%n])
            return s[(i + p)%n] < s[(i+q)%n];
    }
    return false;
}

int main(){
    char s[maxn];
    int n;
    cin >> n;
    while(n--){
        cin >> s;
        int ans = 0;
        int len = strlen(s);
        for(int i= 0; i < len; ++i){
            if(::less(s,i,ans))
                ans = i;
        }
        for(int i = 0; i < len; ++i){
            cout<<s[(i+ans)%len];
        }
        cout <<endl;
    }
    return 0;
}
