class RandomizedSet {
public:
    vector<int> s;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(find(s.begin(), s.end(),val)==s.end()){
            s.push_back(val);
            return true;}
        return false;
    }
    
    bool remove(int val) {
        for (auto i = s.begin(); i != s.end(); ++i) {
        if (*i  == val) {
            s.erase(i);
            return true;
        }
    }
        return false;
    }
    
    int getRandom() {
        if(s.size()>=1){
            int num = rand() %(s.size());
            return s[num];
        }
       return 0; 
    }
  
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */