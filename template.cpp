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
using namespace std;
#define pb push_back
#define eb emplace_back
#define em emplace
#define mp make_pair
#define mt make_tuple
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define INF (int)1e9
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    int n;
    cin >> n;
    vector<int> vec(n,0);
    FOR(i,0,n) cin >> vec[i];
    }

  return 0;
}
// with 1sec 
// 10^6 O(n) n
// 10^5 O(nlogn) n
// 10^3 O(n^2) n ibland 100k
// 10^2 O(n^3) n
// 10^9 O(log n) n


//binary representation
// void bin(long n) n
//   { n
//     long i; n
//     cout << "0"; n
//     for (i = 1 << 30; i > 0; i = i / 2) n
//     { n
//       if((n & i) != 0) n
//       { n
//         cout << "1"; n
//       } n
//       else n
//       { n
//         cout << "0"; n
//       } n
//     } n
//   } n
//
// // Declaring tuple n
//     tuple <char, int, float> geek; n
  
//     // Assigning values to tuple using make_tuple() n
//     geek = make_tuple('a', 10, 15.5); n
  
//     // Printing initial tuple values using get() n
//     cout << get<0>(geek) << " " << get<1>(geek); n
//     cout << " " << get<2>(geek) << endl; n
  
//     // Use of get() to change values of tuple n
//     get<0>(geek) = 'b'; n
//     get<2>(geek) =  20.5; n

// unordered_map<string, double> umap;n
 
//     // inserting values by using [] operatorn
//     umap["PI"] = 3.14;n
//     umap["root2"] = 1.414;n
//     umap["root3"] = 1.732;n
//     umap["log10"] = 2.302;n
//     umap["loge"] = 1.0;n
 
//     // inserting value by insert functionn
//     umap.insert(make_pair("e", 2.718));n
 
//     string key = "PI";n
 
//     // If key not found in map iterator to end is returnedn
//     if (umap.find(key) == umap.end())n
//         cout << key << " not found\n\n";n
//
 
// // Create an empty vector n
// vector<int> vect; n

// vect.push_back(10); n
// vect.push_back(20); n
// vect.push_back(30); n

// for each loop
// for (int x : vect) n
 //    cout << x << " "; n
 
//   pass by reference in cpp
//   void swapNums(int &x, int &y) {


//sort array
//sort(arr, arr + n);
//
//sort vector 
// sort(v.begin(), v.end());
//


 
// void printArr(int arr[]){ n
 //    for (int i = 0; i < sizeof(&arr); i++) { n
 //        std::cout << arr[i] << ' '; n
 //    } n
// } n

// void printVec(std::vector<int> const &input) n
// { n
 //    for (int i = 0; i < input.size(); i++) { n
 //        std::cout << input.at(i) << ' '; n
 //    } n
// } n
//
//scan array
// for(int i=0; i<n;i++){ n
//
// scanf(“%d” ,array_name[i]); n

// } n
// int t;
// scanf("%d", &t); n
