#include<stdio.h>


int main() {
    char start = 'A';
    char end = 'Z';

    for (char ch = start; ch <= end; ch++) {
        if ((int)ch < 75) {
            printf("Character: %c, ASCII Value: %d (Less than 75)\n", ch, (int)ch);
        } else {
            printf("Character: %c, ASCII Value: %d (Greater than or equal to 75)\n", ch, (int)ch);
        }
    }

    return 0;
}


