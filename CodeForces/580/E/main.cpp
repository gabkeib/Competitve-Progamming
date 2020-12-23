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


int main()
{
    FAST_IO;
    int n;
    cin >> n;
    int table[n+2][n+2];
    table[1][1] = 1;
    table[n][n] = 0;
    int total = n*n;
    int curr = 2;
    return 0;
}

