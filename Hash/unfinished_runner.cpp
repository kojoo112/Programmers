#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> map_key;
    
    for(auto p : participant){
        map_key[p]++;
    }
    
    for(auto c : completion){
        map_key[c]--;
    }
    
    for(auto element : map_key){
        if(element.second > 0){
            return element.first;
        }
    }
    
    
    return answer;
}