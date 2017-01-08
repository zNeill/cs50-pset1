#include <stdio.h>
#include <cs50.h>

int main(void)
{
printf("How long do you spend in the shower? I'll tell you how many bottles of water you are using.\n");
printf("Minutes: ");
int mins = GetInt();
int bottles;
bottles = (mins*192)/16;
printf("Bottles: %i\n", bottles);
}