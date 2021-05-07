#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int carpet = brown + yellow;
    
    for(int i=3; i<=carpet; i++){
        if(carpet % i == 0){
            int width = i;
            int height = carpet/i;
            if(width >= height){
                if((width-2) * (height-2) == yellow){
                    answer.push_back(width);
                    answer.push_back(height);
                    break;
                }
            }
        }
    }
    return answer;
}