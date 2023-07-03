/*
 *      Program-7.c - this file is part of Mauly Soft Application
 *
 *      Copyright 2023 Mauly Tri Nando <nandobegig22999@gmail.com>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License along
 *      with this program; if not, write to the Free Software Foundation, Inc.,
 *      51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>
#include <unistd.h> // khusus keluarga GNU operating system
int main(){
	int a=0;
	while(a<=10){
		// Angka ini akan bertambah berulang kali
		printf("%d\n",a++);
		sleep(1); // kalau tidak bisa, gantikan dengan getchar()
		//getchar();
	}
	return 0;
}
