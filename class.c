#include <stdio.h>

int length(char name[]);

int main(){
	
	char name[] = "Anush";

 	printf("%i", length(name));

}

int length(char* name)
{
	int x = 0;
	for (int i = 0; name[i] != '\0'; ++i){
		x++;
	}
	return x;
}
