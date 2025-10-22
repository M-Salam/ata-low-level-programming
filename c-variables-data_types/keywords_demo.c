#include <stdio.h>

/**
 * main - the main function
 * description: This program demonstrates some C keywords
 * return: 0
*/

int main() {
    const int limit = 1;   // const = keyword (value cannot change), int = keyword (integer type)
    
    if (limit == 1) {      // if = keyword (conditional check)
        for (int i = 0; i < limit; i++) {   // for = keyword (loop)
            printf("Keywords are powerful\n");
        }
    }

    return 0;   // return = keyword (end the program successfully)
}
