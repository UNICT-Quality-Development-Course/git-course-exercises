/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;
int main(){
	int a, b, sum;
	cout << "insert the first number:";
	cin >> a;
	cout << "insert the second number:";
	cin >> b;
	sum = a+b;
	cout << "Sum:" << sum;
}
