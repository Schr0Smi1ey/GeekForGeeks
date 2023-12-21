class Solution{
    public:
    int setSetBit(int x, int y, int l, int r)
    {
        bitset<32> bs(x);
        bitset<32> bs1(y);
        l--;
        for(int i=l;i<r;i++)
        {
            if(bs1[i]==1)
            bs[i] = bs1[i];
        }
        return bs.to_ullong();
    }
};