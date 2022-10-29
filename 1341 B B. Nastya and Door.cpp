/*
problem link: https://codeforces.com/contest/1341/problem/B
my solution on codeforces : https://codeforces.com/contest/1341/submission/176491591
problem name: 1341 B B. Nastya and Door
status: accepted
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
void LELLO()
{
    ll n , k , mx = INT16_MIN ; cin >> n >> k ;
    vector<ll> pref(n+1, 0) ;
    deque<ll> vc(n) ;
    map<ll ,ll > mp;
    for (int i = 0 ; i < n; i++)
    {
        cin >> vc[i];
    }
    
    for (int i = 1; i < n-1; i++)
    {
        pref[i+1] = pref[i] + (vc[i] > vc[i-1] && vc[i] > vc[i+1]) ;
    }
    pref[n] = pref[n-1]  ;
    for (int i = 1; (i+k-2) <= n ; i++)
    {
        mp[i] = pref[i+k-2]-pref[i] ;
        // cout<< i << ' '<< pref[i+k-2]-pref[i] <<endl;
        mx = max(mx , pref[i+k-2]-pref[i]) ;
    }
    // cout << mx <<endl;
    for(auto& val : mp){
        if(val.second == mx){
            cout<<val.second+1 <<' '<< val.first <<endl; 
            bye 
        }
    }
} 
 
 
void driver(ll t)
{
    while (t--) LELLO();
}
signed main()
{
    AC();
    ll test ; cin >> test ;
    driver(test);
}