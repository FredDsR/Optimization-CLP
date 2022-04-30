#include <stdio.h>
#include <time.h>
#include <math.h>

float dist(float x, float y) {
    float result = 0.0;
    result = sqrtf(x*x + y*y);
    return result;
}

int main(int argc, char const *argv[]) {
    clock_t time;
    float x = 3.0, y = 4.0, s = 0.0; 
    int trials = 10, loops = 1000000000;
    double total_time_taken = 0.0;
    
    for (int j = 0; j < trials; j++)
    {
        time = clock();
        for (int i = 0; i < loops; i++)
        {
            s = dist(x, y);
        }
        time = clock() - time;
        total_time_taken += ((double)time)/CLOCKS_PER_SEC;
    }
    printf("Case 1 | Poor | Time: %lfs\n", total_time_taken/trials);
    
    return 0;
}