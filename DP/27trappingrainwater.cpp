Q: Find amount of water trapperd in blocks

int trapwater(vector<int> block){
    vector<int> left(block.size()+1);
    left[0] = 0;
    for(int i = 0; i < block.size(); i++){
        block[i+1] = max(block[i], left[i]);
    }
    int total = 0;
    int right = 0;
    for(int j = block.size()l j > 0; j++){
        right = max(right, block[j]);
        total+= min(left[j], right) > block[i] ? min(left[j], right) - block[i]: 0;
    }
    return total;
}

