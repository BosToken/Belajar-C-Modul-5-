int updateFunction()
{
    int q;
    char search[20];

kembali:
    if (i == 0)
    {
        printf("Data Mahasiswa Belum Tersedia\n");
    }
    else
    {
        printf("\nAnda Perlu Memasukan NIM Untuk Melakukan Update");
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

                    printf("\nApakah Ingin Melakukan Update Pada Data Ini (y/n) : ");
                    scanf(" %c", &pilih);

                    switch (pilih)
                    {
                    case 'y':
                        printf("\nMasukan Nama Mahasiswa Yang Baru (Data Ke-%i): ", q + 1);
                        scanf(" %[^\n]s", &nama[q]);
                        printf("Masukan Kelas Pemrograman Dasar Yang Baru (Data Ke-%i): ", q + 1);
                        scanf(" %[^\n]s", &kelas[q]);
                        printf("Masukan Nama Dosen Yang Baru (Data Ke-%i): ", q + 1);
                        scanf(" %[^\n]s", &dosen[q]);
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
kembali1:
    return 0;
}