//
// Created by Yu4n on 2021-04-06.
//

bool allCap(string s){
    for(auto x : s){
        if(!isupper(x)){
            return false;
        }
    }
    return true;
}

bool allSmall(string s){
    for(auto x : s){
        if(isupper(x)){
            return false;
        }
    }
    return true;
}

bool detectCapitalUse(string word) {
    if(isupper(word[0])){
        if (allCap(word.substr(1,word.size()-1)) || allSmall(word.substr(1,word.size()-1))){
            return true;
        } else{
            return false;
        }
    } else if(allSmall(word)){
        return true;
    } else{
        return false;
    }
}