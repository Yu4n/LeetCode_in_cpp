//
// Created by Yu4n on 2021-03-22.
//

int findLucky(vector<int> &arr) {
    std::map<int, int> freqMap;
    for(auto x : arr){
        if(freqMap.find(x) == freqMap.end()){
            freqMap.insert({x,1});
        } else{
            freqMap[x] += 1;
        }
    }
    for(auto it = freqMap.rbegin(); it != freqMap.rend(); ++it ){
        if (it->first == it->second){
            return it->first;
        }
    }
    return -1;
}