#include <string>
#include <vector>

using namespace std;

int answer = 0;

void DFS(vector<int> numbers, int target, int sum, int count){
    if (numbers.size() == count){
        if (target == sum)
            answer++;
        return;
    }
    // 재귀
    DFS(numbers, target, sum + numbers[count], count + 1);
    DFS(numbers, target, sum - numbers[count], count + 1);
}

int solution(vector<int> numbers, int target){
    DFS(numbers, target, 0, 0);
    return answer;
}