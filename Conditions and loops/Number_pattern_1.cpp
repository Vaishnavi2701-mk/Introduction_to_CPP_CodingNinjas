/*Number Pattern 1
Send Feedback
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345*/

#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int i=1;
    while(i<=N){
        int j=i;
    
        while(j<=i+(i-1)){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

      
}

