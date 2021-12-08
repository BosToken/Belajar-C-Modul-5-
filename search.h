int searchFunction(){
    int q;
    char search[20];

    kembali : 

    printf("\nMasukan NIM Yang Ingin Dicari : ");
    scanf("%s", &search);

    if(strlen(search) == 10){
        for(q = 0; q < i; q++){
            if(strcmp(search, nim[q]) == 0){
                printf("\nNIM Mahasiswa : %s\n", nim[q]);
                printf("Nama Mahasiswa : %s\n", nama[q]);
                printf("Kelas Pemrograman Dasar : %s\n", kelas[q]);
                printf("Dosen Pengajar : %s\n", dosen[q]);
            }
            else{
                printf("\nNIM Yang Anda Cari Tidak Tersedia\n\n");
            }
        }
    }
    else{
        printf("\nNim Anda Kurang Atau Lebih Dari 10, Tolong Masukan Kembali\n");
        goto kembali;
    }
}