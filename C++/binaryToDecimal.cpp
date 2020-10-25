/*
  Write a program to convert binary to decimal.

  For Example : (10100)₂  --->  (20)₁₀
*/

#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
  int ans = 0;
  int x = 1;

  while (n > 0) {
    int y = n % 10;
    ans += x*y;
    x *= 2;
    n /= 10;
  }

  return ans;
}

int main() {
  int binary;
  cout<<"Enter the binary : ";
  cin>>binary;

  cout<<binaryToDecimal(binary)<<endl;

  return 0;
}

