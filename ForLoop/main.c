//
//  main.c
//  ForLoop
//
//  Created by Shio on 23/07/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int number;
    
    printf("enter any number:> ");
    scanf("%d" , &number);
    
    for(int i=1;i<=10;i++){
        printf("%d\n", i*number);
    }
    
    return 0;
}
