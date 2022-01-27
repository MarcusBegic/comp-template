 
void construct_segment_tree(vector<int>& segtree,
                           vector<int> &a, int n)
{
    // assign values to leaves of the segment tree
    for (int i = 0; i < n; i++)
        segtree[n + i] = a[i];   
 
    /* assign values to internal nodes
      to compute minimum in a given range */
    for (int i = n - 1; i >= 1; i--)
        segtree[i] = min(segtree[2 * i],
                         segtree[2 * i + 1]);
}
 
void update(vector<int>& segtree, int pos, int value,
                                               int n)
{
    // change the index to leaf node first
    pos += n;
 
    // update the value at the leaf node
    // at the exact index
    segtree[pos] = value;
 
    while (pos > 1) {
 
        // move up one level at a time in the tree
        pos >>= 1;
 
        // update the values in the nodes in
        // the next higher level
        segtree[pos] = min(segtree[2 * pos],
                           segtree[2 * pos + 1]);
    }
}
 
int range_query(vector<int>& segtree, int left, int
                                      right, int n)
{
    /*  Basically the left and right indices will move
        towards right and left respectively and with
        every each next higher level and compute the
        minimum at each height. */
    // change the index to leaf node first
    left += n;
    right += n;
 
    // initialize minimum to a very high value
    int mi = (int)1e9;
 
    while (left < right) {
 
        // if left index in odd
        if (left & 1) {
            mi = min(mi, segtree[left]);
 
            // make left index even
            left++;
        }
 
        // if right index in odd
        if (right & 1) {
 
            // make right index even
            right--;
 
            mi = min(mi, segtree[right]);
        }
 
        // move to the next higher level
        left /= 2;
        right /= 2;
    }
    return mi;
}
