#include<iostream>
using namespace std;

int main(){

int a=10;
while(a>5){
    int a=1;
    cout<<a<<" ";
    a--;// this decrement is for a=1,not for a=10, thus a=10 hi rahega no,change s, so infinite times it will execute

}
}
