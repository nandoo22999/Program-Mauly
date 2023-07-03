/*
 *      Program-9.c - this file is part of Mauly Soft Application
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

float fungsi_c_ke_f();

int main(){
	int a;
	printf("Masukkan angka Celcius: "); scanf("%d", &a);
	printf("Hasil konversi Celcius ke Fahrenheit: %.2f", fungsi_c_ke_f(a));
	//fungsi_c_ke_f(a);
}

float fungsi_c_ke_f(int a){
	float f;
	f = (9.0/5.0 * a)+32.0;
	//printf("Hasil konversinya %g", f);
	return f;
}
