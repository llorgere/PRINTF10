# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/15 12:55:31 by llorgere          #+#    #+#              #
#    Updated: 2018/04/11 09:37:13 by llorgere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c \
	  ft_add_dies.c \
	  ft_arg_first.c \
	  ft_add_dies0.c \
	  ft_add_dies_o.c \
	  ft_add_dies_o0.c \
	  ft_add_dies_x0.c \
	  ft_add_dies_xup.c \
	  ft_add_dies_xup0.c \
	  ft_add_plus.c \
	  ft_add_plus0.c \
	  ft_add_preci_empty.c \
	  ft_add_space.c \
	  ft_addw.c \
	  ft_addw0.c \
	  ft_addwf.c \
	  ft_addwf0.c \
	  ft_addwmin.c \
	  ft_addwp.c \
	  ft_winopr.c \
	  ft_wipr.c \
	  ft_fill.c \
	  ft_nowinopr.c \
	  ft_nowipr.c \
	  ft_wii_init.c \
	  ft_arg_first.c \
	  ft_arg_second.c \
	  ft_arg_third.c \
	  ft_arg_fourth.c \
	  ft_arg_fifth.c \
	  ft_arg_sixth.c \
	  ft_arg_seventh.c \
	  ft_arg_total.c \
	  ft_error_flag.c \
	  ft_strndups.c \
	  ft_p_conv_null.c \
	  ft_what_conv.c \
	  ft_one_conv.c \
	  ft_two_l_conv.c \
	  ft_two_h_conv.c \
	  ft_two_z_conv.c \
	  ft_two_j_conv.c \
	  ft_three_h_conv.c \
	  ft_three_l_conv.c \
	  ft_three_conv.c \
	  ft_uniconv.c \
	  ft_uitoa_bin.c \
	  ft_strncpypf.c \
	  ft_strncatpf.c \
	  ft_pc_conv.c \
	  ft_nputstr.c \
	  ft_nstrdup.c \
	  ft_watinit.c \
	  ft_size_tab.c \
	  ft_what_type.c \
	  ft_arg_conv.c \
	  ft_strndup.c \
	  ft_ctoa.c \
	  ft_imtoa.c \
	  ft_litoa.c \
	  ft_llitoa.c \
	  ft_sitoa.c \
	  ft_ssttoa.c \
	  ft_uctoa.c \
	  ft_uimtoa.c \
	  ft_uitoa.c \
	  ft_luitoa.c \
	  ft_lluitoa.c \
	  ft_suitoa.c \
	  ft_sttoa.c \
	  ft_ch_to_octal.c \
	  ft_uim_to_octal.c \
	  ft_int_to_octal.c \
	  ft_lg_to_octal.c \
	  ft_llg_to_octal.c \
	  ft_sh_to_octal.c \
	  ft_st_to_octal.c \
	  ft_ch_to_hex_low.c \
	  ft_uim_to_hex_low.c \
	  ft_int_to_hex_low.c \
	  ft_lg_to_hex_low.c \
	  ft_llg_to_hex_low.c \
	  ft_sh_to_hex_low.c \
	  ft_st_to_hex_low.c \
	  ft_ch_to_hex_up.c \
	  ft_uim_to_hex_up.c \
	  ft_int_to_hex_up.c \
	  ft_lg_to_hex_up.c \
	  ft_llg_to_hex_up.c \
	  ft_sh_to_hex_up.c \
	  ft_st_to_hex_up.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_memalloc.c \
	  ft_toupper.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_tolower.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_chardup.c \
	  ft_flag_adjust.c \
	  ft_flag_use.c \
	  ft_wintdup.c \
	  ft_wchardup.c \
	  ft_strduppf.c \
	  ft_p_conv.c

CC = gcc
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g
.PHONY : all clean fclean re

all : $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -I. -o $@ -c $<

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@/bin/rm -rf $(OBJ)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
