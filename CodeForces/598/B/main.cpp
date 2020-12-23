#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        bool used[101];
        int arr[101];
        int place[101];
        for (int j = 1; j <= n; j++){
            int sk;
            cin >> sk;
            place[sk] = j;
            arr[j] = sk;
            used[j] = false;
        }
        for (int i = 1; i <= n; i++){
            if (place[i] != i){
                int curr = place[i];
                bool possible = true;
                while (possible){
                    if (!used[curr-1]){
                        int swapped = arr[curr-1];
                        swap(arr[curr-1], arr[curr]);
                        used[curr-1] = true;
                        place[i] = curr-1;
                        place[swapped] = curr;
                    }
                    else possible = false;
                    if (place[i] == i) possible = false;
                    curr--;
                }
            }
        }
        for (int i = 1; i <= n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
