#include <iostream>
using namespace std;

void printSubArrays(int arr[], int n) {
    // Nested loops to generate all possible subarrays
    for(int i=0;i<n;i++) {
        cout<<"i="<<i<<endl;
        for(int j=i;j<n;j++) {
            cout<<"j="<<j<<endl;
            // Print subarray from index i to j
            cout<<"Subarray from "<<i<<" to "<<j<<": ";
            for(int k=i;k<=j;k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array:"<<n<<endl;
    printSubArrays(arr, n);
    return 0;
}