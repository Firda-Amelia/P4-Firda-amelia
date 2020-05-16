e <stdio.h>
int main ()
{
	printf ("nama : FIRDA AMELIA\n");
    printf ("nim : F1B019056\n ");
    printf ("kelompok : 11\n");

int x[6],i;
printf("masukan 2 angka nim terakhir anda\n\n");
for(i=0;i<=4;i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for(i=0;i<=4;i++)
{
printf("nimke-%i= %i\n",i+1,x[i]);
}
printf("\n");
return 0;
}
