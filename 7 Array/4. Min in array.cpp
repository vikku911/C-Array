#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[100];
    int min= INT_MAX;
    
    cout<<"Enter the array"<<endl;
     
    for(int i =0 ; i<size ; i ++){
        cin>>arr[i];
        if (min>=arr[i]){
            min= arr[i];
        }
        
    }
     cout<<min;
    return 0;
}
/*

Enter the size of array
6
Enter the array
3 7 8 9 4 1 
1

*/