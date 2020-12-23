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

int ans(int n){
    int sk = 1;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            if (n / i == i){
                sk = max(i, sk);
            } else {
                sk = max(max(i, n/i), sk);
            }
        }
    }
    return sk;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n%2 == 0) cout << n/2 << " " << n/2 << "\n";
        else {
            int divsk = ans(n);
            cout << min(divsk, n - divsk) << " " << max(n - divsk, divsk) << endl;
        }
    }
    return 0;
}

