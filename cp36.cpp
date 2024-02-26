// Grel cragir, vory ktpi  0-ic  n (vory nermucum enq)mijakayqi bolor parz tveric arajin 20 tivy:
#include <iostream>
#include <math.h>
int main(){
    int x;
    std::cin>>x;
    int count = 0;
    for (int i = 2; i <= x; ++i) {
        bool is_prime = true;
        for(int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                is_prime = false; 
                break;
            }
        }
        if (count >= 20) break;

        if (is_prime) {
            std::cout << i << " ";
            ++count;
        }
    }
}
