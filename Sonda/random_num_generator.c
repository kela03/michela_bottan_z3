#include <stdio.h>
#include <stdlib.h>

int main(){
int seed = 17;
srand(seed);
for(int i = 0; i < 25; i++){
    printf("%d\n", rand());
}
}

    