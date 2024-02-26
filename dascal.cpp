#include <iostream>

int main(){
int a ;
std::cin>>a;
int b;
std::cin>>b;
char ch;
if (ch == '+')
{
    std::cout<<a<< '+' <<b<<'=' <<a +b;
}
else if(ch == '-'){
    std::cout<<a<< '-'<<b;

}
else if (ch == '*'){
    std::cout<<a<< '*' <<b;
}
else if ( ch =='/')
std::cout<<a << '/' << b;


else {
    std::cout <<"Invalid ch";
}

}