#include <stdio.h>
#include "sort.h"
#include "beat.h"

void testHeapSort(int numbers[], int len) {
    int i=0;
    heapSort(numbers, len);
    printf("heap sort:");
    for (i=0; i<len; i++) {
        printf("%d,", numbers[i]);
    }
    printf("\n");
}

void testBeatScore(int scorelist[], int len, int score) {
    loadScoreData(scorelist, len);
    printf("score=%d, beat %.2f%% users\n", score, beat(score) * 100);
}

int main(int argc, char** argv) {
    int numbers[] = {3,2,4,5,6,1,1,7,8,0};
    int len = sizeof(numbers)/sizeof(int);
    //testHeapSort(numbers, len);
    testBeatScore(numbers, len, atoi(argv[1]));
    return 0;
}
