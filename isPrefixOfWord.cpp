//
// Created by Yu4n on 2021-03-19.
//

int isPrefixOfWord(string sentence, string searchWord) {
    int size = searchWord.size();
    int n = sentence.size();
    vector<int> index;
    if(sentence.substr(0 ,size) == searchWord){
        return 1;
    }
    for(int i = 1; i != n; ++i){
        if(sentence[i] == ' '){
            index.push_back(i);
        }
    }
    int cnt = 2;
    for(auto it = index.begin(); it != index.end(); ++it, ++cnt){
        if(sentence.substr((*it) + 1, size) == searchWord){
            return cnt;
        }
    }
    return -1;
}