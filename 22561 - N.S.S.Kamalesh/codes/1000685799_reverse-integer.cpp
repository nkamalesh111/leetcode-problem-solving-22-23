class Solution {
public:
    int reverse(int x) {
        long y=0;
        while(x){
            y=(y*10)+(x%10);
            x/=10;
        }
        if(y>INT_MAX||y<INT_MIN) return 0;
        return y;
    }
};