#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    double examScore1;
    double examScore2;
    double examScore3;
};

double examAverage(double exam1, double exam2, double exam3);

int main () {

    FILE* studentExam;
    studentExam = fopen("student_data.txt", "w");
    struct student record[4];
    double studentExamAverage;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Enter student %d and three exam scores: ", (i+1));
        scanf("%s %lf %lf %lf", record[i].name, &record[i].examScore1, 
                                &record[i].examScore2, &record[i].examScore3);
        fprintf(studentExam, "%s %lf %lf %lf\n", record[i].name, record[i].examScore1, 
                                                 record[i].examScore2, record[i].examScore3);
    }
    fclose(studentExam);

    studentExam = fopen("student_data.txt", "r");
    for (i = 0; i < 4; i++) {
        fscanf(studentExam, "%s %lf %lf %lf", record[i].name, &record[i].examScore1, 
                                &record[i].examScore2, &record[i].examScore3);
        
        studentExamAverage = examAverage(record[i].examScore1, record[i].examScore2, record[i].examScore3);

        printf("%s exam scores = %.2lf, %.2lf, %.2lf\n", record[i].name, record[i].examScore1, 
                                                         record[i].examScore2, record[i].examScore3);

    }
    
    for (i = 0; i < 4; i++) {
        fscanf(studentExam, "%s %lf %lf %lf", record[i].name, &record[i].examScore1, 
                                &record[i].examScore2, &record[i].examScore3);

        studentExamAverage = examAverage(record[i].examScore1, record[i].examScore2, record[i].examScore3);

        printf("%s exam average = %.2lf\n", record[i].name, studentExamAverage);

    }


}


double examAverage(double exam1, double exam2, double exam3) {

    return ((exam1 + exam2 + exam3) / 3);

}