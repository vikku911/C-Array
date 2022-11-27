#include <iostream>
using namespace std;

void printarr(int arr[], int size ){
    
    for(int i =0 ; i<size ; i++){
        cout<< arr[i]<<" ";
    }
    
}

void swapAlt(int arr[], int index){
    
    for(int i = 0; i < index ; i+=2){
        if (i+1 < index){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
   
   int odd[5] = {3,5,6,7,8};
   
   
   swapAlt(odd,5);
   printarr(odd,5);
    return 0;
}
/*

5 3 7 6 8 

*/