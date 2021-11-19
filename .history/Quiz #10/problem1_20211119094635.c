#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {

    FILE *fp = fopen("numbers.txt" , "w");
    
    int evenNums[8];
    int curr;
    int count = 0;
    int i = 0; 

    fprintf(fp, "12 7 3 0 28 74 37 299");
    fclose(fp);

    fopen("numbers.txt", "r");

    for (i = 0; i < 8; i++) {
        fscanf(fp, "%d", evenNums[i]);
    }
    
    fclose(fp);

    for(i = 0; i < 8; i++) {
        if (evenNums[i] % 2 == 0) {
            printf("%d ", *evenNums[i]);
        }
    }

    return 0;


}