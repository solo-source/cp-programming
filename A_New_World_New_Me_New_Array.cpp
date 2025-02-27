#include <iostream>

void solve()
{
    int min_ops;
    int n, k, p;
    std::cin >> n >> k >> p;

    // declarying a dynamic Array
    // int arr[n];

    // Checking for impossible condition
    if (k < (-n * p) || k > (n * p))
    {
        std::cout << -1 << std::endl;
        return;
    }
    // zero condition
    if (k == 0)
    {
        std::cout << 0 << std::endl;
        return;
    }
    // min no of operation needed
    if (std::abs(k) % p != 0)
    {
        min_ops = (std::abs(k) / p) + 1;
    }
    else
    {
        min_ops = std::abs(k) / p;
    }
    std::cout << min_ops << std::endl;
    return;
}
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}