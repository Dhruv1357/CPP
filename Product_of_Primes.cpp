class Solution {
  public:
    int primeProduct(int L, int R) 
    {

        int flag,m = 1000000007,res;
        long long product = 1;
        for(int i=L;i<=R;i++)
        {
            flag = 1;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
                product = ((product%m)*(i%m))%m;
        }

        res = product%m;
        
        return res;
    }
};