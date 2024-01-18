// 1234
// 1234
// 1234
// 1234
// print this

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <=n){
            cout<< j;    
            j++;
        }
        cout<< endl;
        i++;
    }
}

// 321
// 321
// 321
// to print this just change cout<< j to cout<< n-j+1;