class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n==1)
        {
        return true;
        }
        if(n%3==0 and n>0)
        {
        return isPowerOfThree (n/3);
        }
        return false;
    }
};