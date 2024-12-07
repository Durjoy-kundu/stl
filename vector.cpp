#include <bits/stdc++.h>
using namespace std;
int main(){
vector <int> v;
v.push_back(1);
v.emplace_back(2);
for(int i= 0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
//pair with vector;
vector<pair<int,int>>vect;
vect.push_back({1,2});
vect.emplace_back(2,3);
// ..> to clear all data from array
// v.clear() 
cout<<endl;
return 0;
}