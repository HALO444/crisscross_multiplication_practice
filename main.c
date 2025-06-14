#include <stdio.h>

void digits();

int main(void)
{
  digits();
}

void digits()
{
    int user_input;
    printf("How many digits(2by2 or 3by3) : ");
    scanf("%d", &user_input);
    if (user_input > 3)
    {
        digits();
    }

}