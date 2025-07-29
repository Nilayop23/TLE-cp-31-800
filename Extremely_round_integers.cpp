// before 10, 9 such numbers will be there
// before 100 9 such numbers , so total 10 + 9
// before 1000 , total numbers be 10 + 10 + 9
// and so on

#include <iostream>
using namespace std;
int  main() {   
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        if (n <= 10){
            cout << n  << endl; 
        }
        else if ( n > 10 && n <= 100) {
            int count = 10;
        for (int i = 11; i <= n; i++) {
            if (i % 10 == 0) {
                count++;
            }

        }
        cout << count << endl;
        } 
        else if (n > 100 && n <= 1000) {
            int count = 19;
            for (int i = 101; i <= n; i++) {
                if (i % 100 == 0) {
                    count++;
                }
            }
            cout << count << endl;
        } 
        else if (n > 1000 && n <= 10000) {
            int count = 29;
            for (int i = 1001; i <= n; i++) {
                if (i % 1000 == 0) {
                    count++;
                }
            }
            cout << count << endl;
        } 
        else if (n > 10000 && n <= 100000) {
            int count = 39;
            for (int i = 10001; i <= n; i++) {
                if (i % 10000 == 0) {
                    count++;
                }
            }
            cout << count << endl;
        } 
        else if (n > 100000 && n <= 1000000) {
            int count = 49;
            for (int i = 100001; i <= n; i++) {
                if (i % 100000 == 0) {
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (n > 1000000 && n <= 10000000){
            int count = 59;
            for (int i = 1000001; i <= n; i++) {
                if (i % 1000000 == 0) {
                    count++;
                }
            }
            cout << count << endl;            
        }
}
}