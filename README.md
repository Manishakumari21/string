# string
Implementation
```C++
#include<iostream>
using namespace std;
int main(){
char str[5]={'a','b','c','d','e'};
   cout<<(int)(str[5]);

   //cout<<str[5];
}
```
##ifVowel
```C++
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str=" manisha";
    int count =0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        count++;
        i++;
    }
    cout<<count;
}
```
