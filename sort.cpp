#include <bits/stdc++.h>
using namespace std;
int main(){
// for normal sorting 
int arr[10] = {0,1,2,3,23,5,6,7};
sort(arr,arr+10);
for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}
return 0;
}