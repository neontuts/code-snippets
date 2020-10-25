/*
  Write a program to check pythagorian triplet, Given x, y and z.

  For Example : x = 3, y = 4, z = 5
      i.e.      a = 5, b = 3, c = 4
      formula : a² = b² + c²
      i.e.      5² = 3² + 4²
                25 = 9 + 16
                25 = 25
      output    Pythagorian Triplet
*/

#include <iostream>
using namespace std;

bool pythagorianTriplet(int x, int y, int z) {
  int a = max(x, max(y, z));
  int b,c;

  if (a == x) {
    b = y;
    c = z;
  }
  else if(a == y) {
    b = x;
    c = z;
  }
  else {
    b = x;
    c = y;
  }

  return a*a == b*b + c*c;
}

int main() {
  int x;
  cout<<"Enter the value of x : ";
  cin>>x;
  int y;
  cout<<"Enter the value of y : ";
  cin>>y;
  int z;
  cout<<"Enter the value of z : ";
  cin>>z;

  if (pythagorianTriplet(x, y, z)) {
    cout<<"Pythagorian Triplet"<<endl;
  }
  else {
    cout<<"Not Pythagorian Triplet"<<endl;
  }

  return 0;
}

