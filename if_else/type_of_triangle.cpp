#include<iostream>
using namespace std;

int main(){
 int a, b, c;

cout<<"Enter the sides a,b,c: "<<endl;
cin>>a>>b>>c;
if(a==b && b==c){
    cout<<"The triangle with given sides "<<a<<","<<b<<","<<c<<" is Equilateral triangle"<<endl;

}
else if(a==b || a==c ||b==c){
        cout<<"The triangle with given sides "<<a<<","<<b<<","<<c<<" is Isosceles triangle"<<endl;

}
else{
    cout<<"The triangle with given sides "<<a<<","<<b<<","<<c<<" is Scalene triangle"<<endl;
}

}
