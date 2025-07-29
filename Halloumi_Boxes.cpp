#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
int T;cin>>T;
while(T--){
int n ; int k;
cin>>n>>k;
vector<int>arr(n);
for (int i = 0 ; i < n ; i++){
   cin>>arr[i];
}
//reverse(arr.begin() , arr.end());
vector<int>copy(n);
for (int i = 0 ; i < n ; i++){
    copy[i]=arr[i];
}
sort(copy.begin(),copy.end());
bool b = 1;
for (int i = 0 ; i < n ; i++){
    if(copy[i]!=arr[i]){
        b = 0; break;
    }
}
if(b==1){
    cout<<"YES"<<endl;// its sorted initially
}
else{
    if (k>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
return 0;    
}