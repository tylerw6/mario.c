#include <stdio.h>
#include <cs50.h>
 
int main(void)
{   
    // Asks the user for input
    printf("How many steps should mario walk? ");
    // define the neccessary amount of variables for equations to work out    
    int h, s, q;
    h = s = q = GetInt();
    // in case user enters faulty information
    while (0 > h || h > 23)
    {
    printf("height: ");
    h = s = q = GetInt();
    }
     
    {   
        // a space before loops to help alignment 
        // printf(" ");
        // big loop to loop new lines
        while (h > 0)
        {
            // small loop for spaces
           //  for (int c = 0; h - s < c; c--)
             while (s - 1 > 0)
            {
                printf(" ");
                s--;
            }   
            // small incrementing loop using an increasing integer compared to original height minus decrementing height
            for (int i = -1; i <= q - h; i++)
            {
                printf("#");
            }
        // newline after small loops insid of big loop
        printf("\n");
        // reinitialize variable s to h for small loop 1
        h--;
        s = h;
        } 
    }   
}
