#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout("word.doc");
fout<<"Welcome";
fout.close();
ifstream fin("word.doc");
string line;
getline(fin,line);
cout<<line;
fin.close();
} 
