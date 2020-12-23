#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl
#define pb push_back
#define ats(x) cout << x << "\n"
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii> vii;
typedef tuple<int, int, int> tiii;

const int INF = INT_MAX;


int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll a = 0;
        ll b = 0;
        ll totalsum = 0;
        ll curr = 2;
        for (int i = 1; i <= n; i++){
            totalsum += curr;
            curr *= 2;
        }
        for (int i = 1; i <= n/2 - 1; i++){
            a += pow(2, i);
        }
        a += pow(2, n);
        b = totalsum - a;
        ats(llabs(a - b));
    }
    return 0;
}

