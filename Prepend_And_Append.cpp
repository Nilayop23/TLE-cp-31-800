#include<iostream>
#include<string>
using namespace std;
int main (){
int t ; cin>>t;
while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int s = 0;
    int e = str.length()-1;

    while( s <=  e){
        if (str[s]=='0'&& str[e]=='1' || str[s]=='1' && str[e]=='0'){
            s++;
            e--;
        }
        else{
            break;
        }

    }
    int final_length = e-s+1;
    cout<<final_length<<endl;


}


return 0;    
}