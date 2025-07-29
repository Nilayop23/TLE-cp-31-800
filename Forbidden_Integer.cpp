#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
int t ; cin>>t;
while(t--){
int n , k , x;
cin>>n ; cin>>k; cin>>x;

if (x != 1){
    cout<<"YES"<<endl;
    cout<<n<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<1<<" ";
    }
    cout<<endl;
}
else{
    vector<int>ans;
    if (k == 1){
        cout<<"No"<<endl;
    }
    else if (k == 2){
        if(n%2==0){
            cout << "Yes" <<endl;
            cout<< n/2 << endl;
            for (int i = 0 ; i < n/2 ; i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else if ( k >= 3){
        // any num can be represented by combo of 2 and 3
        
        if(n%2==0){
            cout << "Yes" <<endl;
            cout << n/2 <<endl;
            for (int i = 0 ; i < n/2 ; i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        // only odd numbers
        else if(n%3==0){
            cout << "Yes" <<endl;
            cout<< n/3 <<endl;
            for (int i = 0 ; i < n/3 ; i++){
                cout<<3<<" ";
            }
            cout<<endl;            
        }
        // now number will be in form of 3N+-1
        else {
            if ((n-2)%3 == 0){
                cout<<"YES"<<endl;
                cout<<1+(n-2)/3<<endl;
                cout<<2<<" ";
                for(int i = 0 ; i < (n-2)/3 ; i++){
                    cout<<3<<" ";
                }               
            cout<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<1+(n-3)/2<<endl;
                cout<<3<<" ";
                for(int i = 0 ; i < (n-3)/2 ; i++){
                    cout<<2<<" ";
                }
            cout<<endl;    
            }
        }         
    }

}

}

return 0;    
}