#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> stringNumbers;
    
    for(auto number : numbers){
        stringNumbers.push_back(to_string(number));
    }
    sort(stringNumbers.begin(), stringNumbers.end(), compare);
    
    if(stringNumbers[0] == "0") return "0";
    for(int i=0; i<stringNumbers.size(); i++){
        answer += stringNumbers[i];
    }
    return answer;
}