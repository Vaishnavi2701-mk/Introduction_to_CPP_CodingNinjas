#include<iostream>
using namespace std;

int main(){

char c;
cout<<"Enter the characters: "<<endl;
c=cin.get();
int count=0;
while(c!='$'){
    count++;
    c=cin.get();//cin.get() is for \n and \t i.e, for enter and tab because they are also characters
}
cout<<count<<endl;
}
