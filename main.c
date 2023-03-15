#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i;// döngü için kullanýlacak olan global deðiþken

int enkucuk(int elemanlar[6]){// enkucuk adýnda iþlemlerin yapýlacaðý fonksiyon
	

int enk=elemanlar[0];	//enk en küçük sayýyý temsil etmektedir. elemanlar dizisinin ilk terimi olduðu verilip yola çýkýldý

	for(i=0;i<6;i++){//for döngüsü baþlar ve 6 kere döner.
		if (elemanlar[i] < enk){//buradaki koþulda eðer eleman enkdan küçükse koþul kontrolü kontrol edilir.
		enk=elemanlar[i];//enk nýn o andaki elemandan büyük olmasý durumunda enk artýk bu elemanlar[i] deðerine eþit olur. 
		}
	}
	
		printf("En kucuk eleman : %d",enk);// en küçük elemanýn yazdýrýlacaðý printf mesajý.
}

int main(int argc, char *argv[]) {
	
	int elemanlar[6];// 6 elemanlý olarak öncden belirlenmiþ olan bir int dizisi.
	
	for(i=0;i<6;i++){// kendini 6 defa tekrar edecek olan for döngüsü
	
	printf("6 elemanli dizinin %d. elemani : ",i+1);// burada elemanlarý tek tek isteyen mesaj
	scanf("%d",&elemanlar[i]);// elemanlarý scanf yardýmý ile gireceðiz.
	}
	
	enkucuk(elemanlar);//son olarak da int enkucuk fonksiyonunu burada çaðýracaðýz ve iþlemler yapýlacak.
		}
// BU kodun yürütme zamaný ise O(n) dir.
