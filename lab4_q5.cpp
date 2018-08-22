//include the library and start with the main
#include<iostream>
using namespace std;
int main()
{//declare necessary varibles
float a,b,c;
// ask for value of two of the angles of the tringle
cout<<"\n{NOTE: Every input must be in degrees}";
cout<<"\nEnter the first angle for the planar triangle ";
cin>>a;
cout<<"Enter second angle for the planar tringle ";
cin>>b;
//calculate value of c the third angle and print its value
c=180-a-b;
cout<<" Third angle for the planar triangle ="<<c<<"degrees\n";
return 0;
} 
