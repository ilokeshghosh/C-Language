#include <stdio.h>
int main()
{
    char q;
    char input;
    float KTM = 0.621371;
    float ITF = 0.0833333;
    float CTI = 0.393701;
    float PTK = 0.453592;
    float ITM = 0.0254;
    float f, s;
    while (1)
    {
        printf("\n\nOPTIONS:\n1. km to meter\n2. inchs to foot\n3. cm to inches\n4. pound to kg\n5. inches to meter.\nEnter any number corrosponding to given numbers\n");
        scanf(" %c", &input);
        switch (input)
        {

        case 'q':
            printf("You are quitted the programm");
            goto end;
            break;
        case '1':
            printf("Enter the number you want to convert in meter:\n");
            scanf("%f", &f);
            s = f * KTM;
            printf("%.3fkm in m is %.3f ", f, s);
            break;
        case '2':
            printf("Enter the number you want to convert in foot:\n");
            scanf("%f", &f);
            s = f * ITF;
            printf("%.3finch in foot is %.3f", f, s);
            break;
        case '3':
            printf("Enter the number you want to convert in inches:\n");
            scanf("%f", &f);
            s = f * CTI;
            printf("%.3fcm in inches is %.3f", f, s);
            break;
        case '4':
            printf("Enter the number you want to convert in kgs:\n");
            scanf("%f", &f);
            s = f * PTK;
            printf("%.3fpound in kgs is %.3f", f, s);
            break;
        case '5':
            printf("Enter the number you want to convert in meter:\n");
            scanf("%f", &f);
            s = f * ITM;
            printf("%.3fcm in inches is %.3f", f, s);
            break;
        default:
            printf("In default now");
            break;
        }
    }


}
end;
return 0;
