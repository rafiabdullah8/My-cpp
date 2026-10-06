#include<bits/stdc++.h>
using namespace std;
class Student      //making a class
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main(){
Student a;       //making an object
a.roll=10;
a.gpa=3.50;
char temp[100]="Rafi";
strcpy(a.name,temp);
cout<<a.name<<endl<<a.roll<<endl<<a.gpa;

    return 0;
}
