/*
 *      Program-5.c - this file is part of Mauly Soft Application
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
	int presiden;
	printf("Masukkan nomor urut presiden Indonesia (1-7): ");
	scanf("%d", &presiden);
	switch(presiden){
	
		case 1:
			printf("Soekarno\n"); break;
		case 2:
			printf("Soeharto\n"); break;
		case 3:
			printf("Habibie\n"); break;
		case 4:
			printf("Abdurrahman Wahid\n"); break;
		case 5:
			printf("Megawati\n"); break;
		case 6:
			printf("Susilo Bambang Yudhoyono\n"); break;
		case 7:
			printf("Joko Widodo\n"); break;
	}
	return 0;
}
