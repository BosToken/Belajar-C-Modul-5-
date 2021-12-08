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
            if(strlen(nim[y]) == 0)
            {
                i -= 1;
                return 0;
            }
            else{
                printf("Data Ke-%i\n\n", y + 1);
                
                // printf("Jumlah NIM : %i\n", nim[y]);
                printf("NIM Mahasiswa : %s\n", nim[y]);
                printf("Nama Mahasiswa : %s\n", nama[y]);
                printf("Kelas Pemrograman Dasar : %s\n", kelas[y]);
                printf("Dosen Pengajar : %s\n", dosen[y]);
                printf("---------------------------------------\n\n");
            }
        }
    }
}