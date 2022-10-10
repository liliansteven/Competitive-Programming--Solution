/*
problem link:https://codeforces.com/contest/1530/problem/C
my solution on codeforces :https://codeforces.com/contest/1530/submission/175332569
problem name: C. Pursuit
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
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1};  // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}  , dy[] = {0,0,1,-1,1,-1,1,-1};  // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} ,  dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} ,  dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction

ll n , k;
ll FA(ll m, vector < ll >& a, ll k){
  ll points = m * 100;
    k = (sz(a) + m) - (sz(a) + m) / 4;
    k -= m;
    for(int i = 0; i < k; i++) points += a[i];
    return points;
}
 
ll FB(ll m, vector < ll >& b, ll k){
    k = (sz(b) + m) - (sz(b) + m) / 4;
    ll points = 0;
    for(int i = 0; i < min(k, (ll)sz(b)); i++) points += b[i];
    return points;
}
 
ll BS(vector < ll >& a, vector < ll >& b, ll k){
    ll l = 0, r = 1e9, best = -1;
    while(l <= r){
        ll m = l + (r - l) / 2;
        (FA(m, a, k) >= FB(m, b, k) ? r = m - 1, best = m : l = m + 1);
    }
    return best;
}
 
void LELLO()
{
    ll s1 (0) ,s2(0) ;
    cin >> n ; 
    vector<ll> a(n) , b(n);
    for (int i = 0; i < n; i++) cin >>a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(rall(a));
    sort(rall(b));
    ll rem = n -n/4 ;
    for (int i = 0; i < k; i++)
    {
        s1 += a[i];
        s2 += b[i];
    }
    if(s1 > s2)cout<< 0 <<endl;
    else cout << BS(a, b, k) <<endl;
}
void driver(ll t)
{
    while (t--) LELLO();
}
signed main()
{
    AC();
    // sieve();
    ll test ; cin >> test ;
    driver(test);
}