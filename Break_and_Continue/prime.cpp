#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the value of n: "<<endl;
cin>>n;
bool prime=true;
for(int d=2;d<n;d++){
    if(n%d==0){
            prime=false;
            break;

    }
}
if(prime){
cout<<n<<" is a prime number"<<endl;

}
else{
    cout<<n<<" is non-prime number"<<endl;
}
}
