#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int A [n];
    for (int i=0; i<n ; i++){
        cin >> A[i];
    }
    int max = A[0]; 
    for(int i=0; i<n; i++){
        if(A[i]>max) {max=A[i];}
        cout<< "i:" <<i<<" A[i]:"<< A[i]<<"max" <<max<<endl;
    }
    cout<<"maximum:" <<max;
}
