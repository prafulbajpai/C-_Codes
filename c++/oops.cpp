#include <iostream>
using namespace std;
//#define PI 3.14
//int main(){
//	
//	float r;
//	cout<<"enter radius of circle : \n";
//	cin>>r;
//
	//float a = PI*r*r;
///	cout<<"area is: "<<PI*r*r;
//}

//void swap(int *x,int *y){ // call by pointer
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//	
//	
//}
//int main(){
//	
//	int a = 4;
//	int b = 5;
//	cout<<"before swapping "<<a<<"\t"<<b<<endl;
//	swap(&a,&b);
//	cout<<"after swapping  "<<a<<"\t"<<b;
//}
//void swap(int x,int y){ //call by value
//	int temp  = x;
//	x = y;
//	y =  temp;
//}
//int main(){
//	int a = 4;
//	int b = 5;
//	cout<<"before swapping "<<a<<"\t"<<b<<endl;
//	swap(a,b);
//	cout<<"after swapping  "<<a<<"\t"<<b;
//	
//}
//void swap(int &x,int &y){  //call by reference
//	int temp  = x;
//	x = y;
//	y =  temp;
//}
//int main(){
//	int a = 4;
//	int b = 5;
//	cout<<"before swapping "<<a<<"\t"<<b<<endl;
//	swap(a,b);
//	cout<<"after swapping  "<<a<<"\t"<<b;
//	
//}

enum week {m , t, w = 5, th, f,s ,sun
};

int main(){
	week today = w;
	cout<<"day"<<today+2;
}