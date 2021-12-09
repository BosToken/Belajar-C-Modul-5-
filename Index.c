#include <stdio.h>
#include <string.h>
int i = 0, y = 0, x;
char nim['0'][20], nama['0'][64], kelas['0'][20], dosen['0'][64];
#include "create.h"
#include "read.h"
#include "search.h"
#include "update.h"
#include "delete.h"

int main()
{
	menuUtama();
}

int menuUtama()
{
	int pilih;

kembali:
	printf("\nSistem Pendataan Akun I-Lab Infotech\n\n");
	printf("===Pilih Menu===\n\n");
	printf("1. Create Data \n");
	printf("2. Show Data\n");
	printf("3. Update Data \n");
	printf("4. Delete Data \n");
	printf("5. Search Data \n");
	printf("6. Exit \n\n");

	printf("Masukan Pilihan Anda : ");
	scanf("%i", &pilih);

	switch (pilih)
	{
	case 1:
		createFunction();
		break;
	case 2:
		showFunction();
		break;
	case 3:
		updateFunction();
		break;
	case 4:
		deleteFunction();
		break;
	case 5:
		searchFunction();
		break;
	case 6:
		goto exit;
		break;
	default:
		printf("Pilihan Yang Anda Masukan Tidak Ada, Silahkan Pilih Kembali ;D");
		goto kembali;
	}

	goto kembali;
exit:
	printf("\nTerimakasih Sudah Menggunakan Program Ini ;D");
}
