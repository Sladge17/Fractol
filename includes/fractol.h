/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 13:41:23 by student           #+#    #+#             */
/*   Updated: 2020/05/27 13:41:26 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdarg.h>
# include <wchar.h>

# include "settings.h"

typedef struct		s_sys
{
	void			*mlx;
	void			*win;

	int				imgvol;
	void			*img;
	int				img_s[3];
	int				*imgout;

	int				mnuvol;
	void			*mnu;
	int				mnu_s[3];
	int				*mnuout;

	int				scale;

	
	// int				*back_buf;
	// int				*z_buf;
	// char			render;
	// char			control;
	// int				mouse_pos[2];
}					t_sys;


typedef struct		s_comp
{
	double			real;
	double			img;
}					t_comp;

/*
** fractol.c
*/
void	set_system(t_sys *sys);
void	fill_screen(t_sys *sys);
int		close_fractol(void *param);
t_comp	int_to_comp(int idx);
void	draw_fract(int itr, int i, t_sys *sys);
void	calc_fractal(t_sys	*sys);


/*
** complex_actions.c
*/
t_comp	init_comp(double real, double img);
t_comp	add_comp(t_comp comp, t_comp comp_add);
t_comp	mult_comp(t_comp comp_1, t_comp comp_2);
t_comp	pow2_comp(t_comp comp);
double	len_comp(t_comp comp);
void	scale_comp(t_comp *comp, int scale);

/*
** fractals.c
*/
int		calc_Mandelbrot(t_comp z);
int		calc_Zulia(t_comp z, t_comp c);


/*
** controls_main.c
*/
int		key_press(int keycode, void *param);

#endif

























