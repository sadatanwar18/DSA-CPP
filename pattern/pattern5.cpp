//*
//**
//***
//****

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout<<"*"<< " ";
            j++;
        }
        cout<< endl;
        i++;
    }
}

// 1
// 2 2
// 3 3 3
// to print this just change cout<< "*" to cout << i;