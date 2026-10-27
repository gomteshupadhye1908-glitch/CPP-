#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout("example.txt");
fout<<"Welcome";
cout."writtepositionsition;
ifstream fin("word.doc");
string line;
getline(fin,line);
cout<<line;
fin.close();
} 
