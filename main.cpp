#include <bits/stdc++.h>
#define MAX 104

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    long long N;

    cin >> T;

    for(int i = 0; i < T; i++) {
        int two = 0, five = 0;
        cin >> N;

        for(int j = 2; j <= N; j *= 2) {
            two += N / j;
        }

        for(int j = 5; j <= N; j *= 5) {
            five += N / j;
        }

        cout << min(two, five) << "\n";
    }

    return 0;
}
/*

 */