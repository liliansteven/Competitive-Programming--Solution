/*
problem link: https://codeforces.com/contest/1742/problem/A
my solution on codeforces : https://codeforces.com/contest/1742/submission/175902011
problem name: A. sum 
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
    int a , b , c ; cin >> a >> b >> c ;
    int mx = max({a , b , c }) ;
    if(mx == a){
        if(b+c == a){
            cout<<"YES"<<endl;
            bye
        }else {
            cout<<"NO"<<endl;
            bye
        }
    }
    if(mx == b){
        if(a+c == b){
            cout<<"YES"<<endl;
            bye
        }else {
            cout<<"NO"<<endl;
            bye
        }
    }
    if(mx == c){
        if(b+a == c){
            cout<<"YES"<<endl;
            bye
        }else {
            cout<<"NO"<<endl;
            bye
        }
    }
}
void driver(ll t=1)
{
    while (t--) LELLO();
}
signed main()
{
    AC();
    ll test ; cin >> test ;
    driver(test);
}