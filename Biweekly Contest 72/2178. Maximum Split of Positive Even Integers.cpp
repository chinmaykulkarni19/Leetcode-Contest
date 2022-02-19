class Solution
{
public:
    vector<long long> maximumEvenSplit(long long finalSum)
    {
        if ((finalSum % 2) != 0)
            return {};
        long long i = 2;
        long long sum = 0;
        vector<long long> ans;
        while ((sum + i) <= finalSum)
        {
            ans.push_back(i);
            sum += i;
            i += 2;
        }
        int sz = ans.size();
        ans[sz - 1] = ans[sz - 1] + (finalSum - sum);
        return ans;
    }
};