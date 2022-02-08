//Student Name:		Rasul Iskandarov
//Student Number:	C00246498
//Course:			Software Development 3rd year
//Date:				15/10/2021

#include <iostream>

bool isLeapYear(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}

}

int Reversed(int num)
{
	int reversed = 0;
	int remainder = 0;

	int temp = num;

	while (num > 0) {
		remainder = num % 10;  //gets last digit of "num" 

		reversed *= 10;			
		reversed += remainder;	//inserts last digit of "num" on right side 

		num /= 10; 
	}

	return reversed;
}

bool isAPalindrome(int num)
{

	if (num == Reversed(num)) {
		return true;
	}
	else {
		return false;
	}


}

bool isAPrimeNumber(int num)
{
	int counter = 0;   //if num divided more than 0 times => not prime number

	for (int i = 2; i < num; i++) //starts from 2 to avoid "1" and ends before itself
	{
		if (num % (i) == 0)
		{
			counter++;
		}
	}

	if (num == 0) {
		return false;
	}
	if (counter > 0) {
		return false;
	}
	else {
		return true;
	}
}

int input5CharsConvertToInt()
{
	int returnInt = 0;
	char inputChar;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> inputChar;

		if (inputChar >= 48 && inputChar <= 57) {  //check if its digit OR return 0
			returnInt = returnInt * 10;
			returnInt += (inputChar - 48);
		}
		else {
			return 0;
		}

	}

	return returnInt;
}

int convertBinarytoDecimal(int num)
{
	int decimal = 0;
	int base = 1;

	while (num > 0) {
		decimal += ((num % 10) * base);   //add last digit multiplied by its base (2^x) to result

		num /= 10;
		base *= 2;
	}

	return decimal;
}

void drawRightAngledTriangle()
{
	for (int i = 0, count = 1; i < 4; i++, count++)  //count is the number of A's on row
	{
		for (int y = 0; y < count; y++)
		{
			std::cout << "A";
		}

		std::cout << std::endl;   //you printed all A's on row, go to next line
	}
}

void drawIsocelesTriangle()
{

	for (int i = 0, count = 1; i < 7; i++)
	{

		for (int y = 0; y < count; y++) {
			std::cout << "A";
		}

		if (i < 3) {	//if second part of triangle starts count--
			count++;
		}
		else {
			count--;
		}

		std::cout << std::endl;
	}
}

void drawIsocelesTriangle2()   
{ 
	for (int i = 0, count = 0; i < 8; i++)
	{
		count = abs(abs(i - 4) - 4);

		for (int y = 0; y < count; y++) {
			std::cout << "A";
		}
		std::cout << std::endl;
	}
}

// changing anything below here equals 0 marks!!!!!!!!!

int main()
{
	std::cout << "Leapyear" << std::endl;
	if (!isLeapYear(1700))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(1600))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(2016))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "NumberReversed" << std::endl;
	if (Reversed(123) == 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	if (Reversed(1) == 1)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (Reversed(1234) != 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	std::cout << "Palindrome" << std::endl;
	if (isAPalindrome(1))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPalindrome(121))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPalindrome(1213))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Prime Number" << std::endl;
	if (isAPrimeNumber(3))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPrimeNumber(2147483647))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPrimeNumber(4))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Binary to Decimal" << std::endl;
	if (convertBinarytoDecimal(110) == 6)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (convertBinarytoDecimal(111) == 7)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "5 chars to int" << std::endl;
	int convertedInt = input5CharsConvertToInt();
	std::cout << convertedInt << std::endl;

	std::cout << "Triangles" << std::endl;
	drawRightAngledTriangle();
	drawIsocelesTriangle();
	std::cout << "Triangle Extra" << std::endl;
	drawIsocelesTriangle2();

}