#include <stdio.h>
#include <cs50.h>

int main(void) {
    //user response used to populate height of mario pyramid

    int response = get_int("Height:");

    if(response>0 && response<9) {
        //outside loop used to control height of the pyramid using user input
        for(int i=0;i<response;i++) {
            //first width loop used to iterate blanks
            for(int b=0;b<response-i-1;b++) {
                if(b<=response-i-1) {
                    printf(" ");
                }
            }
            //the second loop used to populate mario blocks
            for(int j=0;j<response;j++){
                if(j<=i) {
                    printf("#");
                }
            }

            printf("\n");
        }
    } else {
        response = get_int("Height:");
    }
    return 0;
}