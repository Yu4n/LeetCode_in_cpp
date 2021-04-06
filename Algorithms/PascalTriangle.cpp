//
// Created by Yu4n on 2021-03-21.
//

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal;
    for(int i = 0; i != numRows; ++i){
        vector<int> row(i + 1,1);
        for(int j = 0; j < i - 1; ++j){
            row[j+1] = pascal[i-1][j]+pascal[i-1][j+1];
        }
        pascal.push_back(row);
    }
    return pascal;
}

vector<int> getRow(int rowIndex) {
    vector<vector<int>> pascal;
    for(int i = 0; i <= rowIndex; ++i){
        vector<int> row(i + 1,1);
        for(int j = 0; j < i - 1; ++j){
            row[j+1] = pascal[i-1][j]+pascal[i-1][j+1];
        }
        pascal.push_back(row);
    }
    return pascal[rowIndex];
}