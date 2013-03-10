#include "beat.h"

#define BASE_NUM 100;
typedef struct node {
    int min;
    int max;
} node;

static node scorelist[BASE_NUM];

// 1, heap sort
// 2, fix into _scorelist by BASE_NUM slot
int load_score_data(int* user_score_list, int len) {
    
}

int beat(int score) {
    for (int i=0; i<BASE_NUM; i++) {
        if (i <= scorelist[i].max)
            return i;
    }
    return i;
}
