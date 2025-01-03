#include <bits/stdc++.h>
using namespace std;
int main(){
//3 operation --> push, pop , top
priority_queue<int>pq;

pq.push(5);
pq.push(2);
pq.push(8);
pq.push(10); // 10,8,5,2

cout<<pq.top() <<endl; // print 10



// Minimum hip
priority_queue<int,vector<int>, greater<int>> p;
p.push(8);
p.push(4);
p.push(5);
p.push(2); // 2,4,5,8

cout<<p.top()<<endl; // prints 2.

return 0;
}