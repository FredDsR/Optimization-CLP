#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    clock_t time;
    int x = 3, y = 4, z = 5, s1 = 0, s2 = 0; 
    int trials = 10, loops = 1000000000;
    double total_time_taken = 0.0;
    
    for (int j = 0; j < trials; j++)
    {
        time = clock();
        for (int i = 0; i < loops; i++)
        {
            s1 = x + y + z;
            s2 = x + y - z;
        }
        time = clock() - time;
        total_time_taken += ((double)time)/CLOCKS_PER_SEC;
    }
    printf("Case 1 | Poor | Time: %lfs\n", total_time_taken/trials);
    
    return 0;
}