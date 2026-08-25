#include<iostream>
using namespace std;
class A {
public:
class B {
private:
int num;
public:
void get_data(int n) {
num=n;
}
void put_data() {
cout<<"The number is"<<num<<endl;
};
};
int main() {
cout<<"Nested clases in c++"<<endl;
A::B obj;
obj.get_data();
obj.put.data();
return 0;
}
