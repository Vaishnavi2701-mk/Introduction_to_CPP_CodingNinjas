#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the value of n: "<<endl;
cin>>n;
int i=1;
while(i<=n){
    if(i==6){
        i++;
        continue;
    }
    cout<<i<<endl;
    i++;
}


}
