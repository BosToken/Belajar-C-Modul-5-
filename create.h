int createFunction()
{
    int q;

kembali:
    printf("\nMasukan NIM Praktikan (Mahasiswa Ke-%i): ", i + 1);
    scanf("%s", &nim[i]);
    printf("Masukan Nama Praktikan (Mahasiswa Ke-%i): ", i + 1);
    scanf(" %[^\n]s", &nama[i]);
    printf("Masukan Kelas Pemerograman Dasar (Mahasiswa Ke-%i): ", i + 1);
    scanf(" %[^\n]s", &kelas[i]);
    printf("Masukan Nama Dosen (Mahasiswa Ke-%i): ", i + 1);
    scanf(" %[^\n]s", &dosen[i]);

    if (strlen(nim[i]) == 10)
    {
        if (i == 0)
        {
            printf("\nData Anda Berhasil Ditambah Awal\n");
            printf("---------------------------------------\n\n");
            i += 1;
        }
        else
        {
            for (q = 0; q < i; q++)
            {
                if (strcmp(nim[i], nim[q]) == 0)
                {
                    printf("\nNim Yang Anda Tambah Sudah Tersedia, Mohon Input NIM Lain\n");
                    goto kembali;
                }
            }
            printf("\nData Anda Berhasil Ditambah\n");
            printf("---------------------------------------\n\n");
            i += 1;
            return 0;
        }
    }
    else
    {
        printf("\nNim Anda Kurang Atau Lebih Dari 10, Tolong Masukan Kembali\n");
        goto kembali;
    }
}