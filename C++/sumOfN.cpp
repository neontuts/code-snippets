/*
  Write a program to find the sum of first n natural numbers.

  Formula : 1+ 2+ ... + n = n(n+1) / 2 , for n natural number.
*/

#include <iostream>
using namespace std;

int sumOfN(int n) {
  int sum = 0;
  
  // Method 1 : Using for loop.
  // for (int i=1; i<=n; i++) {
  //   sum += i;
  // }

  // Method 2 : Using the formula.
  sum = n * (n+1) / 2;

  return sum;
}

int main() {
  int n;
  cout<<"Enter the value of n : ";
  cin>>n;

  int sum = sumOfN(n);

  cout<<"Sum of first "<<n<<" natural numbers is : "<<sum<<endl;

  return 0;
}

