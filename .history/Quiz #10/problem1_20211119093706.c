#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {

    FILE *fp = fopen("numbers.txt" , "w");
    
    int evenNums[8];
    int curr;
    int count = 0;
    int i = 0; 

    fscanf(fp, "%d %d %d %d %d %d %d %d");
    fclose(fp);



}