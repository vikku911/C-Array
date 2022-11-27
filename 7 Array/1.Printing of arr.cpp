#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout<<"Enter the array"<<endl;
    cin>>arr[5];
    int arrSize = sizeof(arr)/sizeof(int);
    
    cout<<"the size of array is "<<arrSize<<endl;
    cout<<"your array is "<<endl;
    for (int i =0; i<arrSize; i++){
         cout <<i<<" ";
    }
    return 0;
}
/*

Enter the array
1 2 3 4 5
the size of array is 5
your array is 
0 1 2 3 4 

*/