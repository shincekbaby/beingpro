//(Q1).write a program to convert length into meter and kilometer
//include the library
#include<iostream>
using namespace std;
//main func()
int main()
{//declare necessary variables ask for its value to user and pint necessary things
float l,lm,lk;
cout<<"\nEnter l in cm to covert it into meter and kilometer\n";
cin>>l;
lm=0.01*l;lk=0.001*lm;
cout<<"lenghth in meter ="<<lm;
cout<<"\nlength in kilometer ="<<lk;cout<<"\n";
return 0;
}
