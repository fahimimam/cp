//
// Created by Kazi Fahim Imam on 24/10/24.
//

#include <bits/stdc++.h>
using namespace std;
int ProblemB() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        int count = 0;
        if (t == 1) {
            int x;
            cin >> x;
            if (x < 0) {
                cout<<-1*x<<endl;
                continue;
            }
        } else {
            int arr[t][t];
            for (int i = 0; i < t; i++) {
                for (int j = 0; j < t; j++) {
                    cin >> arr[i][j];
                }
            }

            for (int i = 0, j=0; i < t; i++,j++) {
                int firstElem = arr[i][j];
                int secondElem = arr[i+1][j+1];
                if (firstElem < 0 || secondElem < 0) {
                    if (firstElem < secondElem) {
                        count+=firstElem * -1;
                    } else {
                        count+=secondElem * -1;
                    }
                    arr[i+1][j+1] = arr[i][j] = 0;
                }
            }

            cout << count << endl;
        }
    }
    return 0;
}
