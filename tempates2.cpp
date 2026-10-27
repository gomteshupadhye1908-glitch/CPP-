#include<iostream>
using namespace std;
template<class T>
T area(T a,T b){
return a * b;
}
int main(){
cout<<"Area of Square:"<<area(5,5)<<endl;
cout<<"Area of Rectangle:"<<area(5,10)<<endl;
return 0;
}
