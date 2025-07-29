#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
int t ;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>a(n),b,c;
for (int i = 0 ; i < n ; i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
b.push_back(a[0]);
for (int i = 1 ; i < n ; i++){
    if (a[0] % a[i] != 0 ){
        c.push_back(a[i]);
    }
    else{
        b.push_back(a[i]);
    }
}
if (b.size() * c.size() >= 1){
    cout << b.size() << " " << c.size() << endl;

    for (int i = 0 ; i < b.size() ; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0 ; i < c.size() ; i++){
        cout << c[i] << " ";
    }   
    cout << endl; 
} 
else{
    cout<<"-1"<<endl;
}
}

return 0;    
}