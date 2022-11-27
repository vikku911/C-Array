#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout<<"Enter the array"<<endl;
    cin>>arr[5];
    int arrSize = sizeof(arr)/sizeof(int);
    
    cout<<"The size of array is "<<arrSize<<endl;
    cout<<"Your array in reverse order"<<endl;
    for (int i =arrSize; i!=0; i--){
         cout <<i<<" ";
    }
    return 0;
}

/*

Enter the array
1 2 3 4 5
The size of array is 5
Your array in reverse order
5 4 3 2 1

////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout<<"Enter the array"<<endl;
    cin>>arr[5];
    int arrSize = sizeof(arr)/sizeof(int);
    
    cout<<"The size of array is "<<arrSize<<endl;
    cout<<"Your array in reverse order"<<endl;
    for (int i =arrSize; i!=0; i--){
         cout <<i-2<<" ";
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

Enter the array
1 2 3 4 5
The size of array is 5
Your array in reverse order
3 2 1 0 -1 

*/