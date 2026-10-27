#include<iostream>
using namespace std;
class Student{
private:
  string name;
  int marks;
public:
Student(string n,int m)
{
name=n;
marks=m;
}
friend class Result;
};
class Result{
public:
void displayResult(Student s){
cout<<"Student Name: " <<s.name<<endl;
cout<<"Student Marks: "<<s.marks<<endl;
}
};
int main()
{
Student s1("vaishnavi", 55);
Result r;
r.displayResult(s1);
return 0;
}

