#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int start= 0;
    int end=n-1;
    for(start, end ; start <= end ; start++,end--){
        swap(arr[start],arr[end]);
        
    }
}
void printarr(int arr[], int n){
    for(int i = 0; i<n; i++){
        
        cout<<arr[i]<<" ";
    }
}

int main() {
  int arr[6] = {3,4 ,5 ,6 ,7, 8};
  
  reverse(arr,6);
  printarr(arr,6);
  
 
    return 0;
}
/*

8 7 6 5 4 3                      //using swaping method swapping the 1st element to last , 2nd to 2nd last;

*/