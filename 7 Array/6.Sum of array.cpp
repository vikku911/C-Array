#include <iostream>
using namespace std;

int main() {
   int arr[100];
   int size ;
   cout<<"Enter the size of array"<<endl;
   cin>>size;
   int sum =0;
   cout<<"Enter the array"<<endl;
   for(int i =0; i<size; i++){
       cin>>arr[i];
       sum = sum+arr[i];
   }
   cout<<"Sum of array is "<<sum;
    return 0;
}
/*

Enter the size of array
7
Enter the array
2 8 7 6 4 3 1
Sum of array is 31

*/