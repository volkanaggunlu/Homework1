#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i;// d�ng� i�in kullan�lacak olan global de�i�ken

int enkucuk(int elemanlar[6]){// enkucuk ad�nda i�lemlerin yap�laca�� fonksiyon
	

int enk=elemanlar[0];	//enk en k���k say�y� temsil etmektedir. elemanlar dizisinin ilk terimi oldu�u verilip yola ��k�ld�

	for(i=0;i<6;i++){//for d�ng�s� ba�lar ve 6 kere d�ner.
		if (elemanlar[i] < enk){//buradaki ko�ulda e�er eleman enkdan k���kse ko�ul kontrol� kontrol edilir.
		enk=elemanlar[i];//enk n�n o andaki elemandan b�y�k olmas� durumunda enk art�k bu elemanlar[i] de�erine e�it olur. 
		}
	}
	
		printf("En kucuk eleman : %d",enk);// en k���k eleman�n yazd�r�laca�� printf mesaj�.
}

int main(int argc, char *argv[]) {
	
	int elemanlar[6];// 6 elemanl� olarak �ncden belirlenmi� olan bir int dizisi.
	
	for(i=0;i<6;i++){// kendini 6 defa tekrar edecek olan for d�ng�s�
	
	printf("6 elemanli dizinin %d. elemani : ",i+1);// burada elemanlar� tek tek isteyen mesaj
	scanf("%d",&elemanlar[i]);// elemanlar� scanf yard�m� ile girece�iz.
	}
	
	enkucuk(elemanlar);//son olarak da int enkucuk fonksiyonunu burada �a��raca��z ve i�lemler yap�lacak.
		}
// BU kodun y�r�tme zaman� ise O(n) dir.
