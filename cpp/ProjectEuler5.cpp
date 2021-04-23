#include <iostream>
using namespace std;

	//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
	//RequestNUm = What is the smallest positive - חיובי number that is evenly divisible by all of the numbers from 1 to 20?
	void main()
	{

		int RequestNUm = 0; //המספר הכי קטן שמתחלק בכל המספרים 1 -20 ללא שארית
		int CheckNum = 0; //המספר שנבדק בחילוק ב 1 -20
		for (CheckNum = 2520; CheckNum != RequestNUm; CheckNum=+20)
		{
			int count = 0;
			for (int DivNum = 1; DivNum < 21; DivNum++)
			{
				if (CheckNum % DivNum == 0)
					count++;
			}
			if (count == 20)
				RequestNUm = CheckNum;
		}
		cout << RequestNUm <<endl;

		int j;
		cin >> j;
 	}	

 //not finish
 // float targil6()  
 // {

	//  //The sum of the squares of the first ten natural numbers is 385
	//  //The square of the sum of the first ten natural numbers is 3025
	//  //Hence the difference between the sum of the squares of
	//  //the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

	//  //Find the difference between the sum of the squares of
	//  //the first one hundred natural numbers and the square of the sum.

	//  int sumOfSquares = 0; //the sum of the numbers in squars
	//  int SquareOfSum = 0; //the square of the the sum form 1 to 100 (includ)
	//  for (int i = 1; i < 101; i++)
	//  {
	// 	 sumOfSquares += i*i;
	// 	 SquareOfSum += i;
	//  }
	//  SquareOfSum = SquareOfSum * SquareOfSum;
	//  int differenceBetweenSums = SquareOfSum - sumOfSquares;
 // }   

