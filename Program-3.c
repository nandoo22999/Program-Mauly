/*
 *      Program-3.c - this file is part of Mauly Soft Application
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
int main(){
	int bulat, a, b;
	float pecahan1;
	double pecahan2;
	char karakter1, karakter2;
	
	printf("Masukkan bilangan bulat = "); scanf("%d", &bulat);
	printf("Bilangan bulat Anda = %d\n", bulat);
	
	printf("Masukkan bilangan pecahan = "); scanf("%f", &pecahan1);
	printf("Bilangan pecahan Anda = %f\n", pecahan1);
	
	printf("Masukkan bilangan pecahan presisi ganda = ");
	scanf("%lf", &pecahan2);
	printf("Bilangan pecahan ganda Anda = %lf\n", pecahan2);
	
	printf("Masukkan dua karakter dipisahkan spasi = ");
	scanf("%s %s", &karakter1, &karakter2);
	printf("Pertama %c\n", karakter1);
	printf("Kedua %c\n", karakter2);
	
	return 0;
}
