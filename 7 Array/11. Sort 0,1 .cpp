#include <iostream>
using namespace std;

void printarr(int arr[], int size){
    
    for (int i =0; i<size; i++){
        cout<<arr[i];
    }
}

int sort(int arr[], int size )
{
    int left = 0;
    int right = size -1;
    
    for(left,right ; left <right;  ){
        
        if (arr[left] == 0 ){
            left++;
        }
        
        if (arr[right] == 1 ){
            right --;
        }
        if (arr[right] == 0 && arr[left] == 1 ){
            swap(arr[right],arr[left]);
            left++;
            right--;
        }
       // printarr(arr,size);      for printing steps :
       // cout<<endl;
    }
   // cout<<endl;
   // printarr(arr,size);         line 34 = line 43:
}

int main() {
    
    int arr[8] = {1,1,0,0,0,0,1,0};
   
    
    sort(arr,8);
    printarr(arr,8);
    return 0;
}
/*

00000111

*/