//(Q2).write a program to enter temperature in celsius and convert to fahrenheit
//include the library,write main function,declare necessary varibles and print output
#include<iostream>
using namespace std;
int main()
{float c,f;
cout<<"\nEnter temperature in celsius to convert it to fahrenheit\n";
cin>>c;
f=((c*9)/5)+32;
cout<<"Temperature in fahrenheit = "<<f;cout<<"\n";
return 0;
}
