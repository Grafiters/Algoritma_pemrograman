#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
/**
* fungsi ini fungsi untuk menghitung berapa bantak variabel yang dimiliki nilai dari suatu array
* dan mengembalikan nilai integer. dengan parameter yang dibutuhkan adalah array bertipe
* integer yang akan di cek dan batas dari array tersebut
*/
int count_array(int data[], int jml_data);

/**
* fungis ini akan mengecek apakah tiap nilai dalam sebuah array sudah urut ataukah belum
*/
int cek_urut(int data[], int jml_data);

/**
* prosedur pengurutan gelembung metode prengurutan suatu niali dalam sebuah nilai variabel
*/

void bubble_short_1(int arr[], int len);

/**
* prosedur ini untuk mengurutkan suatu nilai pada suatu variabel tertentu dengan
* batas dari array tersebut
*/
void bubble_short_2(int arr[], int len);

/**
* prosedur untuk menyetak banyak array yang ada
*/
void cetak_array(int data[], int jml_data);


#endif // HEADER_H_INCLUDED
