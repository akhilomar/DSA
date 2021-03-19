Q: Convert Integer to Roman


string I2R(int nums){
    vector<string> Roman = {
        "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"
    }

    vector<int> val = {
        1000,900,500,400,100,90,50,40,10,9,5,4,1
    }

    string ans = "";

    for(int i = 0; nums!=0; i++){
        while(nums >= val[i]){
            ans+=Roman[i];
            nums-=val[i];
        }
    }
    return ans;
}