
// Irakanacnel strset(char*s,char ch); funkcian,vory trvac s toxi bolor simvolnery poxarinum e ch simvolov:
#include<iostream>
#include<cstring>
void strset(char* s, char ch){

        while(*s != '\0')
        {
            *s = ch;
            ++s;
        }
        
    }

int main (){
    char arr[]= {'s','d','g'};
    strset (arr, 'a');
    for(int i =0; i< 3; ++i)
    {
        std::cout<<arr[i];
    } 

    return 0;
}
