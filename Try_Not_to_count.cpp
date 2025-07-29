#include <bits/stdc++.h>
using namespace std;
int main (){
int t; 
cin>>t;
while(t--){
int n , m;
cin>>n;
cin>>m;


string x;
string s;

cin>>x;
cin>>s;

// continue loop  till s is not substring of x
int k = 0 ;
int ans = -1;
while(x.length() <= 32){
    if (x.find(s)!= string::npos){
        ans = k;
        break;
    }

    else{
        // concatinate x  and k++
        x = x+x;
        k++;
    }
}



cout<<ans<<endl;


}
return 0;    
}
