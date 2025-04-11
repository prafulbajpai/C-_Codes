#include<bits/stdc++.h>    
using namespace std;
int main(){
    int n;
    cout<<"enter  number -"<<endl;
    cin>>n;
    int r = 0;
    while(n != 0){
        int ld = n%10;
        r  = r*10 + ld;
        n = n/10;
    }
    cout<<r<<endl;
}
    
