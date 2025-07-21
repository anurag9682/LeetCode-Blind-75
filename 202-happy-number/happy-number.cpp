class Solution {
public:
    int getDigit(int n){
        int temp= 0;
        while(n>0){
            int rem = n%10;
            temp += pow(rem,2);
            n/=10;
        }
        return temp;
    }
    bool isHappy(int n) {
        unordered_set<int>visit;

        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n = getDigit(n);
            if(n==1) return true;
        }
        return false;
        
    }
};