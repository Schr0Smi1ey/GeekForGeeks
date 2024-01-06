class Solution {
public:
    int primeFactor(int n,int sum){
        while(n % 2 == 0){
            sum++;
            n /= 2;
        }
        for(int i = 3;i*i <= n;i += 2){
            while(n % i == 0){
                sum++;
                n /= i;
            }
        }
        if(n > 2){
            sum++;
        }
        return sum;
    }
	int sumOfPowers(int a, int b){
	    int sum = 0;
	    for(int i = a;i <= b;i++){
	        sum += primeFactor(i,0);
	    }
	    return sum;
	}
};
