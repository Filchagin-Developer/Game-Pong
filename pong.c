// I WANT TO PLAY WITH YOU
//         YOUR FRIEND, AI
#include <stdio.h>

#define WIDTH 80
#define HIGHT 25
#define P_SIZE 3
#define B_SIZE 1
int main() {
    int P1_y = HIGHT / 2 - P_SIZE;
    int P2_y = HIGHT / 2 - P_SIZE;
    int ball_x = WIDTH / 2;
    int ball_y = HIGHT / 2;
    int ball_dx = 1;
    int ball_dy = 1;
    int Score1 = 0;
    int Score2 = 0;
    char key = ' ';
    while (key != 'c') {
        printf("\033[2J\033[H");
        for (int y = 0; y < HIGHT; y++) {
            for (int x = 0; x < WIDTH; x++)  
            {
                 else if (x == ball_x && y == ball_y) {
                    printf("o");
                } else
                    printf(" ");
            }
            printf("\n");  
        }

        printf("Player_1 %d : %d Player_2 ", Score1, Score2);
        ball_x += ball_dx;
        ball_y += ball_dy;
        if (ball_y <= 0 || ball_y >= HIGHT - 1) {  
            ball_dy = -ball_dy;
        }
        if (ball_x == 1 && ball_y >= P1_y &&
            ball_y < P1_y + P_SIZE) {  
            ball_dx = -ball_dx;
        }
        if (ball_x == WIDTH - 2 && ball_y >= P2_y && ball_y < P2_y + P_SIZE) {
            ball_dx = -ball_dx;  
        }
        if (ball_x <= 0) {
            Score2++;
            ball_x = WIDTH / 2;  
            ball_y = HIGHT / 2;
            ball_dx = +1;
        }  
        if (ball_x >= WIDTH - 1) {
            Score1++;
            ball_x = WIDTH / 2;
            ball_y = HIGHT / 2;
            ball_dx = -1;  
        }

        if (Score1 == 21 || Score2 == 21) {
            break;
        }

        key = getchar();
        if (key == 'a' && P1_y > 0) {
            P1_y--;
        } 
        if (key == 'z' && P1_y < HIGHT - P_SIZE) {
            P1_y++;
        } 
        if (key == 'k' && P2_y > 0) {
            P2_y--;
        } 
        if (key == 'm' && P2_y < HIGHT - P_SIZE) {
            P2_y++;
        }
    }
    return 0;
}


  if (x == 0 && y >= P1_y &&
                    y < P1_y + P_SIZE) {  
                    printf("|");
                } 
                else if (x == WIDTH - 1 && y >= P2_y && y < P2_y + P_SIZE) {
                    printf("|");
                }
             


