#include <bits/stdc++.h>
using namespace std;
int main(){
queue<int> q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);

q.back() += 5; // prints=>9;
cout<<q.back();
cout<<q.front(); // prints 1;
q.pop();
//
cout<<q.front(); // print  2


return 0;
}