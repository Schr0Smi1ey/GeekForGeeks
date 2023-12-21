// read the comment section for clarity

class Solution {
  public:
    int matchGame(long long N) 
    {
        return (N%5)?(N%5):-1;
    }
};