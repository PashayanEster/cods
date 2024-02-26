//XNDIR 3-Grel funkcia, vory stanum e mijakayqi skizb ev verj(erku tver) ev hashvum mijakayqum gtnvox kent tveri  qanaky:___POSIX_C_DEPRECATED_STARTING_198808L
#include <iostream>

int foo(int first, int last)
{
    int count = 0;
    for (int i = first; i <= last; ++i)
    {
        if (i%2 != 0)
        {
            count += 1;  
        }
    }
    return count;
}
int main ()
{  
    int a;
    int b ; 
    int k = foo(1, 7);
    std::cout << k;
}