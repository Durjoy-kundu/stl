#include <bits/stdc++.h>
using namespace std;
int main(){
map<int , int> mpp;
mpp[1] = 2;
//mpp.emplace({2,4});
mpp.insert({5,4});
mpp.insert({8,5});
mpp.insert({10,8});

//accessing the set
for(auto i = 0; i < mpp.size(); i++){
    cout << mpp[i] <<endl;
}
return 0;
}