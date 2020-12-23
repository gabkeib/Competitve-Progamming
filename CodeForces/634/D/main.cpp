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
        string table[9];
        for (int i = 0; i < 9; i++){
            cin >> table[i];
        }
        int pos = 0;
        int i = 0;
        int c = 0;
        for (int j = 0; j < 3; j++){
        pos = c++;
        while (pos < 9){
            if (table[i][pos] == '9') table[i][pos] = '1';
            else table[i][pos]++;
            i++;
            pos += 3;
        }
        }
        for (int i = 0; i < 9; i++){
            ats(table[i]);
        }
    }
    return 0;
}

