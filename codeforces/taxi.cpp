#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, t, ans=0;
  int count[4] = {0};

  cin>>n;
  while(n--) {
    cin>>t;
    count[t-1]++;
  }
  ans+= count[3];
  ans+= count[2];
  // check if we can squeeze 1-man group in with them.
  count[0] = max(0, count[0]-count[2]);

  if (count[1] % 2) { // if odd
    ans++;
    count[0] = max(0, count[0]-2);
    count[1]--;
  }
  ans += count[1]/2;

  if (count[0] % 4) {
    ans+= count[0]/4;
    ans++;
  } else {
    ans+= count[0]/4;
  }


  cout<<ans<<endl;
  return 0;
}