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

int dist[51][51];

void bfs(pii start, char table[51][51], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            dist[i][j] = INF;
        }
    }
    dist[start.fi][start.se] = 0;
    queue <pii> q;
    q.push(start);
    while (!q.empty()){
        int x = q.front().fi;
        int y = q.front().se;
        q.pop();
        if (x - 1 >= 0 && dist[x - 1][y] == INF && table[x - 1][y] != '#'){
            dist[x - 1][y] = dist[x][y] + 1;
            q.push({x - 1, y});
        }
        if (x + 1 < n && dist[x + 1][y] == INF && table[x + 1][y] != '#'){
            dist[x + 1][y] = dist[x][y] + 1;
            q.push({x + 1, y});
        }
        if (y - 1 >= 0 && dist[x][y - 1] == INF && table[x][y - 1] != '#'){
            dist[x][y - 1] = dist[x][y] + 1;
            q.push({x, y - 1});
        }
        if (y + 1 < m && dist[x][y + 1] == INF && table[x][y + 1] != '#'){
            dist[x][y + 1] = dist[x][y] + 1;
            q.push({x, y + 1});
        }
    }
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        char table[51][51];
        vii good;
        vii bad;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> table[i][j];
                if (table[i][j] == 'G') good.pb({i, j});
                if (table[i][j] == 'B') bad.pb({i, j});
            }
        }
        if (good.empty()) ats("Yes");
        else {
            bfs({n - 1, m - 1}, table, n, m);
            bool great = true;
            for (pii x:good){
                int a = x.first;
                int b = x.second;
                if (dist[a][b] == INF) great = false;
            }
            if (!great) ats("No");
            else {
                bool allg = true;
                for (pii x:bad){
                    int a = x.first;
                    int b = x.second;
                    if (dist[a][b] != INF) allg = false;
                }
                if (allg) ats("Yes");
                else {
                    for (pii x:bad){
                    int a = x.first;
                    int b = x.second;
                    if (dist[a][b] != INF){
                        if (a + 1 < n && table[a + 1][b] != 'B' && table[a + 1][b] != 'G'){
                            table[a + 1][b] = '#';
                        }
                        if (a - 1 >= 0 && table[a - 1][b] != 'B' && table[a - 1][b] != 'G'){
                            table[a - 1][b] = '#';
                        }
                        if (b + 1 < m && table[a][b + 1] != 'B' && table[a][b + 1] != 'G'){
                            table[a][b + 1] = '#';
                        }
                        if (b - 1 >= 0 && table[a][b - 1] != 'B' && table[a][b - 1] != 'G'){
                            table[a][b - 1] = '#';
                        }
                    }
                }
                bfs({n - 1, m - 1}, table, n, m);
                bool greatb = true;
                for (pii x:good){
                    int a = x.first;
                    int b = x.second;
                    if (dist[a][b] == INF) greatb = false;
                }
                if (table[n - 1][m - 1] == '#') greatb = false;
                bool allgg = true;
                for (pii x:bad){
                    int a = x.first;
                    int b = x.second;
                    if (dist[a][b] != INF) allgg = false;
                }
                if (greatb && allgg) ats("Yes");
                else ats("No");
                }
            }
        }

    }
    return 0;
}

