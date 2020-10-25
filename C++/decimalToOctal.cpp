/*
  Write a program to convert decimal to octal.

  For Example : (64)₁₀  --->  (100)₈
*/

#include <iostream>
using namespace std;

int decimalToOctal(int n) {
  int ans = 0;
  int x = 1;

  while (x <= n) {
    x *= 8;
  }

  x /= 8;

  while (x > 0) {
    int lastDigit = n / x;
    n -= lastDigit*x;
    x /= 8;
    ans = ans*10 + lastDigit;
  }

  return ans;
}

int main() {
  int decimal;
  cout<<"Enter the decimal : ";
  cin>>decimal;

  cout<<decimalToOctal(decimal)<<endl;

  return 0;
}

