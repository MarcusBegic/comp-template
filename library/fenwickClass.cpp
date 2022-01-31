
class FenwickTree{
    private:
        vector<int> tree;
        int n; 
    public: 
        FenwickTree(int n) : n(n) {tree.assign(n+1,0);}
        int getSum(int i){
            int sum =0;
            while(i>0){
                sum+=tree[i];
                i -= (i & (-i));
            }
            return sum;
        }
        
        void update(int i, int delta){
            while(i<n){
                tree[i] += delta;
                i+= i & (-i);
            }
        }
};

// you create new instance with FenwickTree ft(n);
