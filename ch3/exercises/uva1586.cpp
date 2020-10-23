#include<bits/stdc++.h>

using namespace std;
const int maxn = 100;
double weight[4] = {12.01,1.008,16.00,14.01};
char str[maxn];
int n;

double getweight(char str){
    if(str == 'C')
        return 12.01;
    else if(str == 'H')
        return 1.008;
    else if(str == 'O')
        return 16.00;
    else if(str == 'N')
        return 14.01;
}
int main(){
    cin >> n;
    while(n--){
        int i = 0;
        double weight = 0;
        double sum = 0;
        int num = 0;
        cin>>str;
        while(str[i]!='\0'){

            if(isdigit(str[i])){
                num = num*10 + str[i]-'0';
            }
            else{
                if(num == 0)
                    num = 1;
                //加上次的
                sum +=num*weight;
                num = 0;
                weight = getweight(str[i]);
            }
            ++i;
        }
        if(num ==0)
            num  = 1;
        sum += num*weight;
        printf("%0.3lf\n",sum);
        //cout<< sum<<endl;
    }
    return 0;
}
