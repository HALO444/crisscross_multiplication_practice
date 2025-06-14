#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int digits(void);
void make_number(int user_input);



int main(void)
{
  srand(time(NULL));
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
    if (user_input == 2)
    {
        do
        {
            int num1 = rand() % 99 + 11;
            int num2 = rand() % 99 + 11;
            printf("What is %d + %d : ", num1,num2);
            int user_awnser;
            scanf("%d",&user_awnser);
            printf("\n");
            if (user_awnser == num1 * num2)
            {
                printf("Correct ✅ \n");
            }
            else{
                printf("Wrong ❌. Awnser is %d \n", num1*num2);
            }
        } while (1);
        
    }
}