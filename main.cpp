#include <bits/stdc++.h>
#define MAX 104

using namespace std;

int cnt[30] = {0,};

bool is_valid(int idx) {

    return (idx == 0 || idx == 4 || idx == 8 || idx == 14 || idx == 20);
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str;

    while (1) {
        int a_var = 0, b_var = 0;
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

            if(i >= 1 && (str[i - 1] == str[i]) && (idx != 4 && idx != 14)) flag = 1;

        }
        if(!cnt[0] && !cnt[4] && !cnt[8] && !cnt[14] && !cnt[20]) flag = 1;

        if(flag) cout << "<" << str << ">" << " is not acceptable." << "\n";
        else cout << "<" << str << ">" << " is acceptable." << "\n";
    }

    return 0;
}
/*

 */