#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {

    FILE *fp = fopen("numbers.txt" , "w");
    int *evenNums = malloc(8 * sizeof(int)); // or int evenNums[8];
    int curr;
    int count = 0;
    int i = 0; 

    fscanf(fp, "%d %d %d %d %d %d %d", 12, 7, 3, 0, 28, 74, 37, 299,)
    fclose(fp);

}