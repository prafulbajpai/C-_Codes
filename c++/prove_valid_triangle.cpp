#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 1st  number -"<<endl;
    cin>>a;
    int b ;
    cout<<"enter 2 number -"<<endl;
    cin>>b;
    int c;
    cout<<"enter 3rd number -"<<endl;
    cin>>c;
    if (a+b>c && b+c>a && c+a>b){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid triangle";
    }
    return 0;

}