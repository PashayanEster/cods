#include <iostream>

int strcmp(const char * str1, const char * str2)


{

	int count1 = 0;
	int count2 = 0;

	for(int i = 0; str1[i] == '\0'; i++)
	{	
		count1++;
	}

	for(int i = 0; str2[i] == '\0'; i++)
	{
		count2++;

	}

	
	if(count1 >= count2)
	{
		for(int i = 0; i < count2; i++)
		{
			if(str1[i] > str2[i])
			{
				return 1;
			}
			else if(str2[i] > str1[i])
			{
				return -1;
			}

		}
	} 
		
	else
	{
		for(int i = 0; i < count1; i++)
		{
			if(str1[i] > str2[i])
			{	
				return 1; 
			} 
			else if(str2[i] > str1[i])
			{
				return -1;
			}

		}

	}
	return 0;
}
	
	/*	for(int i = 0; str1[i] == '\0' || str2[i] == '\0'; i++) 
		{
			if(str1[i] > str2[i])
			{
				return 1;

			}
			else if(str1[i] < str2[i])
			{

				return -1;
			}

		}	

		return 0;
	*/
	



int main()
{

	char str1[] = "aello";
	char str2[] = "bello";

	std::cout << strcmp(str1, str2); 


}
