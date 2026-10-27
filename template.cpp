#include<iostream>
using namespace std;
template<class T>
T add(T a, T b){
return a + b;
}
int main(){
cout<<"Sum of integers"<<add(5,10)<<endl;
cout<<"Sum of floats"<<add(2.1, 3.9)<<endl;
cout<<"Sum of characters:"<<add('A','B')<<endl;
return 0;
}

