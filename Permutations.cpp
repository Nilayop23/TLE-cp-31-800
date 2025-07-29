#include<iostream>
using namespace std;
int main (){
    int t ; cin>> t;
    while(t--){
        int n , a , b;
        cin >> n ; cin>> a ; cin >> b;
        //(1≤a,b≤n≤100)
        
        if (n==a && n==b){
            cout << "Yes"<<endl;
        }
        else if (a==b && a < n){
            if ((n-(a+b)) >= 2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            if ((n - (a+b))>=2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
return 0;    
}