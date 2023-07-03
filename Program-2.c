/*
 *      Program-2.c - this file is part of Mauly Soft Application
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
	int bulat=3456789;
	float pecahan1=339.1234567;
	double pecahan2=3.456789e+11;
	char karakter1='A', karakter2='a';
	
	printf("Isi dari variabel int bulat adalah %d\n", bulat);
	printf("Isi dari variabel float pecahan1 adalah %f\n", pecahan1);
	printf("Isi dari variabel double pecahan2 adalah %lf\n", pecahan2);
	printf("Isi dari variabel char karakter1 dan karakter2 adalah %c dan %c\n", karakter1, karakter2);
	
	return 0;
}
