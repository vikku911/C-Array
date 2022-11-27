#include <iostream>
using namespace std;

int uniqueElement(int arr[], int n){
    
    int ans =0;
    for(int i =0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}
  // unique element hai given array ka ,Distinct in the array nahi hai.. 
int main() {
    
    int arr[7] = { 2,3,2,5,4,3,4};
    
    int s= uniqueElement(arr,7);
    cout<<s;
    return 0;
}
/*

5

*/