class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int n= candyType.size();
        set<int>st;

        for(int x : candyType){
            st.insert(x);
        }
         if(st.size() >= n/2){
            return n/2;
         }
         else return st.size();
        
    }
};