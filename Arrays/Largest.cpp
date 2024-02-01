// Find the largest element in an array

#include <iostream>
using namespace std;

int largestelem(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int array[] = {1,2,4,5,3,12};
    int n = 6;
    int max = largestelem(array, n);
    cout<< "largest element in array is: "<< max<< endl;


}