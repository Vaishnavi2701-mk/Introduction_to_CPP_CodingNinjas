#include<iostream>
using namespace std;

//Armstrong Number is a number in which the sum of cube of each digit is equal to the digit itself;
int main(){
int num,sum=0;
cout<<"Enter the number:"<<endl;
cin>>num;
int temp=num;
while(num>0){
    int unitPlace=num%10;
    int cubeOfnumber=unitPlace*unitPlace*unitPlace;
    sum=sum+cubeOfnumber;
    num=num/10;
}
if(sum==temp){
    cout<<"The number "<<temp<<" is Armstrong number."<<endl;
}
else{
    cout<<"The number "<<temp<<" is not Armstrong number."<<endl;

}
}
