#include <iostream>
// Irakanacnel funkcia, vory shrjum e  C -akan toxy (char*):Ogtagorecel dinamik zangvac toxi hamar:

void foo(char* arr)
{
    char* i = arr;
    char* j = arr;
    
    while (*(j+1)){
        ++j;
    }
    
    while (j > i){
        char tmp = *i;
        *i = *j;
        *j = tmp;
        ++i;
        --j;
    }
}

int main()
{
    char arr[] = "Hello";
    foo(arr); //olleH
    std::cout << arr;
    return 0;
}
