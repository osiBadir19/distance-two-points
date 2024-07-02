#include <stdio.h>
#include <math.h>


int square (int N){
    return N * N;
}


int main(){
    int x1, x2, y1, y2;     
    float d;            //d for distance     

    printf("please enter x1, y1, x2, y2 (one by one):");
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    d = sqrt(square(x2 - x1) + square(y2 - y1));

    printf("distance is: %f\n", d);

    // end program
    return 0;

}
