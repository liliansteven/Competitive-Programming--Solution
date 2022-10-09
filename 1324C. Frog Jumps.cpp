/*
problem link: https://codeforces.com/contest/1324/problem/C
my solution on codeforces : https://codeforces.com/contest/1324/submission/174503816
problem name: C. Frog Jumps
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
//priority_queue<pair<int,int>>large;
//priority_queue<int,vector<int>,greater<int>>q;
const int MOD = 1e9 + 7;
const int N = 1e7;
int prime[N] ;
int freq[N];
vector<int > ans ;
void sieve() {
    for ( int i = 2 ; i <= N ; i++)
        prime[i] = true;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if(!prime[i]) continue;
        for (int j = 2 * i ; j < N; j+= i){
            prime[j] = false ;
        }
    }
    for (int i = 2; i < N; i++){
        if(prime[i]) ans.push_back(i) ;
    }
}
int gcd(int a, int b){
    if( b==0) return a ;
    return gcd(a, a%b) ;
}
int lcm (int a, int b){
    return a/gcd(a, b)*b ;
}
bool is_prime(int a){
    for(int i=2; i<=sqrt(a); i++){
        if(a%i == 0) return false ;
    }
    return true ;
}
long long factorial(long long n) {
    long long factorial = 1;
    for (long long i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
long long nCr(long long n, long long r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
ll get_stoll(string s){
    ll res = 0;
    for(auto& c : s){
        res = res * 10 + (c - '0');
    }
    return res;
}
    //PRAY FOR ME PLEASE 
    // CONTINUITY IS MORE IMPORTANT THAN RESULTS
    // TO GET SOMETHNG YOU NEVER HAD , YOU HAVE TO DO SOMETHNG YOU NEVER DID.

void LELLO()
{
    string s ;cin >> s ;
    int len = s.length();
    int cor = count(all(s) , 'R');
    int col = count(all(s) , 'L');
    if(cor == 0){
        cout<< len+1 <<endl;
        bye
    }
    if(col == 0){
        cout<< 1 <<endl;
        bye
    }
    // if(s[len-1] == 'R'){
    //     cout<< len<<endl;
    //     bye
    // }
    vector<int> pos ;
    pos.push_back(0);
    for(int i = 0; i < len; i++){
        if(s[i] == 'R') pos.push_back(i+1);
    }
    pos.push_back(len+1);
    int mx = INT_MIN;
    for(int i = 0; i < int(pos.size()-1); i++){
        mx = max(pos[i+1]-pos[i] , mx);
    }
    cout<< mx <<endl;
    bye
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