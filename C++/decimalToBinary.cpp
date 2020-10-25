/*
  Write a program to convert decimal to binary.

  For Example : (20)₁₀  --->  (10100)₂
*/

#include <iostream>
using namespace std;

int decimalToBinary(int n) {
  int ans = 0;
  int x = 1;

  while (x <= n) {
    x *= 2;
  }

  x /= 2;

  while (x > 0) {
    int lastDigit = n / x;
    n -= lastDigit*x;
    x /= 2;
    ans = ans*10 + lastDigit;
  }

  return ans;
}

int main() {
  int decimal;
  cout<<"Enter the decimal : ";
  cin>>decimal;

  cout<<decimalToBinary(decimal)<<endl;

  return 0;
}

