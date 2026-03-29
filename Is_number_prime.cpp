#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number: ";

    cin>>n;

    if (n > 1)
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not prime";
                return 0;
            }
        }
    }
    else if (n == 1)
    {
        cout << "Not prime";
        return 0;
    }
    cout << "Prime";
}