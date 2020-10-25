/*
  Write a program to convert decimal to hexadecimal.

  For Example : (463)₁₀  --->  (1CF)₁₆
*/

#include <bits/stdc++.h>
using namespace std;

string decimalToHexadecimal(int n) {
  string ans = "";
  int x = 1;

  while (x <= n) {
    x *= 16;
  }

  x /= 16;

  while (x > 0) {
    int lastDigit = n / x;
    n -= lastDigit*x;
    x /= 16;
    
    if (lastDigit <= 9) {
      ans += to_string(lastDigit);
    }
    else {
      char c = 'A' + lastDigit - 10;
      ans += c;
    }
  }

  return ans;
}

int main() {
  int decimal;
  cout<<"Enter the decimal : ";
  cin>>decimal;

  cout<<decimalToHexadecimal(decimal)<<endl;

  return 0;
}

