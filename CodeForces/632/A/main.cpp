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


int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t-- > 0){
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        char table[n + 1][m + 1];
        if (n * m % 2 == 1){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (cnt % 2 == 0) {
                    table[i][j] = 'B';
                    cnt++;
                }
                else {
                    table[i][j] = 'W';
                    cnt++;
                }
            }
        }
        }
        else {
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    table[i][j] = 'B';
            }
            }
            for (int i = 0; i < n - 1; i++){
                table[i][m - 1] = 'W';
            }
        }
        for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    cout << table[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}

