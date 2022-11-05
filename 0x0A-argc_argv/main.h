#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * is_palindrome - is palindrome
 * @s: string to do
 * Return: boolean
 */
int is_palindrome(char *s);
/**
 * is_print_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n);
/**
 * _sqrt_recursion - square root of int
 * @n: integer to root
 * Return: int value
 */
int _sqrt_recursion(int n);
/**
 * _pow_recursion - gives power
 * @x: integer to power
 * @y: power to do
 * Return: return integer value
 */
int _pow_recursion(int x, int y);
/**
 * factorial - return factorial
 * @n: number to return
 * Return: factorial or -1
 */
int factorial(int n);
/**
 * _strlen_recursion - gets string length
 * @s: string to count
 * Return: int value
 */
int _strlen_recursion(char *s);
/**
 * _print_rev_recursion - prints reverse with recurse
 * @s: string to print
 */
void _print_rev_recursion(char *s);
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */
void _puts_recursion(char *s);
/**
 * set_string - sets string to something
 * @s: string to set to
 * @to: set to
 */
void set_string(char **s, char *to);
/**
 * print_diagsums - prints diagonal sums
 * @a: array to do
 * @size: size of arrays
 */
void print_diagsums(int *a, int size);
/**
 * print_chessboard - prints board

    * @a: prints a characters

     *

      */

void print_chessboard(char (*a)[8]);

/**

   * _strstr - locates substring

    * @haystack: string to locate substring

     * @needle: string to locate

      * Return: return string found

       */
