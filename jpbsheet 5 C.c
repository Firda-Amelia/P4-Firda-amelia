#include <conio.h>

main (){
int nim1 [2][2];
int nim2 [2][2];
int hasil [2][2];
int i, j;
printf ("PERKALIAN NIM\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &nim6[i][j]);
}
}
printf ("\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &nim1[i][j]);
}
}
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
hasil [i][j]=nim6[i][0]*nim1[0][j]+nim6[i][1]*nim1[1][j];
printf ("%d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}

