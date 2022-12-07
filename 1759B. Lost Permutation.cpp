/*
problem link: https://codeforces.com/contest/1759/problem/B
my solution on codeforces : https://codeforces.com/contest/1759/submission/184239893
problem name: 1759 B. Lost Permutation
status: accepted
author: lilian_steven   or LELLO 
*/
#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
#include <vector>
#include <set>
#include <map>
#include<math.h>
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
#define endl '\n'
#define ll long long
#define li long int
#define lli long long int
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) ((x).size())
#define ison(num, bit) (num & (1 << bit))
#define setoffif(num, bit) (num ^= (1 << bit)) // iff (num &(1<<bit))
#define setoff(num, bit) (num &= ~(1 << bit))
#define seton(num, bit) (num |= (1 << bit))
#define flipbit(num, bit) (num ^= (1 << bit))
#define LSB(num) (num & (-num))
#define pop_count_int(num) __builtin_popcount(num)
#define pop_count_l(num) __builtin_popcountl(num)
#define pop_count_ll(num) __builtin_popcountll(num)
#define clz(num) __builtin_clz(num)
#define clzll(num) __builtin_clzll(num)
#define ctz(num) __builtin_ctz(num)
#define ctzll __builtin_ctzll
#define Num_of_Digits(n) ((ll)log10(n) + 1)
#define ceill(n, m) (((n) / (m)) + (((n) % (m)) ? 1 : 0))
#define lastOne(x) (__builtin_clzll(x))
#define fixed(n) fixed << setprecision(n)
#define Pi  3.14159265358979323846264
#define sin(a) sin((a)*PI/180)
#define cos(a) cos((a)*PI/180)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
ll sgn(ll x){ if(x > 0) return 1; if(x < 0) return -1; return 0;}
ll mod = 1e9 + 7;
ll mul(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }
ll add(ll a, ll b) { return ((a % mod) + (b % mod)) % mod; }
ll sub(ll a, ll b) { return ((a % mod) - (b % mod) + mod) % mod; }
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
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
    //PRAY FOR ME PLEASE 
    // CONTINUITY IS MORE IMPORTANT THAN RESULTS
    // TO GET SOMETHNG YOU NEVER HAD , YOU HAVE TO DO SOMETHNG YOU NEVER DID.
    // THOSE WHO CANN'T REMEMBER THE PAST'RE CONDEMNED TO REPEAT IT (USE DP -_-) - George Santayana
void LELLO(){
    //author: lilian_steven   or LELLO 
    int n , s ; cin >> n >> s; 
    vector<ll> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i] ;
    }
        for(int i = 1 ; s != 0; i++){
            if(i > s){
                cout<< "NO" <<endl;
                bye
            }
            if(find(all(vc) , i) == vc.end()){
                vc.push_back(i);
                s -= i ;
            }
        }
    sort(all(vc));
    ll co = 1 ;
    for (int i = 0; i < vc.size(); i++)
    {
        if(vc[i] != co){
            cout<<"NO"<<endl;
            bye
        }
        co++;
    }
    cout<<"YES"<<endl;
    
    bye
}

void driver(ll t=1)
{
    while (t--) LELLO();
}
signed main()
{
    AC();
    ll test ; cin >> test ;
    // chrono::time_point<chrono::system_clock> start, end;
    // start = chrono::system_clock::now();
    driver(test);
    // end = chrono::system_clock::now();
    // chrono::duration<double> elapsed_seconds = end - start;
    // time_t end_time = chrono::system_clock::to_time_t(end);
    // cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl ;

}