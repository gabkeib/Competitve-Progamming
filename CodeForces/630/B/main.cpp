#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl
#define pb(x) push_back(x)
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

vi primes;

void sieve(){
    bool picked[1001];
    for (int i = 2; i <= 1000; i++) picked[i] = false;
    for (int i = 2; i * i <= 1000; i++){
        if (!picked[i]){
           primes.pb(i);
           int sk = i;
           while (sk <= 1000){
                picked[sk] = true;
                sk += i;
           }
        }
    }
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    sieve();
    for (int te = 0; te < t; te++){
        int n;
        cin >> n;
        int arr[n + 1];
        bool used[n + 1];
        int ans[n + 1];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            used[i] = false;
        }
        int col = 1;
        int cnt = 0;
        for (int i:primes){
            bool taken = false;
            for (int j = 0; j < n; j++){
                if (arr[j] % i == 0 && !used[j]){
                    ans[j] = col;
                    used[j] = true;
                    taken = true;
                    cnt++;
                }
            }
             if (taken) col++;
            if (cnt == n) break;
        }
        ats(col - 1);
        for (int j = 0; j < n; j++){
            cout << ans[j] << " ";
        }
        cout << "\n";
        }
    return 0;
}

