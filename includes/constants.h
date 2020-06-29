/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constants.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 08:32:22 by student           #+#    #+#             */
/*   Updated: 2020/05/28 08:32:25 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # define MAIN_W 1920
// # define MAIN_H 1080
# define MAIN_W 1280
# define MAIN_H 720

# define SETT_W 400
# define SETT_H 600

# define MENU_W 250
# define IMAGE_W sys->consts->image_w
# define STAT_H 370

# define IMAGE_VOL sys->consts->image_vol
# define MENU_VOL sys->consts->menu_vol
# define STAT_VOL sys->consts->stat_vol
# define SETT_VOL sys->consts->sett_vol

# define IMAGE_CENTRX sys->consts->image_centrx
# define IMAGE_CENTRY sys->consts->image_centry
# define IMAGE_CENTER sys->consts->image_center

# define F_ID (int)sys->index

# define MLX sys->mlxset->mlx
# define WINMAIN sys->mlxset->win_main
# define WINSETT sys->mlxset->win_sett
# define IMAGE sys->mlxset->img
# define MENU sys->mlxset->mnu
# define STAT sys->mlxset->stat
# define SETT sys->mlxset->sett


# define STR_X sys->consts->menu_xoffset
# define STAT_Y 420

// # define IMAGE_C 0x909497
# define IMAGE_C 0
# define MENU_C 0x2E4053
# define STR_C 0xD0D3D4
# define TITLE_C 0xC0C798
// # define TITLE_C 0x6EC0A3

// # define STAT_C 0x909497

# define FRACT_C 0xFF0000
# define AXISF_C 0xFFFFFF
# define AXISK_C 0xAAAAAA
# define AXIS_C sys->axis_c

# define ITER 100
# define SHIFT 10

// # define DEF_SCALE 300
# define DEF_SCALE 200
# define ADD_SCALE 10
# define MIN_SCALE 100

# define TEXT_TITLE "\e[47m\e[30mFRACTOL DISCRIPTION\e[0m\n"
# define TEXT_MAIN "Fractol need running with only one parameter - code of available fractal, or without parameters (run with default fractal - Mandelbrot)\n"
# define TEXT_FRACTALS "Available fractals:\n1	Zulia\n2	Mandelbrot\n3	BurningShip\n4	Mandelbar\n5	AbsReal\n6	AbsImg\n7	Power3\n8	AbsRealP4\n"