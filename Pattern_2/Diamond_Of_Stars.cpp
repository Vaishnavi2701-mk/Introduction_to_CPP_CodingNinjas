/* Code : Diamond of stars

Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5


The dots represent spaces.


Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *  
  */

#include<iostream>
using namespace std;


int main() {
        int n;
    cin>>n;
int n1=(n+1)/2;
int i=1;
while(i<=n1){
    int k=1;
    while(k<=n1-i){
        cout<<" ";
        k=k+1;
    }
    int j=1;
    while(j<=2*i-1){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
int n2=n1-1;
i=n2;
while(i>=1){
    int k=1;
    while(k<=n2-i+1){
        cout<<" ";
        k=k+1;
    }
    int j=1;
    while(j<=2*i-1){
        cout<<"*";
    j=j+1;
}
cout<<endl;
i=i-1;
}
    
}
