//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>

  int main() {
        int num, large = 0, rem = 0;

//         get the input from the user 
        printf("Enter any Number:");
        scanf("%d", &num);

//        finding the largest digit of the given input 
        while (num > 0) {
                rem = num % 10;

                if (rem > large) {
                        large = rem;
                }

                num = num / 10;
        }

//         print the largest digit of the number 
        
		printf("Largest digit of the given number is = %d\n", large);
        return 0;
  }