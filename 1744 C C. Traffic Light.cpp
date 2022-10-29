/*
problem link: https://codeforces.com/contest/1744/problem/C
my solution on codeforces : https://codeforces.com/contest/1744/submission/176853385
problem name: C. Traffic Light
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
#define li long int
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
void file_set(string& file_name){
    freopen((file_name+".in").c_str(), "r", stdin);
    freopen((file_name+".out").c_str(), "w", stdout);
}
bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}

void LELLO()
{
    int n , mx = INT32_MIN ; cin >> n ;
    char c ; cin >> c ;
    string s ; cin >> s ;
    if(c == 'g'){
        cout << 0 <<endl; 
        bye
    }
    map<char , vector<int> > mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]].push_back(i+1) ;
    }
    
    for (int i= 0 ; i < mp[c].size(); i++)
    {
        int it = upper_bound(all(mp['g']) , mp[c][i]) - mp['g'].begin();
        if( it == mp['g'].size()){
            mx = max ( mx , mp['g'][0]+n-mp[c][i] ) ;
        }else{
            mx = max ( mx , mp['g'][it]-mp[c][i]) ;
        }
    }
    cout<< mx <<endl; 

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