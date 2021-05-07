#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> student1 = {1, 2, 3, 4, 5};
    vector<int> student2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> student3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int count1 = 0, count2 = 0, count3 = 0;
    
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == student1[i%student1.size()]) count1++;
        if(answers[i] == student2[i%student2.size()]) count2++;
        if(answers[i] == student3[i%student3.size()]) count3++;
    }
    
    int max_count = max(count1, max(count2, count3));
    
    if(max_count == count1) answer.push_back(1);
    if(max_count == count2) answer.push_back(2);
    if(max_count == count3) answer.push_back(3);
    
    return answer;
}