//C++ Program
//Armstrong numberumber or not
#include<iostream>
#include<cmath>
using namespace std;
//main Program
int main()
{
	int num, digit, sum = 0;
	cout << "Enter a positive  integer: ";
	//user input
	cin >> num;
	int store = num;
	//find sum of cubes of individual digits
	do
	{
		digit = num % 10;
		sum = sum + pow(digit,3);
		num = num / 10;
	}while(num != 0);
	//checking for ArmStrong number
	if(sum == store)
		cout << store << " is an Armstrong number.";
	else
		cout << store << " is not an Armstrong number.";
	return 0;
}
