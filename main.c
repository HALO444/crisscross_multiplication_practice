#include <stdio.h>

int digits(void);

int main(void)
{
  digits();
}

int digits(void)
{
    int user_input;
    printf("How many digits(2by2 or 3by3) : ");
    scanf("%d", &user_input);
    if (user_input >= 3 || user_input <= 0)
    {
        digits();
    }
    make_number(user_input);
}

void make_number(int user_input)
{

}