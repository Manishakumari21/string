# string

### Implementation
```C++
#include<iostream>
using namespace std;
int main(){
char str[5]={'a','b','c','d','e'};
   cout<<(int)(str[5]);

   //cout<<str[5];
}
```
## ifVowel
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
## anagram
```C++
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="physicswallah";
    string t="phywallahsics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t)
    cout<<true;
    else cout<<false;
    return 0;
}
```
## MostOccuringWord
```C++
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
string str="ragbbhav is a maths teacher.he is a maths DSA mentor ";
stringstream ss(str);
string temp;
vector<string> v;
while(ss>>temp){
v.push_back(temp);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
cout<<endl;
sort(v.begin(),v.end());
// vector print
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}}
```
## LongestCommonPrefix
```c++

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //{"flower,flow,flight"}
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    //lexographically
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  "<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;}

    }
```
## HighestFrequency
```c++

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="leetcode";
    int max=0;
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        int count =1;
        for(int j=i+1;j<s.length();j++){
           if(s[j]==s[i])  count++;

        }
        if(max<count) max=count;
    }
cout<<max;
return 0;
}
```

## differentNEIGHBOURS
```c++

#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =0;
    int n=s.length();

    for(int i=0;i<n;i++){
        if(n==1){
            break;
        }
        if(n==2&& s[0]!=s[1]){
            count=1;
            break;
        }
        if(i==0){
        if(s[i]!=s[i+1]) count++;
    }
else if(i==n-1){
    if(s[i]!=s[i-1]) count++;
}
else if (s[i]!=s[i+1]&& s[i]!=s[i-1])
count++;

    }
    cout<<count;
// abc=3
// ab=1
}
```


