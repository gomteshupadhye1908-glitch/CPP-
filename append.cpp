#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout("example.txt",ios::app);
fout<<"New Entry Added!"<<endl;
fout.close();
return 0;
}
