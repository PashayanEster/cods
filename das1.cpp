
// hashvum ev veradardznum  e zangvaci max, ev min  artadryaly
#include <iostream>
int multyply( int* arr, int size){
int max =arr[0];
int min = arr[1];
for(int i=0; i < size; ++i)
if (arr[i] > max){
max = arr[i];}
else if  ( arr[i] < min){

    min = arr[i];
}





int main() {
int size = 5;
int arr[size];
int multyply( arr, size);
std::cout<<min*max;
}


}
