#include<iostream>
using namespace std;
int main ()
{
int t ;
cin>>t;
while(t--)
{
    int a , b, c;
    cin>>a;
    cin>>b;
    cin>>c;


    if ( a > b ){
        cout<<"First"<<endl;
    }
    else if (b > a){
        cout << "Second" <<endl;
    }
    else if ( a==b && c % 2 != 0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
}

return 0;    
}