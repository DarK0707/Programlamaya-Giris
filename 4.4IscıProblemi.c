#include <stdio.h>

int main(){

int isci_sayisi,tek_isci_toplam_sure,isin_bitme_suresi;


printf("Bir iscinin isi bitirme suresini giriniz  : ");
scanf("%d",&tek_isci_toplam_sure);

printf("İsci sayisini giriniz :");

scanf("%d",&isci_sayisi);
if( isci_sayisi <=1  ){printf("isci sayisi 1'den buyuk olmalidiri");
return 0;}

printf("İsin birden fazla isciyle yapilma suresi %d ",(tek_isci_toplam_sure/isci_sayisi));
return 0;


}
