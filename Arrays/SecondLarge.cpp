#include <iostream>
#include <climits>
using namespace std;
int SecondLargest(int arr[], int n){
    int largest = arr[0];
    int Slargest = -1;
    for(int i = 0; i< n; i++){
        if(arr[i] > largest){
            Slargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > Slargest){
            Slargest = arr[i];
        }
    }
    return Slargest;
}

int SecondSmallest(int arr[], int n){
    int Smallest = arr[0];
    int Ssmallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < Smallest){
            Ssmallest = Smallest;
            Smallest = arr[i];
        }else if(arr[i] != Smallest && arr[i] < Ssmallest){
            Ssmallest = arr[i];
        }
    }
    return Ssmallest;
}



int main(){

    int array[] = {2,4,3,1,6,7,9,5,4};
    int n = 9;
    int large= SecondLargest(array, n);
    cout<< "Second largest element in array is: "<< large<< endl;
    int small = SecondSmallest(array, n);
    cout<< "Second smallest elemet in array is: "<< small<< endl; 

}