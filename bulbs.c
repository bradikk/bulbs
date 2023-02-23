#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int bitnum(int num);
void number(int bit);

int main(void)
{
    // Get user input
    string message = get_string("Message: ");

    // Check each letter of 'message'
    for (int i = 0; i < strlen(message); i++)
    {
        int binary[] = {0, 0, 0, 0, 0, 0, 0, 0};

        // Convert char to ASCII
        int decimal = message [i];

        // Convert ASCII to binary
        int j = 0;

        while (decimal > 0)
        {
            binary[j] = decimal % 2;
            decimal = decimal / 2;
            j++;
        }
        // Print the binary in reverse
        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
