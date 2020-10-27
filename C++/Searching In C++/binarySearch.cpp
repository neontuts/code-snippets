#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
  int start = 0;
  int end = n;

  while (start <= end) {
    int mid = (start + end) / 2;

    if (arr[mid] == key) {
      return mid;
    }
    else if (arr[mid] > key) {
      end = mid - 1;
    }
    else {
      start = mid + 1;
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

  cout<<binarySearch(arr, n, key)<<endl;

  return 0;
}

