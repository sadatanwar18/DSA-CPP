//D
//CD
//BCD
//ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i = 1;
    while(i<= n){
    char count = 'A'+n-i;
        int j = 1;
        while(j<= i){
           
            cout<< count << " ";
            count++;
            j++;
        }
        cout<< endl;
        i++;
    }

}