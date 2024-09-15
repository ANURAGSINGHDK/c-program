#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{ 
    int n, d, s, check, r, i, c;
    printf("The Armstrong numbers from 1 to 100 are:");

    for (i = 1; i <= 100; i++)
    {
        r = i;
        check = i;
        c = 0;
        s = 0;

        while (check > 0)  // Use a different variable for counting digits
        {
            check = check / 10;
            c++;
        }

        check = i;  // Reset check to its original value

        while (r > 0)
        {
            d = r % 10;
            s = s + pow(d, c);
            r = r / 10;
        }

        if (s == check)
        {
            printf("%d ", s);
        }
    }

    getch();
}

