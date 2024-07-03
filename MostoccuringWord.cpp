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