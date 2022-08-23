#include <bits/stdc++.h>
#define MAX 104

using namespace std;

int cnt[30] = {0,};

bool is_valid(int idx) {

    return (idx == ('a' - 'a') || idx == ('e' - 'a') || idx == ('i' - 'a') || idx == ('o' - 'a') || idx == ('u' - 'a'));
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a_var = 0, b_var = 0;

    string str;

    while (1) {
        int flag = 0;
        cin >> str;

        if(str == "end") break;

        memset(cnt, 0 , sizeof(cnt));

        for(int i = 0; i < str.size(); i++) {
            int idx = str[i] - 'a';
            cnt[idx]++;

            if(is_valid(idx)) a_var++, b_var = 0;
            else b_var++, a_var = 0;

            if(a_var == 3 || b_var == 3) flag = 1;
            
        }
    }

    return 0;
}
/*

 */