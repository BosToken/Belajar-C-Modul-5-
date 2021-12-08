int deleteFunction()
{
    char search[20];
    int q;

    if (i == 0)
    {
        printf("Data Mahasiswa Belum Tersedia\n");
    }
    else
    {
    kembali:

        printf("\nAnda Perlu Memasukan NIM Untuk Melakukan Delete");
        printf("\nMasukan NIM Yang Ingin Dicari : ");
        scanf("%s", &search);

        if (strlen(search) == 10)
        {
            for (q = 0; q < i; q++)
            {
                if (strcmp(search, nim[q]) == 0)
                {
                    char pilih;

                    printf("\nData yang Anda Cari Ditemukan, Dengan Nama : %s", nama[q]);
                    
                    kembali2:

                    printf("\nApakah Ingin Melakukan Delete Pada Data Ini (y/n) : ");
                    scanf(" %c", &pilih);
                    switch (pilih)
                    {
                    case 'y':
                        strcpy(nim[q], nim[q+1]);
                        strcpy(nama[q], nama[q+1]);
                        strcpy(kelas[q], kelas[q+1]);
                        strcpy(dosen[q], dosen[q+1]);

                        q--;
                        strcpy(nim[q], "");
                        i--;
                        printf("Data Yang Anda Cari Berhasil DiDelete\n"); 
                        return 0;
                        break;
                    case 'n':
                        goto kembali1;
                        break;
                    default:
                        printf("\nPilihan Yang Anda Masukan Tidak Tersedia, Silahkan Masukan Kembali\n");
                        goto kembali2;
                        break;
                    }
                }
            }
            printf("NIM yang Anda Cari Tidak Tersedia"); 
        }
        else
        {
            printf("\nNim Anda Kurang Atau Lebih Dari 10, Tolong Masukan Kembali\n");
            goto kembali;
        }
    }
    kembali1 :
    return 0;
}