/* Reverse Each Word
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
Input Format:
The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence given to Aadil.
Output Format:
The only line of output prints the sentence(string) such that each word in the sentence is reversed. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN
Sample Input 2:
Always indent your code
Sample Output 2:
syawlA tnedni ruoy edoc
*/

#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char a[]) {
   int len=strlen(a);
 int start=0;
 int end=0;
for (int i=0;i<len;i++){
 while(i<len&&a[i]==' '){
    i++;
 }
  start=i;
  while(i<len&&a[i]!=' '){
    i++;
  }
  end=i-1;
while(end>start){
    char temp=a[start];
         a[start]=a[end];
         a[end]=temp;
         start++;
         end--;
}
}
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}

