#include <bits/stdc++.h>
using namespace std;

#define NOTEOF(PATTERN, ...) while (scanf(PATTERN, __VA_ARGS__) != EOF)
#define FOR(i, init, len) for (unsigned int i = init; i < len; i++)
#define FROMTO(i, len) FOR(i, 0, len)
#define CASES           \
    unsigned int cases; \
    cin >> cases;       \
    FOR(c, 0, cases)
#define CEROS_LEFT(n) __buildtin_ctz(n)
#define READ(type, var) \
    type var;           \
    cin >> var
#define READ_ARRAY(type, var, len) \
    type var[len];                 \
    FROMTO(i, len)                 \
        cin >> var[i]

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    return 0;
}