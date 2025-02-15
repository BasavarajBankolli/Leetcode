class ProductOfNumbers {
public:
    vector <int> stream;

    ProductOfNumbers() {
        stream = {1};
    }
    
    void add(int num) {
        stream.push_back(num);

        
    }
    
    int getProduct(int k) {
        int pro = 1, n = stream.size();
        
        for (int i = n-1; i >= n-k; i--){
            pro *= stream[i];
        }

        return pro;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */