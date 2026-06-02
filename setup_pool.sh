#!/bin/bash
# setup_pool.sh — crea estructura completa de pool C00-C05
# Ejecutar desde la raiz del repo: bash setup_pool.sh

set -e

BASE="pool"

# ─────────────────────────────────────────
# C00
# ─────────────────────────────────────────
mkdir -p $BASE/c00/ex00 && touch $BASE/c00/ex00/ft_putchar.c
mkdir -p $BASE/c00/ex01 && touch $BASE/c00/ex01/ft_print_alphabet.c
mkdir -p $BASE/c00/ex02 && touch $BASE/c00/ex02/ft_print_reverse_alphabet.c
mkdir -p $BASE/c00/ex03 && touch $BASE/c00/ex03/ft_print_numbers.c
mkdir -p $BASE/c00/ex04 && touch $BASE/c00/ex04/ft_is_negative.c
mkdir -p $BASE/c00/ex05 && touch $BASE/c00/ex05/ft_print_comb.c
mkdir -p $BASE/c00/ex06 && touch $BASE/c00/ex06/ft_print_comb2.c
mkdir -p $BASE/c00/ex07 && touch $BASE/c00/ex07/ft_putnbr.c
mkdir -p $BASE/c00/ex08 && touch $BASE/c00/ex08/ft_print_combn.c

# ─────────────────────────────────────────
# C01
# ─────────────────────────────────────────
mkdir -p $BASE/c01/ex00 && touch $BASE/c01/ex00/ft_ft.c
mkdir -p $BASE/c01/ex01 && touch $BASE/c01/ex01/ft_ultimate_ft.c
mkdir -p $BASE/c01/ex02 && touch $BASE/c01/ex02/ft_swap.c
mkdir -p $BASE/c01/ex03 && touch $BASE/c01/ex03/ft_div_mod.c
mkdir -p $BASE/c01/ex04 && touch $BASE/c01/ex04/ft_ultimate_div_mod.c
mkdir -p $BASE/c01/ex05 && touch $BASE/c01/ex05/ft_putstr.c
mkdir -p $BASE/c01/ex06 && touch $BASE/c01/ex06/ft_strlen.c
mkdir -p $BASE/c01/ex07 && touch $BASE/c01/ex07/ft_rev_int_tab.c
mkdir -p $BASE/c01/ex08 && touch $BASE/c01/ex08/ft_sort_int_tab.c

# ─────────────────────────────────────────
# C02
# ─────────────────────────────────────────
mkdir -p $BASE/c02/ex00 && touch $BASE/c02/ex00/ft_strcpy.c
mkdir -p $BASE/c02/ex01 && touch $BASE/c02/ex01/ft_strncpy.c
mkdir -p $BASE/c02/ex02 && touch $BASE/c02/ex02/ft_str_is_alpha.c
mkdir -p $BASE/c02/ex03 && touch $BASE/c02/ex03/ft_str_is_numeric.c
mkdir -p $BASE/c02/ex04 && touch $BASE/c02/ex04/ft_str_is_lowercase.c
mkdir -p $BASE/c02/ex05 && touch $BASE/c02/ex05/ft_str_is_uppercase.c
mkdir -p $BASE/c02/ex06 && touch $BASE/c02/ex06/ft_str_is_printable.c
mkdir -p $BASE/c02/ex07 && touch $BASE/c02/ex07/ft_strupcase.c
mkdir -p $BASE/c02/ex08 && touch $BASE/c02/ex08/ft_strlowcase.c
mkdir -p $BASE/c02/ex09 && touch $BASE/c02/ex09/ft_strcapitalize.c
mkdir -p $BASE/c02/ex10 && touch $BASE/c02/ex10/ft_strlcpy.c
mkdir -p $BASE/c02/ex11 && touch $BASE/c02/ex11/ft_putstr_non_printable.c
mkdir -p $BASE/c02/ex12 && touch $BASE/c02/ex12/ft_print_memory.c

# ─────────────────────────────────────────
# C03
# ─────────────────────────────────────────
mkdir -p $BASE/c03/ex00 && touch $BASE/c03/ex00/ft_strcmp.c
mkdir -p $BASE/c03/ex01 && touch $BASE/c03/ex01/ft_strncmp.c
mkdir -p $BASE/c03/ex02 && touch $BASE/c03/ex02/ft_strcat.c
mkdir -p $BASE/c03/ex03 && touch $BASE/c03/ex03/ft_strncat.c
mkdir -p $BASE/c03/ex04 && touch $BASE/c03/ex04/ft_strstr.c
mkdir -p $BASE/c03/ex05 && touch $BASE/c03/ex05/ft_strlcat.c

# ─────────────────────────────────────────
# C04
# ─────────────────────────────────────────
mkdir -p $BASE/c04/ex00 && touch $BASE/c04/ex00/ft_strlen.c
mkdir -p $BASE/c04/ex01 && touch $BASE/c04/ex01/ft_putstr.c
mkdir -p $BASE/c04/ex02 && touch $BASE/c04/ex02/ft_putnbr.c
mkdir -p $BASE/c04/ex03 && touch $BASE/c04/ex03/ft_atoi.c
mkdir -p $BASE/c04/ex04 && touch $BASE/c04/ex04/ft_putnbr_base.c
mkdir -p $BASE/c04/ex05 && touch $BASE/c04/ex05/ft_atoi_base.c

# ─────────────────────────────────────────
# C05
# ─────────────────────────────────────────
mkdir -p $BASE/c05/ex00 && touch $BASE/c05/ex00/ft_iterative_factorial.c
mkdir -p $BASE/c05/ex01 && touch $BASE/c05/ex01/ft_recursive_factorial.c
mkdir -p $BASE/c05/ex02 && touch $BASE/c05/ex02/ft_iterative_power.c
mkdir -p $BASE/c05/ex03 && touch $BASE/c05/ex03/ft_recursive_power.c
mkdir -p $BASE/c05/ex04 && touch $BASE/c05/ex04/ft_fibonacci.c
mkdir -p $BASE/c05/ex05 && touch $BASE/c05/ex05/ft_sqrt.c
mkdir -p $BASE/c05/ex06 && touch $BASE/c05/ex06/ft_is_prime.c
mkdir -p $BASE/c05/ex07 && touch $BASE/c05/ex07/ft_find_next_prime.c

echo ""
echo "Estructura creada:"
find $BASE -name "*.c" | sort
echo ""
echo "Total archivos .c: $(find $BASE -name '*.c' | wc -l)"
