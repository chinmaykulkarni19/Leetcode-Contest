class Solution
{
public:
    int countEven(int num)
    {
        int ans = 0;
        for (int i = 2; i <= num; i++)
        {
            if (cnt(i) % 2 == 0)
                ans++;
        }
        return ans;
    }

    int cnt(int x)
    {
        int sum = 0;
        while (x > 0)
        {
            sum = sum + x % 10;
            x = x / 10;
        }
        return sum;
    }
};