/*
problem link: https://codeforces.com/contest/1408/problem/C
my solution on codeforces : https://codeforces.com/contest/1408/submission/179009677
problem name: C. Discrete Acceleration
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
#define fixed(n) fixed << setprecision(n)
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

double t1,t2,n,le;
int arr[100000+5];
void calc(double dis){
    t1 = 0;
    int speed = 1,last = 0;
    for (int i = 0; i < n; ++i) {
        if(arr[i]>=dis)break;
        t1+= (arr[i]-last) / (double)speed;
        speed++;
        last = arr[i];
    }
    t1 += (dis - last) / (double)speed;
    t2 = 0,speed=1,last = le;
    for (int i = n-1; i >=0; --i) {
        if(arr[i]<=dis)break;
        t2+= abs(arr[i]-last) / (double)speed;
        speed++;
        last = arr[i];
    }
    t2 += abs(dis - last) / (double)speed;
}
void LELLO(){
    
    cin>>n>>le;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    double l=0,r=le;
    while(l<=r){
        double mid = l + (r-l)/2;
        t1=0,t2=0;
        calc(mid);
        if(abs(t1-t2)<=1e-6){cout<<fixed(13)<< t1<<"\n";return;}
        else if(t1<t2)l=mid;
        else r=mid;
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
    // chrono::time_point<chrono::system_clock> start, end;
    // start = chrono::system_clock::now();
    driver(test);
    // end = chrono::system_clock::now();
    // chrono::duration<double> elapsed_seconds = end - start;
    // time_t end_time = chrono::system_clock::to_time_t(end);
    // cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl ;

}