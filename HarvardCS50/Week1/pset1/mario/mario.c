#include <stdio.h>
#include <cs50.h>
int inversePyramid(int response);
int main(void) {
    //user response used to populate height of mario pyramid  
    int response = get_int("Height: ");
    
    if(response>0 && response<9) {
        inversePyramid(response);
    } else {
        inverseyPyramid(response);
    }
    return 0;
}

int inversePyramid(int response) {
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
}