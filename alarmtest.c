#include "types.h"
#include "stat.h"
#include "user.h"

void periodic(){
    printf(1, "alarm!\n");
}

int main(int argc, char *argv[]){
    int i;
    printf(1, "alarmtest starting\n");
    if (alarm(10, periodic)){
        printf(1, "alarm failed\n");
        exit();
    }
    for(i=0; i< 25 * 5000000; i++){
        if((i % 250000) == 0)
            write(2, ".", 1);
    }
    exit();
}