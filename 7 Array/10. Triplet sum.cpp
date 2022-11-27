// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int tripletsum(int arr[], int size, int key)
{
   for(int i =0 ; i<size; i++){
      // cout<< arr[i]<<endl;
       for(int j = i+1 ; j<size ; j++){
          //cout<< arr[j]<<endl;
           for(int k = j+1; k<size ; k++){
             // cout<< arr[k];
             int a = arr[i]+arr[j]+arr[k];
               if( a == key){
                  cout<< arr[i]<< arr[j]<<arr[k] <<endl;
                    
               }
           }
       } 
   }  
  // return -1;
}

int main() {
    
    int arr[7] = {2,5,7,4,3,9,1};
    int key ;
    cout <<"Enter the sum"<<endl;
    cin>>key;
    
    tripletsum(arr,7,key);
   
    return 0;
}
/*

Enter the sum
12
273
291
543
741

Enter the sum
14
257
239
743
491


*/