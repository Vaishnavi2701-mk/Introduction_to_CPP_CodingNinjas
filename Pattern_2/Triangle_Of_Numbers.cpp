/* Code : Triangle of Numbers

Print the following pattern for the given number of rows.
Pattern for N = 4


The dots represent spaces.


Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
            int k=1;
    while(k<=n-i){
        cout<<" ";
        k=k+1;
    }
        int j=i;
        while(j<=i+(i-1)){
            cout<<j;
            j=j+1;
        }
        k=2*i-2;
        j=1;
        while(j<=i-1){
            cout<<k;
            k=k-1;
            j=j+1;
            }
        cout<<endl;
        i=i+1;
    
}
}
