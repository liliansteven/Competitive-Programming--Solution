/*
problem link: http://codeforces.com/contest/363/problem/B
my solution in codeforces : https://codeforces.com/contest/363/submission/174515039 
problem name: B. Fence
status:accepted
author: lilian_steven   or LELLO 
*/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <bitset>
#include <utility>
#include <string>
#include <cctype>
#include <iomanip>
#include <numeric> // for NTH
#define bye return;
#define ll long long
#define lli long long int
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) ((x).size())
#define ison(num, bit) (num & (1 << bit))
#define setoff(num, bit) (num ^= (1 << bit)) // iff (num &(1<<bit))
#define flipbit(num, bit) (num ^= (1 << bit))
#define setbit(num, bit) (num |= (1 << bit))
#define clearbit(num, bit) (num &= ~(1 << bit))
#define pop_count(num) __builtin_popcount(num)
#define Num_of_Digits(n) ((ll)log10(n) + 1)
#define ceill(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define lastOne(x) (__builtin_clzll(x))
#define Pi  3.14159265358979323846264
#define sin(a) sin((a)*PI/180)
#define cos(a) cos((a)*PI/180)
ll sgn(ll x){ if(x > 0) return 1; if(x < 0) return -1; return 0;}
ll gcd(ll a, ll b){if(b == 0) return a; return gcd(b, a%b);}
ll lcm(ll a, ll b){return a/gcd(a, b)*b;}
using namespace std;
void AC() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); // or cin.tie(NULL)
    cout.tie(nullptr);  // or cout.tie(0)
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    // #endif
}
bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1};  // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}  , dy[] = {0,0,1,-1,1,-1,1,-1};  // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} ,  dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} ,  dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction


    //PRAY FOR ME PLEASE 
    // CONTINUITY IS MORE IMPORTANT THAN RESULTS
    // TO GET SOMETHNG YOU NEVER HAD , YOU HAVE TO DO SOMETHNG YOU NEVER DID.

void LELLO()
{
    // created by : lilian_steven   or  LELLO
    int n, k ; cin >> n >> k ;
    vector<int> vc(n) , ans;
    for (int i = 0; i < n; i++){
        cin >> vc [i] ;
    }
    int win(0) ;
    for (int i = 0; i < k; i++){
        win += vc[i];
    }
    ans.push_back(win);
    for (int i = k; i < n; i++){
        win += vc[i]-vc[i-k];
        ans.push_back(win);
    }
    auto ind = min_element(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        if(ans[i] == *ind){
            cout<< i+1 <<endl;
            bye
        }
    }
    bye
}
void driver(ll t=1)
{
    while (t--) LELLO();
}
signed main()
{
    AC();
    // sieve();
    // ll test ; cin >> test ;
    driver();
}