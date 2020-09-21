#include <cs50.h>
#include <stdio.h>
#include <math.h>

int rounds(double change);
int coins(int value);


int main(void)
{
    
    double change;
    //Loop will prompt the change until the conditions met;
    do
    {
        change = get_float("Change: ");
    }
    while (change <= 0);

    int c = rounds(change);

    printf("%i\n", coins(c));


}

// function rounds the change to intenger;
int rounds(double change)
{

    int cents = round(change * 100);
    return cents;
}

// function checks which coin will be used and home many coins;
int coins(int value)
{

    int coin = value;
    int count = 0;

    while (coin > 0)
    {
        if (coin >= 25)
        {
            count ++;
            coin -= 25;
        }
        else if (coin >= 10 && coin < 25)
        {
            count ++;
            coin -= 10;
        }
        else if (coin >= 5 && coin < 10)
        {
            count++;
            coin -= 5;
        }
        else if (coin >= 1 && coin < 5)
        {
            count++;
            coin -= 1;
        }
    }
    return count;
}

 int target_red = image[i][j].rgbtRed;
            int target_plus_one_red  = image[i][j + 1].rgbtRed ? image[i][j + 1].rgbtRed : 0;
            int target_minus_one_red  = image[i][j - 1].rgbtRed ? image[i][j - 1].rgbtRed : 0;
            int target_row_plus_one_red  = image[i + 1][j].rgbtRed ? image[i + 1][j].rgbtRed : 0;
            int target_row_minus_one_red  = mallocimage[i - 1][j].rgbtRed ? image[i - 1][j].rgbtRed : 0;
            int diagonal_up_plus_one_red  = image[i - 1][j + 1].rgbtRed ? image[i - 1][j + 1].rgbtRed : 0;
            int diagonal_up_minus_one_red  = image[i - 1][j - 1].rgbtRed ? image[i - 1][j - 1].rgbtRed : 0;
            int diagonal_lower_minus_one_red  = image[i + 1][j - 1].rgbtRed ? image[i + 1][j - 1].rgbtRed : 0;
            int diagonal_lower_plus_one_red  = image[i + 1][j + 1].rgbtRed ? image[i + 1][j + 1].rgbtRed : 0;


            if(target_plus_one_red)
            {
                count++;
            }
            else if (target_minus_one_red )
            {
                count++;
            }
            else if (target_row_plus_one_red  )
            {
                count ++;
            }
            else if (target_row_minus_one_red )
            {
                count ++;
            }
            else if (diagonal_up_plus_one_red )
            {
                count ++;
            }
            else if (diagonal_up_minus_one_red )
            {
                count ++;
            }
            else if (diagonal_lower_plus_one_red )
            {
                count ++;
            }
            else if (diagonal_lower_minus_one_red )
            {
                count ++;
            }



            image[i][j].rgbtRed = round((target_red + target_plus_one_red + target_minus_one_red + target_row_plus_one_red + target_row_minus_one_red + diagonal_up_plus_one_red + diagonal_up_minus_one_red + diagonal_lower_plus_one_red + diagonal_lower_minus_one_red)/ count);
            // image[i][j].rgbtGreen = avg;
            // image[i][j].rgbtBlue = avg;