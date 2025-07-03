#include <cs50.h>
#include <stdio.h>
int main(void)
{
    {
        printf("Hello , world \n");
    }
    {
        string name = get_string("what is your name ? ");
        printf("Hello, %s\n", name);
    }
}
