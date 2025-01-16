//
// Created by Kazi Fahim Imam on 24/10/24.
//

#include<bits/stdc++.h>
using namespace std;

int sakuro() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        if(t%2) {
            cout<<"Kosuke"<<endl;
        }else {
            cout<<"Sakurako"<<endl;
        }
    }
    return 0;
}