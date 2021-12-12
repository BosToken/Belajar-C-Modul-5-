int showFunction()
{
    printf("---------------------------------------\n");
    if (i == 0)
    {
        printf("Data Mahasiswa Belum Tersedia\n");
    }
    else
    {
        for (y = 0; y < i; y++)
        {
            printf("Data Ke-%i\n\n", y + 1);

            printf("NIM Mahasiswa : %s\n", nim[y]);
            printf("Nama Mahasiswa : %s\n", nama[y]);
            printf("Kelas Pemrograman Dasar : %s\n", kelas[y]);
            printf("Dosen Pengajar : %s\n", dosen[y]);
            printf("---------------------------------------\n\n");
        }
    }
}