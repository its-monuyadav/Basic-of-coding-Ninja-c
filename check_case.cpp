#include<iostream>
using namespace std;

int main (){
    char i;
    cin >> i;

    
    if  ( 'A' <=i && i<='Z' ){
        cout << "1" <<endl;
    } else if ( 'a' <=i && i <= 'z' ){
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }
    
}