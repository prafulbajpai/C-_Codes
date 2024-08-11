#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    bool flag = 1;
    for( int i=2; i<=n/2; i++){
        if(n%i==0){
            cout<<"composite"<<endl;
            bool flag = 0;
            break;
        }
        if(flag==1){
            cout<<"prime";
        }
        else{
            cout<<"composite";
        }
    }
   
}