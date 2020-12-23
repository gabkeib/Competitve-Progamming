#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl;
#define pb(x) push_back(x)
#define ats(x) cout << x << "\n";

typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii> vii;

const int INF = INT_MAX;

int n;

vector <ll> adj;

int main()
{
    FAST_IO;
    cin >> n;
    ll m;
    cin >> m;
    for (int i = 0; i < n; i++){
        ll sk;
        cin >> sk;
        adj.push_back(sk);
    }
    ll l = adj.front();
    ll r = adj.back();
    while (l < r){
        ll mid = (l + r) >> 1;
        if (cnt(mid) > cnt(mid + 1)){

        }
    }
    return 0;
}

long long cnt(int mid){

}

