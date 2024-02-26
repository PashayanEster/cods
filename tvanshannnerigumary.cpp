// Calculate the sum of the digits of the given number: For example given 4637, return 4+6+3+7:
#include <iostream>
int digit(int num){
    int sum = 0;

    while(num != 0){
            sum += num%10;
            num /= 10;//verjin tivy jnjelu hamar:
    }
    return sum;
}

int main(){
    int a  = 4637;
    int res = digit(a);
    std::cout << res << std::endl;
    std::cout<<digit(a) << std::endl;
    return 0;

}

