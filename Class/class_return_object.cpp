#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
int roll;
int cls;
double gpa;
Student(int roll,int cls,double gpa){
    this->roll=roll;
    this->cls=cls;
    this->gpa=gpa;
}
};
Student fun(){
    Student rashed(10,11,4.5);
    return rashed;
}

int main(){
Student obj=fun();
cout<<obj.roll<<endl<<obj.cls<<endl<<obj.gpa;

    return 0;
}
