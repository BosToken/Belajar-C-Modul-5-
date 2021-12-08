int deleteFunction()
{
    int q;
    char search[20];
    printf("\nMasukan NIM Yang Ingin dihapus: ");
    scanf("%s", &search);

    if(strlen(search) == 10){
        for (q = 0; q < i; q++){
            if(strcmp(search, nim[q]) == 0){
                for (int j = q; j < (i - 1); j++){
                    strcpy(nim[j], nim[j + 1]);
                    strcpy(nama[j], nama[j + 1]);
                    strcpy(kelas[j], kelas[j + 1]);
                    strcpy(dosen[j], dosen[j + 1]);            
                }
                i -= 1;
                printf("\nData berhasil dihapus.\n");
                printf("---------------------------------------\n\n");
                return 0;
            }
        }
        printf("\nNIM Yang Anda Masukan Tidak Ada\n");
        return 0;
    }

    printf("\nNIM Anda Kurang Atau Lebih Dari 10, Tolong Masukan Kembali\n");
    return 0;
}