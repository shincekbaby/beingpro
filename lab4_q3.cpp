//(Q3).program to enter fahrenheit temperature and convert it celsius scale
//same as above pro only vice-versa
#include<iostream>
using namespace std;
int main()
{int c,f;
cout<<"\nEnter temperature in fahrenheit scale to convert it to celsius scale\n";
cin>>f;
c=((f-32)*5)/9;
cout<<"Temperature in celsius = "<<c;
cout<<"\n";
return 0;
}
