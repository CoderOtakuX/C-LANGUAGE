/* PROGRAM TO PRINT HELLO WORLD

#include <stdio.h>
int main (){.
    printf("HELLO WORLD");
} */ ...

/*PROGRAM TO CHECK WHETHER THE NUMBER IS ODD OR EVEN  

#include <stdio.h>
int main() {
    int no;
    printf("ENTER ANY NUMBER");
    scanf("%d", &no);
    if (no % 2 == 0) {
        printf("%d is EVEN", no);
    } else {
        printf("%d is ODD", no);
    }
} */

/*PROGRAM TO FIND THE LARGEST OF THE THREE NUMBER  

 #include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.", num2);
    }
    else {
        printf("%d is the largest number.", num3);
    }

    return 0;
} */

/*PROGRAM FOR GRADING SYSTEM OF A STUDENT  

#include <stdio.h>

int main() {
    int num;

    printf("enter your marks");
    scanf("%d", &num);

    if (num >= 90) {
        printf("O");
    }
    else if (num >= 80 && num <=89) {
        printf("A+");
    }
    else if (num >= 70 && num <=79) {
        printf("A");
    }
    else if (num >= 60 && num <=69) {
        printf("B");
    }
    else if (num >= 50 && num <=59) {
        printf("C");
    }
    else if (num >= 40 && num <=49) {
        printf("D");
    }
    else {
        printf("Fail");
    }
} */

/* PROGRAM TO CHECK WHETHER THE YEAR IS LEAP YEAR OR NOT 

 #include <stdio.h>

int main() {
    int num;

    printf("enter any year to check");
    scanf("%d", &num);

    if (num % 4 == 0) {
        printf("%d is a leap year", num);
    }
    else {
        printf("%d is not a leap year", num);
    }
} */

/*PROGRAM TO FIND THE ROOTS OF A QUADRATIC EQUATION 

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        root1=(-b + sqrt(discriminant)) / (2*a);
        root2=(-b - sqrt(discriminant)) / (2*a);
        printf("ROOTS ARE REAL AND DIFFERENT = \n");
        printf("ROOT 1 = %d \n ",root1);
        printf("ROOT 2 = %d \n ",root2);
    }
    else if (discriminant == 0) {
        float realPart= -b / (2*a);
        printf("ROOT IS REAL AND SAME \n");
        printf("ROOT1 AND ROOT2 ARE SAME = %d\n",realPart);
    }
    else {
        float realPart = -b / (2*a);
        printf("ROOT IS COMPLEX AND DIFFERENT");
        printf("ROOT 1 = %d + %d \n ", realPart, imaginaryPart);
        printf("ROOT 2 = %d - %d \n ", realPart, imaginaryPart);
    }
} */
