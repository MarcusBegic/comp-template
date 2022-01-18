#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <cmath>

using namespace std;
#define pb push_back
#define eb emplace_back
#define em emplace
#define mp make_pair
#define mt make_tuple
#define nl endl
#define fo(i,a,b) for(int i=(a);i<(b);i++)
#define INF (int)1e9
#define ll long long
// to read from library just do :r Library/printVec.cpp

void solve(){
    
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    vector<int> vec(n,0);
    fo(i,0,n) cin >> vec[i];
  }

  return 0;
}

// with 1sec 
// 10^6 O(n) n
// 10^5 O(nlogn) n
// 10^3 O(n^2) n
// 10^2 O(n^3) n
// 10^9 O(log n) n
// Div2 C/D = expert 1735

