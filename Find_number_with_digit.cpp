#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(int n, int d) 
{
    vector<int> arr;
    int num,x;
    
    for(int i=0;i<=n;i++)
    {
        num = i;
        do
        {
            x=num%10;
            if(x == d)
            {
                arr.push_back(i);
                break;
            }
            num/=10;
        }while(num!=0);
    }
    
    if(arr.size() == 0)
        arr.push_back(-1);
    
    return arr;
}

int main()
{
    int n,d;
    cin >> n >> d;

    solve(n,d);
}