#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
double celsius;
double fahrenheit;
double cel_1,cel_2,cel_3;
double fah_1,fah_2,fah_3;
cout<<"Enter three tempatures in celsius :";
cin>>cel_1>>cel_2>>cel_3;
cout<<"Enter three tempatures in fahrenheit :";
cin>>fah_1>>fah_2>>fah_3;
double f1= (9.0 / 5) * cel_1 + 32;
double f2= (9.0 / 5) * cel_2 + 32;
double f3=(9.0 / 5) * cel_3 + 32;
double c1= (5.0/9)*fah_1-32;
double c2= (5.0/9)*fah_2-32;
double c3= (5.0/9)*fah_3-32;
cout<<"Celsius Fahrenheit||Fahrenheit Celsius";
cout<<""<<cel_1<<""<<f1<<"||"<<""<<fah_1<<""<<c1;
cout<<""<<cel_2<<""<<f2<<"||"<<""<<fah_2<<""<<c2;
cout<<""<<cel_3<<""<<f3<<"||"<<""<<fah_3<<""<<c3;
return 0;
}
