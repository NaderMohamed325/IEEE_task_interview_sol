/// Name: Nader Mohamed Nader
/// Email: nnader@std.mans.edu.eg

/// Q1: C. The sentence will be printed in reverse order.
/// Q2: The output will be #2024, 2024, 2024# because array_name holds the address of the first element, including the entire array.

/// Q3: Compiler
/// Q4: Compiler Error
/// Q5: A |= 1 << bit   // Binary representation
///        00000101
///     |  00100000
///     ------------
///        00100101

/// Q6: Runtime error
/// Q7: Initialization
/// Q8: No compile issue and no runtime issue. The size of the void pointer, i.e., pVoid, is equal to the size of an int pointer.

/// --------------------------------------------------------------------Bonus Questions------------------------------------------------------------
/// Q1: .c files turn to pre-processed .i files, then Compiler Proper turns them into .s files by low assembly level, the assembler converts them into object files .o, finally the linker links the library with the obj files to get the exe files.
/// Q2: X = X ^ (1 << 7) // Toggles the bit at position 7 of the integer X
/// Q3: Interrupts are asynchronous signals with ordered priority in the MCU that perform specific functions.

#include <stdio.h>

int main() {
    int number, spare;

    printf("Enter the number: ");
    scanf("%i", &number);

    spare = number;
    int counter = 0;

    while (number > 0) {
        if (number % 2 != 0) {
            counter++;
        }
        number /= 2;
    }

    printf("The number of set bits in %i is equal to %i", spare, counter);

    return 0;
}
