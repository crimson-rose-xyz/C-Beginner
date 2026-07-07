#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define red "\033[31m"
#define green "\033[32m"
#define blue "\033[34m"
#define reset "\033[0m"

void ui();
void ui2();
int opt, cpu, rounds;
int count = 1, draw = 0, won = 0, defeat = 0;

int main()
{
    ui2();
    printf("Total Rounds : ");
    scanf("%d", &rounds);
    system ("cls");
    ui();

    while (count <= rounds)
    {
        printf("Ready, steady, go! : ");
        scanf("%d", &opt);
        system ("cls");
        srand(time(NULL));
        cpu = rand() % 3 + 1;
        if (opt > 3 || opt < 1)
        {
            ui();
            printf(red "Invaild Input, Try Again\n\n" reset);
        }
        else if (opt == 1 && cpu == 2)
        {
            count++;
            defeat++;
            ui();
            printf("Player : Rock\n");
            printf("CPU : Paper\n\n");
            printf(red "CPU WON\n\n" reset);
        }
        else if (opt == 1 && cpu == 3)
        {
            count++;
            won++;
            ui();
            printf("Player : Rock\n");
            printf("CPU : Scissors\n\n");
            printf(blue "Player WON\n\n" reset);
        }
        else if (opt == 2 && cpu == 1)
        {
            count++;
            won++;
            ui();
            printf("Player : Paper\n");
            printf("CPU : Rock\n\n");
            printf(blue "Player WON\n\n" reset);
        }
        else if (opt == 2 && cpu == 3)
        {
            count++;
            defeat++;
            ui();
            printf("Player : Paper\n");
            printf("CPU : Scissors\n\n");
            printf(red "CPU WON\n\n" reset);
        }
        else if (opt == 3 && cpu == 1)
        {
            count++;
            defeat++;
            ui();
            printf("Player : Scissors\n");
            printf("CPU : Rock\n\n");
            printf(red "CPU WON\n\n" reset);
        }
        else if (opt == 3 && cpu == 2)
        {
            count++;
            won++;
            ui();
            printf("Player : Scissors\n");
            printf("CPU : Paper\n\n");
            printf(blue "Player WON\n\n" reset);
        }
        else
        {
            count++;
            draw++;
            ui();
            printf(green "Draw\n\n" reset);
        }
    }
    
    system ("cls");
    count--;
    if (won > defeat)
    {
        ui();
        printf(blue "WON!!!" reset);
    }
    else if (defeat > won)
    {
        ui();
        printf(red "DEFEATED!!!" reset);
    }
    else
    {
        ui();
        printf(green "MATCH DRAW!!!" reset);
    }
    return 0;
}

void ui()
{
    printf("=================================\n");
    printf("====== Rock Paper Scissors ======\n");
    printf("=================================\n");
    printf("(1) Rock (2) Paper (3) Scissors\n\n");

    printf(":::::: Status Bar ::::::\n\n");
    
    printf("Current Round : %d / %d\n", count, rounds);
    printf("Won : %d\n", won);
    printf("Defeated : %d\n", defeat);
    printf("Draw : %d\n\n", draw);
}

void ui2()
{
    printf("=================================\n");
    printf("====== Rock Paper Scissors ======\n");
    printf("=================================\n");
    printf("(1) Rock (2) Paper (3) Scissors\n\n");
    
    printf(":::::: Status Bar ::::::\n\n");
}