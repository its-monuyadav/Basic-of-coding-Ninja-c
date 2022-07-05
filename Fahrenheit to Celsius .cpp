#include<iostream>
using namespace std;


int main(){

     int s,e,w;
    cin>>s>>e>>w;
    
    int f=s;
    while(f<=e){
        int c=(5*(f-32))/9;
        cout<<f<<'\t'<<c<<endl;
        f=f+w;
    }
}