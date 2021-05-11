#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> my_clothes;
    
    for(auto c : clothes){
        my_clothes[c[1]]++;
    }
    
    for(auto index : my_clothes){
        answer *= index.second + 1;
    }
    
    return answer-1;
}