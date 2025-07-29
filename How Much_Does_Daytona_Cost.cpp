#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n , k;
cin>>n>>k;

vector<int>arr(n);

for (int i = 0 ; i < n ; i++){
    cin>>arr[i];
}

bool b = 0;

for (int i = 0 ; i < n ; i++){
    if (arr[i]  == k){
        b =1 ;
        break;
    }
}

if (b==1){
    cout <<"Yes" <<endl;
}
else{
    cout<<"No"<<endl;
}
}

return 0;    
}