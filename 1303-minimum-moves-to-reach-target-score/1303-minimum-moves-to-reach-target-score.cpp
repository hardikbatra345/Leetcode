class Solution {
public:
    int minMoves(int target, int maxDoubles) {
          int ans=0;
        while(target>1 && maxDoubles>0){
            if(!(target&1)){
                target/=2;
                maxDoubles--;
            }
            else target--;
            ans++;
        }
        return ans+(target-1);
    }
};