#include <iostream>
using namespace std;
class Box{
   int length;
public:
Box(int l){
length=l;
}
friend void showlength(Box b);
};
void showlength(Box b){
cout<<"Length of box="<<b.length<<endl;
}
int main(){
  Box b1(10);
  showlength(b1);
 return 0;
}
