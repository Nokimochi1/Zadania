
#include <bits/stdc++.h> 

using namespace std;


int main(){

    string a;

    cin >> a;
    
    reverse(a.begin(), a.end());


    for(int i = 0; i <= a.length(); i++){

        if (a[0] == '0'){
            a.erase(0, 1);
        }

        else break;
    }


    cout<<a;
}
