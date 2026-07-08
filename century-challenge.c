#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define red "\033[31m"
#define blue "\033[34m"
#define green "\033[32m"
#define reset "\033[0m"

void ui();
void ui2();
void ui3();

int player_1, player_2, sum = 0;

int main()
{
    system("cls");
    ui3();
    
    while (1)
    {
        printf(red "Player 1: " reset);
        scanf("%d", &player_1);
        
        if (player_1 > 10 || player_1 < 1)
        {
            printf("ERROR\n");
        }
        
        else
        {
            
            sum += player_1;
            while (sum > 100)
            {
                
                printf("ERROR\n");
                sum -= player_1;
                
                while (1)
                {
                    
                    printf(red "Player 1: " reset);
                    scanf("%d", &player_1);
                    
                    if (player_1 > 10 || player_1 < 1)
                    {
                        printf("ERROR\n");
                    }
                    
                    else
                    {
                        sum += player_1;
                        break;
                    }
                }
            }
            
            ui();
            
            if (sum == 100)
            {
                printf(red "\n\t\t   Player 1 Win!!!\n\n" reset);
                return 0;
            }
            
            printf(blue "\t\t\t\t\t  Player 2: " reset);
            scanf("%d", &player_2);
            
            if (player_2 > 10 || player_2 < 1)
            {
                
                printf("\t\t\t\t\t  ERROR\n");
                while (1)
                
                {
                    
                    printf(blue "\t\t\t\t\t  Player 2: " reset);
                    scanf("%d", &player_2);
                    
                    if (player_2 <= 10 && player_2 >= 1)
                    {
                        break;
                    }
                    
                    else
                    {
                        printf("\t\t\t\t\t  ERROR\n");
                    }
                }
            }
            
            sum += player_2;
            
            while (sum > 100)
            {
                
                printf("\t\t\t\t\t  ERROR\n");
                sum -= player_2;
                
                while (1)
                {
                    
                    printf(blue "\t\t\t\t\t  Player 2: " reset);
                    scanf("%d", &player_2);
                    
                    if (player_2 > 10 || player_2 < 1)
                    {
                        printf("\t\t\t\t\t  ERROR\n");
                    }
                    
                    else
                    {
                        sum += player_2;
                        break;
                    }
                }
            }
            
            ui2();
            
            if (sum == 100)
            {
                printf(blue "\n\t\t   Player 2 Win!!!\n\n" reset);
                return 0;
            }
        }
    }
    return 0;
}

void ui()
{
    printf(red "\t\t|         %d         |\n" reset, sum);
    printf("\t\t----------------------\n");
}

void ui2()
{
    printf(blue "\t\t|         %d         |\n" reset, sum);
    printf("\t\t----------------------\n");
}

void ui3()
{
    printf(green "\t   ===============================\n");
    printf("\t   ====== Century Challenge ======\n");
    printf("\t   ===============================\n\n");
    printf("    Pick a number (1-10). First to reach 100 wins.\n\n" reset);
}