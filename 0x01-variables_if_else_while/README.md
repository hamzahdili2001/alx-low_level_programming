# ALX Day two in C Programming.

## Arithmetic Operators

Arithmetic operators are used to perform mathematical operations in C. These include:
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulus (%)

Here's an example of using arithmetic operators:

int a = 5, b = 3;
int sum = a + b;
int difference = a - b;
int product = a * b;
int quotient = a / b;
int remainder = a % b;

## Logical Operators

Logical operators, also known as boolean operators, are used to perform logical operations in C. These include:
- AND (&&)
- OR (||)
- NOT (!)

Here's an example of using logical operators:

int a = 5, b = 3, c = 2;
if (a > b && b > c) {
    printf("a is greater than b and b is greater than c\n");
}

## Relational Operators

Relational operators are used to compare two values in C. These include:
- Greater than (>)
- Less than (<)
- Equal to (==)
- Not equal to (!=)
- Greater than or equal to (>=)
- Less than or equal to (<=)

Here's an example of using relational operators:

int a = 5, b = 3;
if (a > b) {
    printf("a is greater than b\n");
}

## TRUE and FALSE Values

In C, any non-zero value is considered TRUE, and zero is considered FALSE.

Here's an example of using TRUE and FALSE values:

int a = 5, b = 0;
if (a) {
    printf("a is TRUE\n");
}
if (!b) {
    printf("b is FALSE\n");
}

## Boolean Operators

if and if...else statements are used to control the flow of execution in C based on certain conditions.

Here's an example of using if and if...else statements:

int a = 5, b = 3;
if (a > b) {
    printf("a is greater than b\n");
} else if (a < b) {
    printf("a is less than b\n");
} else {
    printf("a is equal to b\n");
}

## Variable Declaration and Initialization

In C, variables must be declared before they can be used. The declaration specifies the type of the variable, and optionally its initial value.

Here's an example of declaring and initializing variables:

char c = 'a';
int i = 10;
unsigned int ui = 100;

## The ASCII Character Set

The ASCII character set is a standardized set of characters used in computers and other devices that use text. Each character is represented by a unique code, ranging from 0 to 127.

Here's an example of using ASCII codes in C:

char c = 'A';
int ascii_code = (int) c;
printf("The ASCII code for %c is %d\n", c, ascii_code);

## The -m32 and -m64 Flags in GCC

The -m32 and -m64 flags are used in GCC to specify the target architecture for the compiled code. The -m32 flag generates 32-bit code, while the -m64 flag generates 64-bit code.

Here's an example of using the -m32 and -m64 flags:

gcc -m32 -o my_program my_program.c
gcc -m64 -o my_program my_program.c
