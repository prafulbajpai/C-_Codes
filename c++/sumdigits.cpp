#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter  number -"<<endl;
    cin>>a;
    int sum = 0;
    while (a!=0){
        int ld = a%10;
        a = a/10;
        sum += ld;
    }
    cout<<sum<<endl;
}