#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements one by one : ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    // Bubble Sort : sorting the array.
    int counter = 1;
    while (counter < n) {
        for (int i=0; i<n-counter; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    
    // Outputing the sorted array.
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

