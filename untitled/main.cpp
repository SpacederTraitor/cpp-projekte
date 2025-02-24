#include <iostream>
#include <conio.h>
#include <vector>
#include <windows.h>

const int width = 20;
const int height = 20;

int playerX = width / 2;
int playerY = height - 1;

std::vector<int> bullets;

void draw() {
    system("cls");
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x == playerX && y == playerY)
                std::cout << "^";
            else {
                bool bulletDrawn = false;
                for (int i = 0; i < bullets.size(); i += 2) {
                    if (bullets[i] == x && bullets[i + 1] == y) {
                        std::cout << "|";
                        bulletDrawn = true;
                    }
                }
                if (!bulletDrawn)
                    std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            if (playerX > 0) playerX--;
            break;
        case 'd':
            if (playerX < width - 1) playerX++;
            break;
        case ' ':
            bullets.push_back(playerX);
            bullets.push_back(playerY - 1);
            break;
        }
    }
}

void logic() {
    for (int i = 1; i < bullets.size(); i += 2) {
        bullets[i]--;
    }
    for (int i = 0; i < bullets.size(); i += 2) {
        if (bullets[i + 1] < 0) {
            bullets.erase(bullets.begin() + i, bullets.begin() + i + 2);
            i -= 2;
        }
    }
}

int main() {
    while (true) {
        draw();
        input();
        logic();
        Sleep(100);
    }
    return 0;
}
