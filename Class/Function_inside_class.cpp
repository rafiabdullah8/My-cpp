#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
int roll;
int math;
int english;
Student(string name,int roll,int math, int english){
    this->name=name;
    this->roll=roll;
    this->math=math;
    this->english=english;
}
void total(){
    cout<<"total marks of "<<name<<"="<<math+english<<endl;
}
};
int main(){
Student sakib("Sakib hossain",102,59,41);
sakib.total();

    return 0;
}
