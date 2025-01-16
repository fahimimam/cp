#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            if (x < 0) {
                cout<<-1*x<<endl;
            } else {
                cout<<0<<endl;
            }
        } else {
            int count = 0;
            int arr[t][t];
            for (int i = 0; i < t; i++) {
                for (int j = 0; j < t; j++) {
                    cin >> arr[i][j];
                }
            }
            for (int i = 0; i < t-1; i++) {
                for (int j = 0; j < t-1; j++) {
                    int firstElement = arr[i][j];
                    int secondElement = arr[i+1][j+1];
                    // cout<<"Working with: "<<firstElement<<" "<<secondElement<<" For i :" <<i<<endl;
                    if (firstElement < 0 || secondElement < 0) {
                        if (firstElement < secondElement) {
                            count = count + firstElement * -1;
                        } else {
                            count = count + secondElement * -1;
                        }
                        arr[i+1][j+1] = arr[i][j] = 0;
                        // cout<<"Count: "<<count<<endl;
                    }
                }
            }

            cout<<count<<endl;
        }
    }
    return 0;
}