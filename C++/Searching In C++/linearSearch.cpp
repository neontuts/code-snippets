#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
  for (int i=0; i<n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }

  return -1;
}

int main() {
  int n, key;
  cout<<"Enter the no of elements : ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements one by one : ";
  for (int i=0; i<n; i++) {
    cin>>arr[i];
  }

  cout<<"Enter the key to search : ";
  cin>>key;

  cout<<linearSearch(arr, n, key)<<endl;

  return 0;
}

