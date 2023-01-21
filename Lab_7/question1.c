#include <stdio.h>
#include "lodepng.h"

int main() {
    unsigned char *img;
    unsigned w, h;
    int error= lodepng_decode32_file(&img, &w, &h, "image.png");
    if (error)
        printf("Error: %s\n", lodepng_error_text(error));
    else {
    	int i;
        for (i = 0; i < w * h * 4; i += 4) {
            int avg = (img[i] + img[i + 1] + img[i + 2]) / 3;
            img[i] = avg;
			img[i + 1] = avg;
			img[i + 2] = avg;
        }
        lodepng_encode32_file("gray_image.png", img, w, h);
    }
}

