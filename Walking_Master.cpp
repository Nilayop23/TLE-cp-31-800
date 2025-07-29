#include<iostream>
using namespace std;
int main (){
int t ; cin>>t;
while(t--){
int x1,y1 , x2 , y2;
cin>>x1;cin>>y1;cin>>x2;cin>>y2;


int operations = 0;

if (y1 > y2 ){
    cout<<-1<<endl;
}
else {
// abhi y1 ko y2 ke barabar kro 
operations = y2 - y1 ;
y1 = y2 ;
x1 = x1 + operations;

if (x1 < x2){
    cout<<-1<<endl;
}
else{
    operations += abs(x2-x1);
    cout<<operations<<endl;
}

}

}

return 0;    
}