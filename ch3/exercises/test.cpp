#include<iostream>
#include<thread>

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int a = 3, b = 4;
    swap(&a,&b);
    std::cout<<"a: "<<a<<"b: "<<b<<std::endl;
    return 0;
}