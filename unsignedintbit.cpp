
// Task1:Implement a function that prints the 1 and 0 of an unsigned int argument to the screen the number of bits.
// Իրականացնել ֆունկցիա, որը տպում է էկրանին unsigned int արգումենտի 1 և 0 բիթերի քանակները։ 

#include <iostream>
using namespace std;
void foo(unsigned num){
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < sizeof(int)*8; ++i){
    if ((num & 1) == 1){

        count1++;
    }
        else{
            count2++;
        }
        num <<=1;
    }
cout << count1<<endl;
cout << count2;
}
int main(){
unsigned int num;
cin>>num;
foo(num);
return 0;
}