#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[]){
    struct rtcdate r;
    if (date(&r)) {
        printf(2, "date failed\n");
        exit();
    }

    // your code to print the time in any format you like
    printf(2, "========= date.c ========\n");
    printf(2, "year : %d\n", r.year);
    printf(2, "month : %d\n", r.month);
    printf(2, "day : %d\n", r.day);
    printf(2, "hour : %d\n", r.hour);
    printf(2, "minute : %d\n", r.minute);
    printf(2, "second : %d\n", r.second);
    printf(2, "=========================\n");
    
    exit();
}