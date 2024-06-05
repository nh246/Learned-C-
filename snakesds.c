#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

// Define the dimensions of the game board
#define WIDTH 50
#define HEIGHT 25

// Define the directions
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

// Define the snake structure
typedef struct {
    int x;
    int y;
} SnakeSegment;

SnakeSegment snake[100];
int snakeLength = 1;
int direction = RIGHT;
int foodX, foodY;
int gameOver = 0;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawBoard() {
    system("cls");
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void drawSnake() {
    for (int i = 0; i < snakeLength; i++) {
        gotoxy(snake[i].x, snake[i].y);
        printf("O");
    }
}

void generateFood() {
    foodX = rand() % (WIDTH - 2) + 1;
    foodY = rand() % (HEIGHT - 2) + 1;
    gotoxy(foodX, foodY);
    printf("F");
}

void moveSnake() {
    for (int i = snakeLength - 1; i > 0; i--) {
        snake[i] = snake[i - 1];
    }

    switch (direction) {
        case UP:
            snake[0].y--;
            break;
        case DOWN:
            snake[0].y++;
            break;
        case LEFT:
            snake[0].x--;
            break;
        case RIGHT:
            snake[0].x++;
            break;
    }
}

void checkCollision() {
    if (snake[0].x == 0 || snake[0].x == WIDTH - 1 || snake[0].y == 0 || snake[0].y == HEIGHT - 1) {
        gameOver = 1;
    }

    for (int i = 1; i < snakeLength; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
            gameOver = 1;
        }
    }

    if (snake[0].x == foodX && snake[0].y == foodY) {
        snakeLength++;
        generateFood();
    }
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'w':
                direction = UP;
                break;
            case 's':
                direction = DOWN;
                break;
            case 'a':
                direction = LEFT;
                break;
            case 'd':
                direction = RIGHT;
                break;
        }
    }
}

int main() {
    snake[0].x = WIDTH / 2;
    snake[0].y = HEIGHT / 2;
    generateFood();

    while (!gameOver) {
        drawBoard();
        drawSnake();
        input();
        moveSnake();
        checkCollision();
        Sleep(100);
    }

    gotoxy(WIDTH / 2 - 5, HEIGHT / 2);
    printf("GAME OVER");

    return 0;
}
