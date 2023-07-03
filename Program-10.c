/*
 *      Program-10.c - this file is part of Mauly Soft Application
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
	int i, wadah[5];
	printf("Masukkan lima angka dipisahkan Enter: \n");
	for(i=0; i<5; i++){
		scanf("%d", &wadah[i]);
	}
	printf("\nInilah angka-angka yang Anda masukkan: \n");
	for(i=0; i<5; i++){
		printf("Angka ke-%d = %d\n", i, wadah[i]);
	}
	return 0;
}
