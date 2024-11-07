#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int yag = n*12000;
    int dilk = 0;
    int a = k -(n/10);
        if (a>0){
           dilk = a*2000;
    }
    answer = yag + dilk;
    return answer;
}