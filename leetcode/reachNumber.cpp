#include<bits/stdc++.h>
using namespace std;

int main() {
  int targetFloor,  pos=0, step=1;
  cin >> targetFloor;
  if (targetFloor < 0) targetFloor *= -1;
  while(true) {
    pos+=step;
    if (pos == targetFloor) break;
    if (pos > targetFloor && (pos-targetFloor) % 2 == 0) {
      break;
    }
    step++;
  }
  cout<<"Minimum jumps Needed: "<<step<<endl;

  return 0;
}