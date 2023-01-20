#ifndef 3-CALC_H
#define 3-CALC_H

#define __RETURN__(value) \
	(__extension__ \
	 ({ \
	  printf("Error\n"); \
	  value; \
	  }))

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototpyes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *))(int, int);

#endif /* 3-CALC_H */

