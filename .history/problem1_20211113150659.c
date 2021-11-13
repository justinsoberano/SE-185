#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    double examScore1;
    double examScore2;
    double examScore3;
};

int main () {

    FILE* studentExam = NULL;
    studentExam = fopen("student_data.txt", "w");
    struct student record[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter student %d and three exam scores: ", (i +1));
        scanf("%s %lf %lf %lf", record[i].name, record[i].examScore1, 
                                record[i].examScore2, record[i].examScore3);
    }




}
