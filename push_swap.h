#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h> // malloc y free
#include <limits.h> // INT_MAX

int ft_all_isdigit(int argc, char **argv);
int ft_iscpy(int argc, char **argv);
int ft_all_isint(int argc, char **argv);
int *ft_conversorint(int argc, char **argv);
void ft_printints(int argc, int *stack);
void ft_rr(int *stack);
void ft_r(int argc, int *stack, char c);
void ft_s(int *stack, char c);
void ft_p(int *stack_a, int *stack_b, int argc, char c);
int main(int argc, char **argv);

#endif