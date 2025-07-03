#include <cs50.h>
#include <stdio.h>

int calculate_nickels(int cents);
int calculate_pennies(int cents);
int calculate_dimes(int cents);
int calculate_quaters(int cents);
int main(void)
{
    int cents, quaters, dimes, pennies, nickels;
    do
    {
        cents = get_int("enter money owed : ");
    }

    while (cents < 0);

    int quarters = calculate_quaters(cents);
    cents -= quarters * 25;

    dimes = calculate_dimes(cents);
    cents -= dimes * 10;

    nickels = calculate_nickels(cents);
    cents -= nickels * 5;

    pennies = calculate_pennies(cents);
    cents -= pennies * 1;

    int coins = quarters + dimes + nickels + pennies;
    printf("Take, %i coin(s)\n", coins);

    return 0;
}

int calculate_quaters(int cents)
{
    int quaters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quaters++;
    }
    return quaters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}
int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return nickels;
}
int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}
