# printf Project

## Description ##
The printf function sends formatted output to stdout. A custom _printf() for learning purposes was developed by cohort #11 students Amadi Robert and Ezirim daniel._printf() function format string is a character string, beginning and ending in its initial shift state, if any. These arguments are placed using the percentage '%' operator

## Authorized Functions and Macros ##
- write (man 2 write) 
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start) 
- va_end (man 3 va_end)
- va_copy (man 3 va_copy) 
- va_arg (man 3 va_arg)
--
## Compliation ##

The code must be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic .c

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions). The main files will include your main header file (main.h): include main.h
--
###Uses and Examples

## Specifiers ##

| Specifiers   | Output  | Examples |
|--------------|---------|----------|
|`c` | Character | y|
|`d` or i| Signed integer | -1024 to 1024|
|`s` | String of Characters | Hello Main |
|`b` | Binary representation of unsigned integer | 01010110 |
|`u` | Unsigned integer | 1024 |
| `o`| Unsigned octal | 432 |
|`x` | Unsigned hexadecimal integer | 3ca |
| `X`| Upper Unsigned hexadecimal integer | 3CA|
|`S` | String with hex-ascii value replacing special chars | \x0A\x0A|
|`p` | Pointer Address | 0x403212 |
| `r` | Reversed string of Characters |dloW olleH |
|`R` | ROT'13 Translation of string | Uryyb |

### Flags ###
|Flags| Description|
|-----|------------|
|`-`| Left-justify the output within the field width; right justification is the default|
|`+`| Preceeds the result with a plus or minus sign (`+` or `-`) even for positive numbers By default, only the negative numbers are preceeded with a minus `-` sign.
|`(space)`| if no sign is going to be written, a blank space is inserted before the value |
| `#` | Used with `o`, `x` or `X` specifiers, the value is then preceeded with 0, 0x or 0X respectively for values different than zero. |
|`0` | Left-pads the number with zeros `(0)` instead is specified |


## Width ###
| Width | Description |
|-------|------------|
|`(number)` | Minimum number of characters to be printed. if the values to be printed is shorter than the number, the result is padded with blank spaces. the value is not truncated even if the result is larger |
| `*` | The width is not specified in the format string, but as an addition integer value argument preceding the argument that needs to be formatted. |

## Precision ##
|.Precision | Description |
|-----------|-------------|
|`.number` | For integer specifiers`(d, i, o, u, x, X)`: Precision specifies the minimum number of digits to be written. if the value to be written is shorter than this number, the result is then padded with leading zeros. the value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0. for `s`: this is the maximum numbers of characters to be printed. By default all characters are printed until the ending null byte character is encountered|

### Length modifiers ###
|Modifiers/Specifiers| `d` & `i`| `u`, `o`, `x`, `X`|
|--------------------|----------|-------------------|
|`none` | int | unsigned int |
|`h` | Short int | unsignes short int |
| `l` | long int | unsigned int |

### Files Contained in this repo ###
| Name of File | Information | Relevant File |
|--------------|-------------|---------------|
|`man_3_printf`| The Man page of printf() function. | `None` |
|`main.h` | Header file with the data type struct, standard libaries and custom prototypes |`*.c compilation` |
|`_printf.c`|Main printf function file, this calls other function | `printf_(name of variable) file` |
|`printf_37.c`|contains percentage print function | `None` |
|`printf_int.c`| Contains decimal and integer functions |`None` |
|`printf_char.c`|Custom function for char data type |`None` |
|`printf_string.c`| Function that calls string type variables |`None` |
|`printf_bin.c`|Function that gets the binary |`None` |
|`printf_oct.c`| Function that returns octal number |`None` |
|`printf_hex.c`|Function that calls hexadecimal numbers in lower case |`None` |
|`printf_HEX.c`|Function that calls hexadecimal numbers in upper-case |`None` |
|`printf_unsigned.c`|Function that returns an unsigned data type |`None` |
|`printf_hex_aux.c`|Auxiliary function for hexadecimal specific functions in lower-case |`printf_exclusive_string.c`|
|`printf_HEX_aux.c`|Auxiliary function for hexadecimal specific functions in upper-case |`printf_p.c`|
|`printf_exclusive_string.c`|Returns a string and non-readable characters are printed in hexadecimal numbers(lower-case) |`printf_hex_aux.c` |
|`printf_srev.c`|Returns a string in a reversed order |`None` |
|`printf_rot13.c`| Returns a string in Rot13 |`None` |`None` |
|`printf_str.c`|auxiliary functions such as strlen and strcpy. |`None` |
|`_putchar.c`|custom putchar function |`None` |



`malloc`

