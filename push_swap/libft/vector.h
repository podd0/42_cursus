/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuddu <apuddu@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:19:09 by apuddu            #+#    #+#             */
/*   Updated: 2024/08/02 18:19:09 by apuddu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H 1

struct					s_vi
{
	int					*arr;
	int					size;
	int					buf_size;
};

typedef struct s_vi		t_vi;

void					vi_push_back(t_vi *vec, int elem);
int						vi_pop_back(t_vi *vec);
void					vi_assign(t_vi *vec, int n, int value);
void					vi_resize(t_vi *vec, int n);
t_vi					*vi_init(int n, int value);
t_vi					*vi_uninit(int n);
void					vi_free(t_vi *vec);
t_vi					*vi_copy(t_vi *vec);
void					vi_map(t_vi *vec, void (*f)(int));
int						vi_back(t_vi *vec);

struct					s_vl
{
	long				*arr;
	int					size;
	int					buf_size;
};

typedef struct s_vl		t_vl;

void					vl_push_back(t_vl *vec, long elem);
long					vl_pop_back(t_vl *vec);
void					vl_assign(t_vl *vec, int n, long value);
void					vl_resize(t_vl *vec, int n);
t_vl					*vl_init(int n, long value);
t_vl					*vl_uninit(int n);
void					vl_free(t_vl *vec);
t_vl					*vl_copy(t_vl *vec);
void					vl_map(t_vl *vec, void (*f)(long));
long					vl_back(t_vl *vec);

struct					s_vlu
{
	long unsigned int	*arr;
	int					size;
	int					buf_size;
};

typedef struct s_vlu	t_vlu;

void					vlu_push_back(t_vlu *vec, long unsigned int elem);
long unsigned int		vlu_pop_back(t_vlu *vec);
void					vlu_assign(t_vlu *vec, int n, long unsigned int value);
void					vlu_resize(t_vlu *vec, int n);
t_vlu					*vlu_init(int n, long unsigned int value);
t_vlu					*vlu_uninit(int n);
void					vlu_free(t_vlu *vec);
t_vlu					*vlu_copy(t_vlu *vec);
void					vlu_map(t_vlu *vec, void (*f)(long unsigned int));
long unsigned int		vlu_back(t_vlu *vec);

struct					s_vstr
{
	char				**arr;
	int					size;
	int					buf_size;
};

typedef struct s_vstr	t_vstr;

void					vstr_push_back(t_vstr *vec, char *elem);
char					*vstr_pop_back(t_vstr *vec);
void					vstr_assign(t_vstr *vec, int n, char *value);
void					vstr_resize(t_vstr *vec, int n);
t_vstr					*vstr_init(int n, char *value);
t_vstr					*vstr_uninit(int n);
void					vstr_free(t_vstr *vec);
t_vstr					*vstr_copy(t_vstr *vec);
void					vstr_map(t_vstr *vec, void (*f)(char *));
char					*vstr_back(t_vstr *vec);

#endif
