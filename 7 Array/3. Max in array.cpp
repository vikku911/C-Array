#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[100];
    int max= INT_MIN;
    
    cout<<"Enter the array"<<endl;
     
    for(int i =0 ; i<size ; i ++){
        cin>>arr[i];
        if (max<=arr[i]){
            max= arr[i];
        }
        
    }
     cout<<max;
    return 0;
}
/*

Enter the size of array
6 
Enter the array
3 4 7 8 2 5 
8

*/