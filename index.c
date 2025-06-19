#include <stdio.h>

struct boxes
{
    int legth;
    int height;
    int weight;
};

int main()
{

    struct boxes box[3] = {{2, 3, 4}, {2, 4, 5}, {5, 6, 8}};

    int i, volume;

    for (i = 1; i < 4; i++)
    {
        volume = box[i].legth * box[i].height * box[i].weight;

        printf("Volume %d of box %d is : %d \n", i,i, volume);

    }

    return 0;
}