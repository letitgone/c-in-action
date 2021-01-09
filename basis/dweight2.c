/**
 * @Author ZhangGJ
 * @Date 2020/12/27 21:06
 */

#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cublic inches): %d\n", volume);
    printf("Dismensional weight (pounds): %d\n", weight);
    return 0;
}