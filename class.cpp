#include <iostream>

int main(){

int num = 0;

std::cout << "Muqagrel tivy: ";
std::cin >> num;

int count = 0;

for(int i = 1; i < sizeof(num); i++){
	count += num % 10^i;	
}	

std::cout << count;

}
