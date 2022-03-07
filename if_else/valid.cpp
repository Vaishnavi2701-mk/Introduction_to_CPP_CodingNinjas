#include<iostream>
using namespace std;

int main(){

int a, b, c;
cout<<"Enter the length of sides a, b and c;"<<endl;
cin>>a>>b>>c;
if (a+b>=c && b+c>=a && a+c>=b){
    cout<<"The triangle with sides "<<a<<","<<b<<","<<c<<" is valid triangle"<<endl;
}
else {
    cout<<"The triangle with sides "<<a<<","<<b<<","<<c<<" is not a valid triangle"<<endl;
}
}
