class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) 
    {
        vector<int> fre(26,0);
        for(int i=0;i<tasks.size();i++)
        {
            fre[tasks[i]-'A']++;
        }
        sort(fre.begin(),fre.end(),greater<int>());
        int idletime = (fre[0]-1)*K;
        for(int i=1;i<fre.size();i++)
        {
            idletime-=min(fre[0]-1,fre[i]);
        }
        idletime = max(0,idletime);
        return idletime+N;
    }
};