//     1
//    22
//   333
//  4444
// 55555


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //space
        int space = n-i;
        while(space){
            cout<< " ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}