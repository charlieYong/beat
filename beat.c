#include "beat.h"
#include "sort.h"

#define BASE 100
#define min(a, b)   (a) > (b) ? b : a

static int scorelist[BASE] = {0};

// 1, heap sort
// 2, sample into scorelist by BASE slot
void loadScoreData(int user_score_list[], int len) {
    heapSort(user_score_list, len);
    int i=0, skip = (len > BASE) ? (len/BASE) : 1, minlen = min(BASE, len);
    for (i=0; i<minlen; i++) {
        scorelist[i] = user_score_list[(i+1)*skip - 1];
    }
    scorelist[i] = user_score_list[len-1];
}

float beat(int score) {
    int i=0;
    for (; i<BASE; i++) {
        if (scorelist[i] >= score)
            break;
    }
    if (0 == i || BASE == i)
        return i/BASE;
    return (float)(i+(float)(score - scorelist[i-1])/(float)(scorelist[i]-scorelist[i-1])) / BASE;
}
