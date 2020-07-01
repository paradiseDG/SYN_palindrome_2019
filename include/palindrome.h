/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** h file for palindrome
*/

#ifndef PALIN_H_
#define PALIN_H_

typedef struct palin_s
{
    int nb;
    int pal;
    int base;
    int imin;
    int imax;
}palin_t;

void exit_comment(int fd, char *str, int rtn);
palin_t getoptprog(int ac, char **av);
int power(int nb, int pow);
int convert_base_to_ten(char *str, int base);
char *convert_base(unsigned int nb, int base, int maj);
char *my_strcat(char *dest, char *src);
char *my_strrev(char *str);
void turnover(int nb, palin_t info);
void palin(palin_t info);
void print_sol(int nb);

#endif /* !PALIN_H_ */
