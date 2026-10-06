#include<iostream>
using namespace std;
int main(){
    char c[100];
  
    fgets(c,100,stdin); //it will take even after a space;
    //cin.getline(c,100);    it will not print after the space;
    cout<<c<<endl;
    return 0;
}
