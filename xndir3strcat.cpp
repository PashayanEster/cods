
// Irakancnel  char* strcat(char* s1, char* s2);funkcian, vory stanum e erku C toxer ev konkatenacnum e (miacnum e )toxery irar` pahelov arajin argumentum:
#include<iostream>
#include<cstring>
char* strcat(char* s1,char* s2) {

    while (*s1 != '\0')
    {
        s1++;
    }
    while(*s2 != '\0')
    {
        *s1  = *s2;
        s1++;
        s2++;
    }
    return s1;
}
int main()
{   
    char arr1[10] = {'a','b','c'};
    char arr2[3] = { 'd', 'e', 'f'};
    char* ptr = arr1;
    strcat(arr1, arr2);
    while (*ptr != '\0'){
        std::cout<< *ptr;
        ptr++;

    }
    return 0;
}