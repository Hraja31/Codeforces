#include <iostream>
#include <vector>

void solve(const std::vector<int>& f, const std::vector<int>& lst) {
    if (lst[0] == lst[lst.size() - 1]) {
        int c = 0;
        for (int i : lst) {
            if (i == lst[0]) {
                c++;
            }
        }
        if (c >= f[1]) {
            std::cout << "YES" << std::endl;
            return;
        }
    }

    int s = lst[0];
    int l = lst[lst.size() - 1];
    int sm = 0;
    int lm = 0;

    for (int i = 0; i < f[0]; i++) {
        if (lst[i] == s) {
            sm++;
        }
        if (lst[i] == l && sm >= f[1]) {
            lm++;
        }
    }

    if (sm >= f[1] && lm >= f[1]) {
        std::cout << "YES" << std::endl;
        return;
    }

    std::cout << "NO" << std::endl;
}

int main() {
    int test;
    std::cin >> test;

    while (test) {
        int n, m;
        std::cin >> n >> m;

        std::vector<int> f{ n, m };
        std::vector<int> inp;

        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            inp.push_back(x);
        }

        solve(f, inp);
        test--;
    }

    return 0;
}
