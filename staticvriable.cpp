#include <iostream>
class boo
{public:
    static int x;
    void foo( )
    { x = 0;
    ++ x;}
};
int main(){
    boo a;
    std::cout<< boo::x;
}