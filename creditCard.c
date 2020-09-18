#include <stdio.h>
#include <cs50.h>

/*  The point of this program is to validate whether a credit card's number is valid or not.
    When running the program, user will be prompt to enter a long number,
    the program then separates each digit starting with the first then skipping a place repeatedly,
    it will do this for the seconds place aswell.
    The seconds place skipper then multiplies its numbers by 2 then runs 2 "for" loops to further
    separate each individual digit so they can be summed together to be then added with the first place sum.
    
    The question I have is: How do I store each value that results from a "for" loop?
                            Do I have to use some king of list that can then be added with other lists?*/

int main(void)
{
    long card_number = get_long("Credit Card Number: ");
    
    long n;
    int y;
    int j;
    int k;
    int g;
    int o;
    int CheckSum;
    
    printf("First Place & Skipping: ");
    for(long place_first=1; place_first < card_number; place_first = place_first * 100)
    {
        n = (card_number / place_first) % 10;
        printf("%ld, ",n);
        
    }
    printf("\n");
    
    printf("Digits of Seconds Place Skipping:");
    for(long place_second=10; place_second < card_number; place_second = place_second * 100)
    {
        y = (card_number / place_second) % 10;
        j = (y * 2);
        
        for(int a = 1; a < j; a = a * 100)
        {
            g = (j / a) % 10;
            printf("%i, ",g);
        }
        for(int b = 10; b < j; b = b * 100)
        {
            o = (j / b) % 10;
            printf("%i, ",o);
        }
        
    }
    
    printf("\n");
    
    printf("CheckSum: %ld,%i,%i\n",n,o,g);
}
