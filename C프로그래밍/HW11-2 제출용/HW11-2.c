#include <stdio.h>
#define SIZE 5
#define MAX_PIXEL_VALUE 255

// function prototypes
void print_image(int* img, int xsize, int ysize);	
void brighten_image(int* img, int xsize, int ysize); 

void print_image(int* img, int xsize, int ysize) {
    for (int y = 0; y < ysize; y++) {
        for (int x = 0; x < xsize; x++) {
            printf("%d ", *(img + y * xsize + x));
        }
        printf("\n");
    }
    printf("\n");
}

void brighten_image(int* img, int xsize, int ysize) {
    for (int y = 0; y < ysize; y++) {
        for (int x = 0; x < xsize; x++) {
            int pixel_value = *(img + y * xsize + x) + 10;
            if (pixel_value > MAX_PIXEL_VALUE) {
                pixel_value = MAX_PIXEL_VALUE;
            }
            *(img + y * xsize + x) = pixel_value;
        }
    }
}

int main(void) {
    int image[SIZE][SIZE] = {
        { 10, 120, 130, 240, 250},
        { 10, 120, 130, 240, 250},
        { 10, 120, 130, 240, 250},
        { 10, 120, 130, 240, 250},
        { 10, 120, 130, 240, 250}
    };

    print_image((int*)image, SIZE, SIZE);
    brighten_image((int*)image, SIZE, SIZE);
    print_image((int*)image, SIZE, SIZE);

    return 0;
}