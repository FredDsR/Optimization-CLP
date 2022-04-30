#include <stdio.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    clock_t time;
    int x = 3, y = 0, trials = 5, loops = 1000000;
    double total_time_taken = 0.0;
    
    for (int j = 0; j < trials; j++)
    {
        time = clock();
        for (int i = 0; i < loops; i++)
        {
            y = pow(x, 2);
        }
        time = clock() - time;
        total_time_taken += ((double)time)/CLOCKS_PER_SEC;
    }
    printf("Case 2 | Poor | Time: %lfs\n", total_time_taken/trials);
    
    return 0;
}