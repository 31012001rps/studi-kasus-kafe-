#include<iostream>
using namespace std;
int main (){
 int pilih,harga,jumlah,total,bayar,kembali,ongkir,diskon,jarak,total_bayar;
 char yt;
 do 
 {
 cout<<"^-^-^-^-^-^-^-^-^-^-^-^-^-^-^"<<endl;
 cout<<"    Menu Makanan Kafe DIR"<<endl;
 cout<<"^-^-^-^-^-^-^-^-^-^-^-^-^-^-^"<<endl;
 cout<<"    Menu Makanan Harga"<<endl;
 cout<<"1. Ayam Geprek  Rp.21.000"<<endl;
 cout<<"2. Ayam Goreng  Rp.17.000"<<endl;
 cout<<"3. Udang Goreng Rp.19.000"<<endl;
 cout<<"4. Cumi Goreng  Rp.20.000"<<endl;
 cout<<"5. Ayam Bakar   Rp.25.000"<<endl;
 cout<<"^-^-^-^-^-^-^-^-^-^-^-^-^-^-^\n"<<endl;
 cout<<"Masukan No Menu Pilihan : ";
 cin>>pilih;
 switch (pilih){
 case 1:
  cout<<"\nAyam Geprek"<<endl;
  harga=21000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
   total_bayar=total+ongkir;
	cout<<"Masukkan jarak ke rumah anda: ";
	cin>>jarak;
   if(jarak <= 3){
		ongkir = 15000;
	}
	else if(jarak >= 3){
		ongkir = 25000;
	}
		if(total > 25000){
			ongkir-=3000;
		}else if(total > 50000){
			ongkir-=5000;
			diskon = total * (10/100);		
		}else if(total > 150000){
			ongkir-=8000;
			diskon = total * (35/100);
		}
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Ongkir	: "<<ongkir<<endl;
  cout<<"Diskon	: "<<diskon<<endl;
  cout<<"Total bayar : "<<total_bayar<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
  kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>yt;
  break;
 case 2:
  cout<<"\nAyam Goreng"<<endl;
  harga=17000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
   total_bayar=total+ongkir;
   cout<<"Masukkan jarak ke rumah anda: ";
	cin>>jarak;
   if(jarak <= 3){
		ongkir = 15000;
	}
	else if(jarak >= 3){
		ongkir = 25000;
	}
		if(total > 25000){
			ongkir-=3000;
		}else if(total > 50000){
			ongkir-=5000;
			diskon = total * (10/100);		
		}else if(total > 150000){
			ongkir-=8000;
			diskon = total * (35/100);
		}
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Ongkir	: "<<ongkir<<endl;
  cout<<"Diskon	: "<<diskon<<endl;
  cout<<"Total bayar : "<<total_bayar<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>yt;
  break;
 case 3:
  cout<<"\nUdang Goreng"<<endl;
   harga=19000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
   total_bayar=total+ongkir;
   cout<<"Masukkan jarak ke rumah anda: ";
	cin>>jarak;
   if(jarak <= 3){
		ongkir = 15000;
	}
	else if(jarak >= 3){
		ongkir = 25000;
	}
		if(total > 25000){
			ongkir-=3000;
		}else if(total > 50000){
			ongkir-=5000;
			diskon = total * (10/100);		
		}else if(total > 150000){
			ongkir-=8000;
			diskon = total * (35/100);
		}
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Ongkir	: "<<ongkir<<endl;
  cout<<"Diskon	: "<<diskon<<endl;
  cout<<"Total bayar : "<<total_bayar<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
  kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>yt;
  break;
 case 4:
  cout<<"\nCumi Goreng"<<endl;
  harga=20000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
   total_bayar=total+ongkir;
   	cout<<"Masukkan jarak ke rumah anda: ";
	cin>>jarak;
	   	if(jarak <= 3){
		ongkir = 15000;
	}
	else if(jarak >= 3){
		ongkir = 25000;
	}
		if(total > 25000){
			ongkir-=3000;
		}else if(total > 50000){
			ongkir-=5000;
			diskon = total * (10/100);		
		}else if(total > 150000){
			ongkir-=8000;
			diskon = total * (35/100);
		}
  
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Ongkir	: "<<ongkir<<endl;
  cout<<"Diskon	: "<<diskon<<endl;
  cout<<"Total bayar : "<<total_bayar<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
  kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>yt;
  break;
  case 5:
  cout<<"\nAyam Bakar"<<endl;
  harga=25000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
   total_bayar=total+ongkir;
   cout<<"Masukkan jarak ke rumah anda: ";
	cin>>jarak;
    	if(jarak <= 3){
		ongkir = 15000;
	}
	else if(jarak >= 3){
		ongkir = 25000;
	}
		if(total > 25000){
			ongkir-=3000;
		}else if(total > 50000){
			ongkir-=5000;
			diskon = total * (10/100);		
		}else if(total > 150000){
			ongkir-=8000;
			diskon = total * (35/100);
		}
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Ongkir	: "<<ongkir<<endl;
  cout<<"Diskon	: "<<diskon<<endl;
  cout<<"Total bayar : "<<total_bayar<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
  kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>yt;
  break;
 default:
 cout<<"pilihan yang anda masukkan tidak tersedia";
 }
 } 
 while (yt/='Y');
 cout<<"Terimah Kasih Atas Kunjungan Anda"<<endl;
 cout<<"\n\n\t\t\tYogyakarta, 31 Maret 2022";
 cout<<"\n\t\t\t\t  DIR"<<endl;
 return 0;
}
