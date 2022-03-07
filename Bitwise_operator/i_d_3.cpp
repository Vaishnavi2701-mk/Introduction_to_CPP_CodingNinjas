#include<iostream>
using namespace std;

int main(){
int x=10;
int y=20;
if (x++>10 && ++y>20){  // && operator is there which require both the conditions true to be true;thus here first condition is false tho wo agge hi nahi jayega,
cout<<"inside if"<<endl;
}
else{
    cout<<"inside else"<<endl;
}

cout<<x<<" "<<y<<endl;
}
