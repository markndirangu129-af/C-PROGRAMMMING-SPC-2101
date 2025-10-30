/*
NAME:KIRUHI MARK
REG NO.PA106/G/28727/25
DESCRIPTION:ROOM OCCUPACY CODE 3D ARRAY 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int b, f, r;
    int occupiedCount = 0, vacantCount = 0;

    srand(time(0)); 

    for (b = 0; b < 3; b++) {
        for (f = 0; f < 5; f++) {
            for (r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
            }
        }
    }

    for (b = 0; b < 3; b++) {
        printf("\nBranch %d:\n", b + 1);
        for (f = 0; f < 5; f++) {
            printf("  Floor %d: ", f + 1);
            for (r = 0; r < 10; r++) {
                printf("%d ", chain[b][f][r]);
                if (chain[b][f][r] == 1)
                    occupiedCount++;
                else
                    vacantCount++;
            }
            printf("\n");
        }
    }

    // Step 3: Display total summary
    printf("\nTotal occupied rooms across all branches: %d\n", occupiedCount);
    printf("Total vacant rooms across all branches: %d\n", vacantCount);

    return 0;
}
