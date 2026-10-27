#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout("example.txt");
fout<<"Welcome to File handling in C++";
fout<<"This is my first code in file handling";
fout.close();
ifstream fin("example.txt");
string line;
getline(fin,line);
cout<<line;
fin.close();
}
