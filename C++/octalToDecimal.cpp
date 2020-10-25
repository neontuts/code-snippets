/*
  Write a program to convert octal to decimal.

  For Example : (100)₈  --->  (64)₁₀
*/

#include <iostream>
using namespace std;

int octalToDecimal(int n) {
  int ans = 0;
  int x = 1;

  while (n > 0) {
    int y = n % 10;
    ans += x *y;
    x *= 8;
    n /= 10;
  }

  return ans;
}

int main() {
  int octal;
  cout<<"Enter the octal : ";
  cin>>octal;

  cout<<octalToDecimal(octal)<<endl;

  return 0;
}

