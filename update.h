int updateFunction(){
    int q;
    char search[20];

    kembali : 
    printf("\nAnda Perlu Memasukan NIM Untuk Melakukan Update");
    printf("\nMasukan NIM Yang Ingin Dicari : ");
    scanf("%s", &search);

    if(strlen(search) == 10){
        for(q = 0; q < i; q++){
            if(strcmp(search, nim[q]) == 0){
                printf("\nMasukan Nama Mahasiswa Yang Baru (Data Ke-%i): ", q+1);
                scanf(" %[^\n]s", &nama[q]);
                printf("Masukan Kelas Pemrograman Dasar Yang Baru (Data Ke-%i): ", q+1);
                scanf(" %[^\n]s", &kelas[q]);
                printf("Masukan Nama Dosen Yang Baru (Data Ke-%i): ", q+1);
                scanf(" %[^\n]s", &dosen[q]);
                return 0;
            }
        }
        printf("NIM yang Anda Cari Tidak Tersedia");
    }
    else{
        printf("\nNim Anda Kurang Atau Lebih Dari 10, Tolong Masukan Kembali\n");
        goto kembali;
    }

    return 0;
}