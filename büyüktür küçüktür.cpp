#include <stdio.h>

int main()
{
	int sayi1;
	int sayi2;
	
	printf("iki tamsayi giriniz \n");
	printf("bu iki sayinin karsilastirmasi yapilacaktir");
	
	scanf("%d%d",&sayi1,&sayi2); /*klavyeden iki deðer girilecek*/
	
	if(sayi1==sayi2) {
		printf("%d esit %d\n",sayi1,sayi2);
		}/*if koþulu burada bitiyor*/
		
		if(sayi1!=sayi2) {
			printf("%d esit degil %d\n",sayi1,sayi2);
		}/*if koþulu burada bitiyor*/
	
	if(sayi1<sayi2) {
			printf("%d kucuk %d\n",sayi1,sayi2);
			}
			
	if(sayi1>sayi2) {
			printf("%d buyuk %d\n",sayi1,sayi2);
			}
							
	if(sayi1<=sayi2) {
			printf("%d kucuk yada esit %d\n",sayi1,sayi2);
			}
			
	if(sayi1>=sayi2) {
	printf("%d buyuk yada esit %d\n",sayi1,sayi2); 
	}
	
	return 0;
	
	
}

