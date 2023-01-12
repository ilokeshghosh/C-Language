#include <stdio.h>
void km_to_m(float n)
{
    float b;
    printf("Enter the number you want to convert into meter\n");
    scanf("%f", &n);
    b = n * 1000;
    printf("%.2f km in m is %.2f\n", n, b);
}
void inch_to_foot(float n)
{
    float f;
    printf("Enter the number you want to convert into foot\n");
    scanf("%f", &n);
    f = n * 12;
    printf("%.2f inch in foot is %.2f\n", n, f);
}
void cm_to_inch(float n)
{
    float f;
    printf("Enter the number you want to convert into inch\n");
    scanf("%f", &n);
    f = n / 2.57;
    printf("%f cm into inches is %f\n", n, f);
}
void pound_to_kg(float n)
{
    float f;
    printf("Enter the number you want to convert into kg\n");
    scanf("%float", &n);
    f = n * 0.459592;
    printf("%f pound in kg is %f\n", n, f);
}
void inch_to_meter(float n)
{
    float f;
    printf("Enter the number you want to convert into meter\n");
    scanf("%f", &n);
    f = n * 0.0254;
    printf("%f inches in meter is %f\n", n, f);
}

int main()
{
    int a, i = 1, v, q;

    while (i < 11)
    {
        printf("\n\nOPTIONS:\n1. km to m\n2. inchs to foot\n3. cm to inches\n4. pound to kg\n5. inches to meter.\nEnter any number corrosponding to given numbers\nEnter q to quit\n");
        scanf("%d%c", &a, &v);
        i++;
        if (a == 1)
        {
            km_to_m(a);
        }
        else if (a == 2)
        {
            inch_to_foot(a);
        }
        else if (a == 3)
        {
            cm_to_inch(a);
        }
        else if (a == 4)
        {
            pound_to_kg(a);
        }
        else if (a == 5)
        {
            inch_to_meter(a);
        }
        else if (a == q)
        {
            goto end;
        }

        else
        {
            printf("\nErrorrr!!!!!!!!!!!\n");
        }
    }

end:
    printf("\nYou have quited :)");
}