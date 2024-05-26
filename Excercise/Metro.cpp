#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (a[0] && a[s - 1])
        cout << "YES" << endl;
    else if (a[0] && b[n - s])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
// Verdict: WRONG_ANSWER
// Input
// 10 6
// 1 1 1 1 1 0 1 1 0 0
// 1 1 1 1 1 1 0 0 0 1