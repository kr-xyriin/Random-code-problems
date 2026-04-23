#include <stdio.h>

int main() {
    typedef struct time{
        int hours;
        int minutes;
        int seconds;
    } time;
    time t;
    time *pt;
    pt=&t;
    t.hours=60;
    pt->minutes=12;
    (*pt).seconds=45;
    return 0;
}