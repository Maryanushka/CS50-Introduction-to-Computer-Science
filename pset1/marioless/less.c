#include <cs50.h>
#include <stdio.h>


int main() {
    int i, j, rows;

    while(true){
        rows = get_int("Height: ");

        if(rows >= 0 && rows <=23){

              for(i = 1; i <= rows; i++){
                for(j = 1; j <= rows+1; j++){
                    if(j <= rows-i){
                        printf(" ");
                    } else {
                           printf("#");
                    }
                }
                printf("\n");
            }
            break;
        }
    }

    return 0;
}
