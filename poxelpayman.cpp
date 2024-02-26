#include <iostream>
int CountOfOddDigits(int startingValueOfRange, int endingValueOfRange) {
	int countOfAllDigits = endingValueOfRange - startingValueOfRange + 1;
	return (startingValueOfRange % 2 == 1) ? (countOfAllDigits / 2 + 1) : (countOfAllDigits / 2);
}
// int main()
// {
//     int startingValueOfRange;
//     int endingValueOfRange;
//     int k = countOfOddDigits;
 
// }