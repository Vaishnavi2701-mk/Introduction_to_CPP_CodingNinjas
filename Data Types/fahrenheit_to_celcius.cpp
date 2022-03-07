#include<iostream>
using namespace std;

int main(){
int f;
cout<<"Enter the Fahrenheit value"<<endl;
cin>>f;
int c=(f-32)*(5.0/9);//(5.0*(f-32))/9  ***remember that int/int is int thats why here it would be 0,so make sure to divide float by int
cout<<"The Celsius value is :"<<c<<" oC"<<endl;
 }
