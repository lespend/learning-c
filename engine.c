#include <stdio.h>
#include <math.h>
#include <winuser.h>
#include <stdbool.h>

int main() {
    int width = 120;
    int height = 30;
    float ratio = (float)width / height;
    float pixelRatio = 8.0f / 16.0f;
    char screen[width * height + 1];
    screen[width * height] = '\0';
    
    float dx = 0.0f;
    float dy = 0.0f;

   while(1) {
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;
                x *= ratio * pixelRatio;
                char pixel = ' ';
                if (x * x + y * y < 0.1) pixel = '/';
                screen[i + j * width] = pixel;
            }
        }

        float speed = 0.001f;
        bool isPressed = false;
        if (GetAsyncKeyState((unsigned short)'A') & 0x8000) {
            dx += speed;
        }
        if (GetAsyncKeyState((unsigned short)'D') & 0x8000) {
            dx -= speed;
        }
        if (GetAsyncKeyState((unsigned short)'W') & 0x8000) {
            dy += speed;
        }
        if (GetAsyncKeyState((unsigned short)'S') & 0x8000) {
            dy -= speed;
        }
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;
                x *= ratio * pixelRatio;
                x += dx;
                y += dy;
                char pixel = screen[i + j * width];
                if (x * x + y * y < 0.05) pixel = '$';
                screen[i + j * width] = pixel;
            }
        }
        printf(screen);
    }
    return 0;
}