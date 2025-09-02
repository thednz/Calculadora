#include <stdio.h>
#include <math.h>

void sumSubs()
{
    int num01, num02;
    printf("Choose a number for Sum and Subtraction\n");
    printf("first number 01;\n");
    scanf(" %d", &num01);
    printf("second number 02;\n");
    scanf(" %d", &num02);

    // hour output function;

    printf("Your sum is %d\n", num01 + num02);
    printf("Your substraction is %d\n", num01 - num02);
    system("pause");
    system("cls");
}
void multDivi()
{
    int num01, num02;
    printf("Choose a number for Multiplication and Division\n");
    printf("first number 01;\n");
    scanf(" %d", &num01);
    printf("second number 02;\n");
    scanf(" %d", &num02);

    // hour output function;

    printf("Your multiplication is %d\n", num01 * num02);
    printf("Your substraction is %d\n", num01 / num02);
    system("pause");
    system("cls");
}
void raizSqua()
{

    double square, result;
    printf("Write a number that you want make raiz his>_<\n");
    printf("and now, write about a number for square.\n");
    scanf(" %lf", &square);
    result = sqrt(square);
    printf("The square root of %.2f is %.2f\n", square, result);

    system("pause");
    system("cls");
}

int main()
{
    int input, continuar = 1;

    while (continuar)
    {

        printf("Choose somethings numbers of this menu full of Counts\n");
        printf("1 - Sum/Substration\n");
        printf("2 - Multiplication/Division\n");
        printf("3 - Raiz/Square\n");
        printf("0 - Exit\n");

        scanf(" %d", &input);

        switch (input)
        {
        case 0:
            continuar = 0;
            break;
        case 1:
            sumSubs();

            break;
        case 2:
            multDivi();
            break;
        case 3:
            raizSqua();
            break;
        default:
            printf("Invalid Key\n");
            system("pause");
            system("cls");
            break;
        }
    }
    return 0;
}