#include<iostream>



bool foo(int a) {
    int mask = 0;
        return mask & a;
    }

int main() {
    int a ;
    std::cin>>a;
    foo(a);
    std::cout<<a;
    return 0;
}