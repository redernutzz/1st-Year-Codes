#include<stdio.h>
int amount, hundreds, fif, twent, tens, fives, twos, ones;
int main(){
	
	printf("Input the amount: ");
	scanf("%d", &amount);
	hundreds= amount/100;
	fif= (amount-(hundreds*100))/50;
	twent=(amount-(hundreds*100)-(fif*50))/20;
	tens=(amount-(hundreds*100)-(fif*50)-(twent*20))/10;
	fives=(amount-(hundreds*100)-(fif*50)-(twent*20)-(tens*10))/5;
	twos=(amount-(hundreds*100)-(fif*50)-(twent*20)-(tens*10)-(fives*5))/2;
	ones=(amount-(hundreds*100)-(fif*50)-(twent*20)-(tens*10)-(fives*5)-(twos*2))/1;
	printf("There are: \n");
	printf("%d note(s) of 100.00\n", hundreds);
	printf("%d note(s) of 50.00\n", fif);
	printf("%d note(s) of 20.00\n", twent);
	printf("%d note(s) of 10.00\n", tens);	
	printf("%d note(s) of 5.00\n", fives);
	printf("%d note(s) of 2.00\n", twos);	
	printf("%d note(s) of 1.00\n", ones);
	return 0;	
	
}
