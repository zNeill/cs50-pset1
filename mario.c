#include <stdio.h>
#include <cs50.h>

int main(void)
{

int ht;
    do{
    printf("Height:");
    ht = GetInt();
    }while(ht > 23 || ht < 0); // ensure a valid pyramid height or keep prompting
// printf("The height of the pyramid will be %i\n", ht); Hiding this code to pass cs50 checker but there's really nothing wrong with it BRUH
    for(int r = 0; r < ht; r++) // the for loop that controls each row
    {
    int bashes = r + 2;
    int spaces = ht - 1 - r;
        for(int q = 0; q < spaces; q++) // loop to put in the spaces
        {
            printf(" ");
        }
   
        for(int b = 0; b < bashes; b++) // for loop to make the pound signs or hashes or hashtags (whatever you want to call em)
        {
            printf("#");
        }
        
    printf("\n"); // need this line break to move onto the next row
    }
}