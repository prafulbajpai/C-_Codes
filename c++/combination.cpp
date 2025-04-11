#include<iostream>
using namespace std;
int fact(int x) {
    int f = 1 ;
    for(int i = 1; i<=x; i++){
        f *= i;
    }
    return f ;
}
    int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int r;  
    cout<<"enter r ";
    cin>>r;
   cout<<fact(n)/(fact (r)*fact (n-r));
    }
