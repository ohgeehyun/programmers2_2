// 프로그래머스 2단계 피보나치 수 
/*
    우선 임의의 수 n의 피보나치를 구하는 공식부터 작성해보자 그걸 알아야 뭘 하지..
    n=5 일경우 f(n-2) + f(n-1) -> 결국 n은 n-2부터 n>-1 까지의 값이 필요한 것 n이 주어지면 결국 n보다 작은 수들의 피보나치 수 도 알아야하니 재귀를 통해서 풀기로 하였음..
    해당 코드에선 벡터로 값들을 저장하여 했는데 벡터대신 그냥 인자를 더 받거나 해서 recursive에서 그냥 값 들을 차곡차고 쌓아줘도 될 듯?(메모리 까지 고려시)     
*/

#include <string>
#include <vector>

using namespace std;

void recursive_fibonacci(int n, vector<int>& v)
{
    if (n <= 1) return;

    recursive_fibonacci(n - 1, v);
    v[n] = (v[n - 1] + v[n - 2]) % 1234567;
}

int solution(int n) {
    int answer = 0;

    vector<int> fibonacci(n + 1);
    fibonacci[0] = 0; //f(0)
    fibonacci[1] = 1; //f(1)

    recursive_fibonacci(n, fibonacci);

    answer = fibonacci[n];

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

