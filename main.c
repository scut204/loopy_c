#include <stdio.h>
#include "loopgen.h"
struct random_state {
    unsigned char seedbuf[40];
    unsigned char databuf[20];
    int pos;
};

#define printX16Array(var) {for (int i = 0; i < sizeof(var); i++) {printf("%02X \t", var[i]);}}

int main(void) {
    printf("Hello, World!\n");
    char *board = snewn(10 * 10, char);
    grid *g = snew(grid);
    random_state *rand = random_new("seed", 4);
    generate_loop(g,board, rand, NULL, NULL);

    return 0;
}
