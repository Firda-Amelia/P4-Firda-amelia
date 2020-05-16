#include <conio.h>

main (){


}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan index " << x << "," << y << " = ";
cin>> nim1[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
jml [x][y] = nim1[x][0]*nim6[0][y]+nim1[x][1]*nim6[1][y];
cout<<jml [x][y] <<" ";
}
cout<<endl;
}
}
