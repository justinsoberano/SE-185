#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int malelowAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 25) {
        return 4;
    } else if (BFP > 19.01 && BFP < 25) { 
        return 5;
    } else if (BFP <= 19) {
        return 6;
    }

}

int malemedAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 28) {
        return 4;
    } else if (BFP > 22.01 && BFP < 28) { 
        return 5;
    } else if (BFP <= 22) {
        return 6;
    }

}

int malehighAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 30) {
        return 4;
    } else if (BFP > 25.01 && BFP < 30) { 
        return 5;
    } else if (BFP <= 25) {
        return 6;
    }

}

int femalelowAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 39) {
        return 4;
    } else if (BFP > 33.01 && BFP < 39) { 
        return 5;
    } else if (BFP <= 33) {
        return 6;
    }

}

int femalemedAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 40) {
        return 4;
    } else if (BFP > 35.01 && BFP < 40) { 
        return 5;
    } else if (BFP <= 35) {
        return 6;
    }

}

int femalehighAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 42) {
        return 4;
    } else if (BFP > 36.01 && BFP < 42) { 
        return 5;
    } else if (BFP <= 36) {
        return 6;
    }

}

int main() {

    int age;
    int gender;
    double height;
    double weight;
    double BMI;
    int 

    printf("Enter your age: ");
    scanf("%d", &age);
        if (age < 20 ) {
            printf("You are not old enough to take this test.\n");
            exit(0);
        } else if (age > 79) {
            printf("\n\nWARNING: You may not get an accurate BMI\n\n");
        }
    printf("Enter your height in meters (m)\n");
    scanf("%lf", &height);

    printf("Enter your weight in kilograms (kg)\n");
    scanf("%lf", &weight);

    printf("0 - Female\n 1 - Male\n ");
    printf("What is your gender?\n");
    scanf("%d", &gender);

    if (age >= 20 && age <= 39 && gender == 0) {
        BMI = femalelowAge(age, gender, height, weight);
    } else if ( age >= 40 && age <= 59 && gender == 0) {
        BMI = femalemedAge(age, gender, height, weight);
    } else if ( age >= 60 && gender == 0) {
        BMI = femalehighAge(age, gender, height, weight);
    } else if (age >= 20 && age <= 39 && gender == 1) {
        BMI = malelowAge(age, gender, height, weight);
    } else if ( age >= 40 && age <= 59 && gender == 1) {
        BMI = malemedAge(age, gender, height, weight);
    } else if ( age >= 60 && gender == 1) {
        BMI = malehighAge(age, gender, height, weight);
    } 

    if (BMI == 4) {
        printf("You body fat percentage is HIGH.\n");
        printf("Your health may be at risk. Seek advice from a GP.\n");
    } else if (BMI == 5) {
        printf("Your bidy fat percentage is ABOVE AVERAGE.\n"); 
        printf("Make an honest assessment of your diet and excercise levels.\n");
    } else if (BMI == 6) {
        printf("Your body fat percentage is NORMAL.\n");
        printf("Maintain healthy diet and exerside regime.\n");
    }

    return 0;

}