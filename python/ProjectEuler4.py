'''
Project Euler Challenge 04:
    Largest palindrome product

Problem Statement:
    Find the largest palindrome made from the product of two 3-digit numbers.
'''
from datetime import datetime


def largest_palindrome():  # Prints the largest palindrome made from the product of two 3-digit number

    start_time = datetime.now().microsecond  # storing starting time

    lower_limit = 100*100  # Storing the smallest number that can be formed
    upper_limit = 999*999  # Storing the largest number that can be formed

    for i in range(upper_limit, lower_limit-1, -1):  # Itterating backward loop
        if __is_palindrome(i):  # If its a palindrome number
            if __got_factors(i):  # And has two 3 digits factors
                print(i)  # Print the number
                break  # Break to loop to get just the largest number

    # Printing total time complexity (unit: ms)
    print("TOTAL TIME TAKEN: ", (datetime.now().microsecond-start_time)/1000)


def __is_palindrome(num):  # Returns if the numer is palindrom or not
    temp = num  # Storing in temporary variable to check the number later
    rev = 0                  # Variable to store reverse of the number

    while num > 0:  # Reversing the number
        rev = (rev*10) + (num % 10)
        num = int(num/10)

    return rev == temp  # Returning if the number is equal to its reverse or not


# Function to check if the palindrome number has two 3 digit factors or not
def __got_factors(number):
    for j in range(100, 1000):  # Loop to check factors
        if number % j == 0:  # If found a 3 digit factor
            # Check if its complementary factor is 3 digit or not
            if int(number/j) >= 100 and int(number/j) <= 999:
                print(j, " X ", int(number/j))  # IF yes, print them
                return True  # And return True

    return False  # If not, return False


if __name__ == "__main__":
    largest_palindrome()
