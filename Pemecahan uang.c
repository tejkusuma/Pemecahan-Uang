#include <stdio.h>

void main(){
	//inisialisasi
    int nominal, seratus_ribuan, limapuluh_ribuan, sepuluh_ribuan, sisa_1, sisa_2;

    printf("---------------------------- \n");
	printf("|   Program Pemecah Uang   | \n");
    printf("---------------------------- \n\n");
	
	// memasukkan uang oleh pengguna
	printf("Masukkan Nominal Uang : ");scanf("%i", &nominal);
    
	if (nominal % 10000 == 0){
        seratus_ribuan = nominal / 100000;
	    sisa_1 = nominal % 100000;
	    
        limapuluh_ribuan = sisa_1 / 50000;
		sisa_2 = sisa_1 % 50000;
		
        sepuluh_ribuan = sisa_2 / 10000;
        printf("Pecahan 100.000 = %i\n", seratus_ribuan);
        printf("Pecahan 50.000 = %i\n", limapuluh_ribuan);
        printf("Pecahan 10.000 = %i\n", sepuluh_ribuan);
    }
    else {
        printf("Uang pecahan yang disediakan oleh mesin ATM hanya pecahan 10.000, 50.000, dan 100.000");
    }
}
