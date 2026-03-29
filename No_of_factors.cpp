#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the number: ";
    cin >> n;

    if (n > 0)
    {
        for (int i = 1; i * i <= n; i++)
        {
            if ((n % i == 0) && ((i * i) != n))
                count += 2;
            else if (i * i == n)
                count++;
        }
    }
    cout << count;
}