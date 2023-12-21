class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
        bitset<32> bs1(m),bs2(n);
        for(int i=0;i<32;i++){
            if(bs1[i] != bs2[i]){
                return (i+1);
            }
        }
        return -1;
    }
};