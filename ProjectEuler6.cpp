#include <iostream>
using namespace std;

void main()
{
	/*
	The sum of the squares of the first ten natural numbers is,
	1^2 + 2^2 + ... + 10^2 = 385
	The square of the sum of the first ten natural numbers is,
	(1 + 2 + ... + 10)^2 = 55^2 = 3025
	Hence the difference between the sum of the squares of
	the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
	
	Find the difference between the sum of the squares of
	the first one hundred natural numbers and the square of the sum.
*/

	int sumOfSquares = 0; //the sum of the numbers in squars
	int SquareOfSum = 0; //the square of the the sum form 1 to 100 (includ)

	for (int i = 1; i < 101; i++)
	{
		sumOfSquares += i*i;
		SquareOfSum += i;
	}
	SquareOfSum = SquareOfSum * SquareOfSum;
	int differenceBetweenSums = SquareOfSum - sumOfSquares;
	cout << differenceBetweenSums << endl;
};