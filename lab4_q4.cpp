//include the library
#include<iostream>
using namespace std;
//write main
int main()
{cout<<"\n{NOTE: It is arbitrarily chosen that a year=365 days}";    
//declare varibles
int d,y,w,D;
//ask for no of days
cout<<"\n Enter number of days to convert it into years weeks and days\n";
cin>>d;
//calculate no of years weeks and days and print them
y=d/365;
w=(d%365)/7;
D=(d%365)%7;
cout<<d<<"days ="<<y<<"years "<<w<<"weeks and "<<D<<"days";
return 0;
}
