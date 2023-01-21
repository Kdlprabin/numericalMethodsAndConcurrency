#include <stdio.h>
#include "lodepng.h"

int main(){
	unsigned char *img;
	unsigned int array;
	unsigned int w,h;
	array = lodepng_decode32_file(&img,&w,&h,"image.png");
	int i;
	for(i =0; i<h*w*4; i+=4){
		img[i] = 255-img[i];
		img[i+1] = 255 - img[i+1];
		img[i+2] = 255 - img[i+2];
	}
	lodepng_encode32_file("image.png",img,w,h);
	return 0;
}
