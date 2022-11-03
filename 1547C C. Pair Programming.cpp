/*
problem link: https://codeforces.com/contest/1547/problem/C
my solution on codeforces : https://codeforces.com/contest/1547/submission/179006451
problem name: C. Pair Programming
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

void LELLO()
{
    string s ; getline(cin , s );
    int k ,  n , m  ;cin >> k >> n >> m ;
    vector<int> a(n) , b(m) ,ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i] ;
    }
    // int mn = min( n , m);
        int i = 0 , j = 0 ;
        while ( i < n || j < m)
        {
            bool flag = true ;
            while (i < n && a[i] <= k)
            {
                ans.push_back(a[i]) , k+= !(a[i]) ;
                i++;
                flag = false;
            }
            while (j < m && b[j] <= k)
            {
                ans.push_back(b[j]) , k+= !(b[j]) ;
                j++;
                flag = false;
            }
            if(flag) break;
        }
        if( i < n){
            for ( ; i < n; i++)
            {
                if(a[i] > k  ){
                    cout<< -1 <<endl;
                    bye
                }
                ans.push_back(a[i]) ;
            }
            
        }
        if(j < m){
            for (; j < m; j++ )
            {
                if(b[j] > k  ){
                    cout<< -1 <<endl;
                    bye
                }
                ans.push_back(b[j]) ;
            }
        }
    for (int z = 0; z < ans.size(); z++)
    {
        cout<< ans[z] <<' '; 
    }
    cout<<endl;
    ans.clear();
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