#include<iostream>
using namespace std;

int main(){
    int even = 0;
    int odd = 0;
    int a = 0;
    cout << "Enter an integer: ";
    cin >> a;
        while(a != 0){
            if (a % 2 == 0){
                even ++;
            }
            if (a % 2 == 1){
                odd ++;
            }
            cout << "Enter an integer: ";
            cin >> a;
            
        }
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd <<"\n";
    return 0;
}
