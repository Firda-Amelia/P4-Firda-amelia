#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<" SOAL QUIS TENTANG COVID 19\n";
	cout<<" TAHUN 2020-2021\n";
	cout<<" KELOMPOK 11\n";
	cout<<"\n";
	cout<<"Silahkan Login!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "firda" && pass == "F1B019056")
			{
cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"\n";
	cout<<"1. gejala-gejala pada covid-19 adalah??\n";
	string pilgan1[50]={"a. demam,batuk kering,nyeri tenggorokan,kesulitan bernapas","b. sakit kepala,mengigil","c. diare dan nyeri saat buang air kecil","d. mual,muntah dan kehilangna nafsu makan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;	
f(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    cout<<"=\n";        
    cout<<"2. Apakah anti biotik efektif dalam mencegah dan mengobati covid-19??\n";
    string pilgan2[50]={"a. bisa","b. mungkin","c. tidak","d. benar semua"};
	for (i=0;i<=3;i++)
{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";        
	cout<<"3. Siapa saja orang yang beresiko terifeksi covid-19??\n";
	string pilgan3[50]={"a. Orang dengan penyakit tertetu,lansia dan anak-anak","b. benar semua","c. orang sehat","d. orang berdiam dirumah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";				
	cout<<"4. Cara mencegah penularan covid-19 pada kelompok orang yang rentam??\n";
	string pilgan4[50]={"a. sering cuci tangan,meyemprotkan cairan desinvektan,jaga jarak dengan orang sedang sakit ","b. jaga kesehatan","c. tidak menyemprotkan desinvektan dan tidak jaga jarak  ","d. benar semua"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban Anda : ";
 if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
  cout<<"\n";       
    cout<<"5. Mnakah yang lebih rentam terifeksi covid-19 apakah lansia atau orang yang lebih mudah??\n";
    string pilgan5[50]={"a. anak-anak","b. mudah","c. jawaban a dan b benar","d. lansia"};  

	
for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"6. Apa saja jenis penyakit yang membuat penderitanya rentam terhadap civid-19 ??\n";
	string pilgan6[50]={"a. penderita payudara","b. penyaki jantung:v","c. penyakit kardiovakskular,diabetes dan penyakit ginjal","d. ganguan jiwa"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban Anda : ";
cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}     
	cout<<"\n";
	cout<<"7. Berapa lama masa inkubasi covid-19??\n";
	string pilgan7[50]={"a. 1 hingga 12 hari","b. 3 hingga 17 hari ","c. 1 bulan ","d. 1 hingga 14 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban Anda : ";
cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
cout<<"8. Apa itu covid-19??\n";
	string pilgan8[50]={"a. penyakit yang dapat menular","b. penyakit yang tidak dapat menular","c. penyakit yang dapat mematikan","d. jawaban d dan b beanar"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
cout<<"\n";
	cout<<"9. Apakah covid-19 perlu dikhawatirkan??\n";
	string pilgan9[50]={"a. tidak","b. iya","c. jangan panik","d. jawaban semua benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
cout<<"\n";
	cout<<"10. Apakah covid-19 dapat melekat pada benda mati??\n";
	string pilgan10[50]={"a. iya","b. mungkin","c. tidak","d. jawaban a salah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
           if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<endl;
	
}
