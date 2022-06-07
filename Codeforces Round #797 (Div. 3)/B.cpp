// Link : https://codeforces.com/contest/1690/problem/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, z, a) for (int i = z; i >= a; --i)
#define rep0(n) for (int i = 0; i < n; ++i)
#define rep1(n) for (int i = 1; i <= n; ++i)
#define tc       \
    int test;    \
    cin >> test; \
    while (test--)
#define all(v) v.begin(), v.end()
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define endl "\n"
#define spc " "
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define extime cout << endl \
                    << endl \
                    << "____" << (float)clock() / CLOCKS_PER_SEC << "s____";
#define maxn 998244353
#define mod 1000000007
//#define ll          long long int
// typedef vector<ll>  vll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef map<int, int> mapi;
typedef map<char, int> mapchar;
void OJ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}

// bool comp(int e1,int e2){
//   int x,y;
//   x = (e1&(~(e1-1)));
//   y = (e2&(~(e2-1)));
//   return x<=y;
// }
// int cov(int n, int a[]){

// }
// int mysol(int n,int a[]){

// }
int solve()
{
    int n;
    cin >> n;
    int a[n], b[n], c = 0, pos = -1;
    bool f = 0;
    rep0(n) cin >> a[i];
    rep0(n) cin >> b[i];
    rep0(n)
    {
        if (a[i] < b[i])
        {
            f = 1;
            break;
        }
        if (b[i] != 0 && pos == -1)
            pos = i;
    }
    if (f)
        cout << "NO" << endl;
    else if (pos == -1)
        cout << "YES" << endl;
    else
    {
        int dif = a[pos] - b[pos];
        rep(i, 0, n)
        {
            if (b[i] != 0 && a[i] - b[i] != dif)
            {
                f = 1;
                break;
            }
            if (b[i] == 0 && dif < a[i] - b[i])
            {
                f = 1;
                break;
            }
        }
        f ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}
signed main()
{
    OJ();
    IOS
        tc
        solve();
    // srand(time(NULL));
    // int cnt = 1;
    // while(cnt<1000){
    //     int n = rand() % 30 +1;
    //     int a[n];
    //     for(int i=0;i<n;i++)a[i] = rand() % 30 + 1;
    //     int csolv = cov(n,a);
    //     int mysolv = mysol(n,a);

    //    if(mysolv!=csolv){
    //     cout<<n<<endl;
    //     rep0(n)cout<<a[i]<<" ";
    //     cout<<endl;
    //     cout<<mysolv<<endl;
    //     cout<<csolv<<endl;
    //     break;
    //   }
    //   cnt++;
    // }
    // cout<<"complete"<<endl;
    // extime
    return 0;
}