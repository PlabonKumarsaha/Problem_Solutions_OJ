class MyHashSet {
    int[] values;
    public MyHashSet() {
        values = new int[1000000];
    }

    public void add(int key) {
    values[key]=1;
    }

    public void remove(int key) {
     values[key]=0;
    }

    /** Returns true if this set contains the specified element */
    public  boolean contains(int key) {
        return values[key]==1? true:false;
    }

}
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */