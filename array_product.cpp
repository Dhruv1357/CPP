#include <iostream>
using namespace std;

class Solution {
  public:

    long long int product(vector<int> &arr) 
    {

        long long product =1;
        int m = 1000000007;
        for(int i=0;i<arr.size();i++)
        {
            product = ((product%m) * (arr[i]%m))%m;
        }
        return product;
    }
};