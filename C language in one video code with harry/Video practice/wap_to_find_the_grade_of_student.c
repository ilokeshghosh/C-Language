#include <stdio.h>
int main()
{
    int g;
    printf("Enter the grade :\n");
    scanf("%d", &g);

    switch (g <=100)
    {
    case 1:
        switch (g >= 90)
        {
        case 1:
            printf("Grade is a");
            break;
        }
    }
    switch (g <= 89)
    {
    case 1:
        switch (g >= 80)
        {
        case 1:
            printf("Grade is B");
            break;
        }
    }
    switch (g <= 79)
    {
    case 1:
        switch (g >= 70)
        {
        case 1:
            printf("Grade is C");
            break;
        }
    }
    switch (g <= 69)
    {
    case 1:
        switch (g >= 60)
        {
        case 1:
            printf("Grade is D");
            break;
        }
    }
    switch (g <= 59)
    {
    case 1:

        printf("Grade is E");
        break;
    }
    return 0;
}