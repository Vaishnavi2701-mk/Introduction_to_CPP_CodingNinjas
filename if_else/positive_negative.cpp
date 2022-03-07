#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the value of n: "<<endl;
cin>>n;

if(n>0){
    cout<<n<<" is +ve number"<<endl;
}

else if(n<0){
    cout<<n<<" is -ve number"<<endl;
}
else{
    cout<<"It is 0";
}
}
