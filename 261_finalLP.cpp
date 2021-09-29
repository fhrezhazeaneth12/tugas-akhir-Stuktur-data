#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>
#include <iomanip>
int xx;
using namespace std;
//nb = nbbarang
//kg = kategori
//dar = daerahjual
//hrg = hrg
//jk =jumlah kirim
//jb =jumlah barang
//tk = tipe kirim
typedef struct
{
	char tipe[20],nb[100],tk;
	int berat,jb,total;
	float hrg;
}data;
data kirim[100];
void ending(data kirim[],int isi ,int menu)
{	int i;
	if(menu==1)
	{for(i=0;i<=isi;i++)
			{
			cout<<"\n"<<setw(3)<<i+1<<setw(20)<<kirim[i].tipe<<setw(25)<<kirim[i].nb<<setw(10)<<kirim[i].berat<<setw(15)<<kirim[i].jb<<setw(15)<<kirim[i].hrg;;
			}cout << endl;}
	if(menu==2)
	{for(i=isi ;i>=0;i--)
			{
			cout<<"\n"<<setw(3)<<i+1<<setw(20)<<kirim[i].tipe<<setw(25)<<kirim[i].nb<<setw(10)<<kirim[i].berat<<setw(15)<<kirim[i].jb<<setw(15)<<kirim[i].hrg;;
			}cout << endl;
	}
	}

void bubble_sortberat(data kirim[], int size, int menu)
{
	int i, j;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	for(i=0;i<=size;i++)
			{
				for(j=0;j<=size-1-i;j++)
				{
					if(kirim[j].hrg>kirim[j+1].hrg)
					{
						swap(kirim[j],kirim[j+1]);
					}
				}
			}
	ending(kirim,size ,menu);
}
void inst_sortberat(data kirim[], int size1, int menu)
{
	int i,j;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	for(i=1;i<=size1;i++)
	{
		j=i-1;
		while(kirim[i].hrg<kirim[j].hrg&&j>=0)
		{
			swap(kirim[j],kirim[j+1]);
	
		}		}
		ending(kirim,size1 ,menu);
		}
void selection_sortberat(data kirim[], int size2, int menu)
{
	int i, j;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	for (i=0; i<size2; i++)
	for (j=i+1; j<=size2; j++)
	if (kirim[i].hrg > kirim[j].hrg)
	{
		swap(kirim[i],kirim[j]);
	}
	ending(kirim,size2 ,menu);
}			
void shell_sortberat(data kirim[], int size2, int menu)
{
	int i, j, k;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	for (k=size2/2; k>0; k/=2)
	{
		for (i=k; i<=size2; i++)
		{
			for (j=i-k;j>=0; j-=k)
			{
				if (kirim[j+k].hrg>=kirim[j].hrg)
				{
					break;
				}
				else
				{swap(kirim[j],kirim[j+k]);
					break;}}}}
	ending(kirim,size2 ,menu);
	}
void quick_sortberat(data kirim[], int l, int size3, int menu)
{
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	int a,up,down;
	int temp;
	if(l>size3)
	return;
	a=kirim[l].hrg;
	up=size3;
	down=l;
	while(down<up)
	{
		while (kirim[down].hrg<=a)
	down++;
	while(kirim[up].hrg>a)
	up--;
	if(down<up)
	{
		temp=kirim[down].hrg;
		kirim[down].hrg=kirim[up].hrg;
		kirim[up].hrg=temp;}}
		kirim[l].hrg=kirim[up].hrg;
		kirim[up].hrg=a;
		ending(kirim,size3 ,menu);
}
void bubble_sortnb(data kirim[], int size4 ,int menu)
{ cout<<"SIZE Pertama ="<<size4; cout<<endl;
	int i, j;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	for(i=0;i<=size4;i++)
			{
				
				for(j=0;j<=size4-1-i;j++)
				{
					if(strcmp(kirim[j].nb,kirim[j+1].nb)>0)
					{	swap(kirim[j],kirim[j+1]);	}}}
					ending(kirim,size4 ,menu);
}

void inst_sortnb(data kirim[], int size5, int menu)
{
	int i,j;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			
	for(i=1;i<=size5;i++)
	{
		j=i-1;
		while(strcmp(kirim[i].nb,kirim[j].nb)<0&&j>=0)
		{
			swap(kirim[j],kirim[j+1]);
	
		}		}
	ending(kirim,size5 ,menu);}
void selection_sortnb(data kirim[], int size6, int menu)
{
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	int i, j;
	for (i=0; i<=size6; i++)
	for (j=i+1; j<=size6; j++)
	if (strcmp(kirim[i].nb,kirim[j].nb)>0)
	{
		swap(kirim[i],kirim[j]);
	}
	ending(kirim,size6 ,menu);
}	
void shell_sortnb(data kirim[], int size7, int menu)
{
	int i, j, k;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	for (k=size7/2; k>0; k/=2)
	{
		for (i=k; i<=size7; i++)
		{
			for (j=i-k;j>=0; j-=k)
			{
				if (strcmp(kirim[j+k].nb,kirim[j].nb)>=0)
				{
					break;
				}
				else
				{swap(kirim[j],kirim[j+k]);
					break;}}}}
	ending(kirim,size7 ,menu);}	
void quick_sortnb(data kirim[], int lb, int size8 , int menu)
{
	int up,down;
	char *temp,*a;
	cout << "Data yang sudah diurutkan : "<< endl;
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
			cout<<setw(3)<<"No"<<setw(20)<<"Tipe Barang"<<setw(25)<<"Nama Barang"<<setw(10)<<"berat "<<setw(15)<<"Jumlah Barang"<<setw(15)<<"Harga Barang";
			cout<<"\n------------------------------------------------------------------------------------------------------------------\n";
	if(lb>size8)
	return;
	a=kirim[lb].nb;
	up=size8;
	down=lb;
	while(down<up)
	{
		while (kirim[down].nb<=a)
	down++;
	while(kirim[up].nb>a)
	up--;
	if(down<up)
	{
		temp=kirim[down].nb;
		strcpy(kirim[down].nb,kirim[up].nb);
		strcpy(kirim[up].nb,temp);}}
		strcpy(kirim[lb].nb,kirim[up].nb);
		strcpy(kirim[up].nb,a);
		ending(kirim,size8 ,menu);
}
void searching_squential (data kirim[],int *car,int size, int menu){
	int i,found;
	found=0;cout<<size;
	for(i=0;i<=size;i++)
	{
		if (kirim[i].berat==*car)
		{
		found=1;
	    cout<<" Data Barang ke - "<<i+1<<endl<<endl;
    	cout<<" Tipe  Barang  = "<<kirim[i].tipe<<endl;
		cout<<" Nama Barang   = "<<kirim[i].nb<<endl;
    	cout<<" Berat Barang/Satuan = "<<kirim[i].berat<<endl;
    	cout<<" Jumlah Barang  = "<<kirim[i].jb<<endl;
		}
	}	
	if(found==0)
	cout<<"--Data Berat Tersebut Tidak Ditemukan--";
}
void searching_binary (data kirim[],int *car,int size, int menu){
	int f,l,i,found;
	found=0;
	f=0;//low
	l=size-1;//high
	while (f<=l)
	{
		i=(f+l)/2;
		if(*car<kirim[i].berat)
		l=i-1;
		else if(*car>kirim[i].berat)
		f=l+1;
		else
		f=l+1;
	}
		for(i=0;i<=size;i++)
		{
			if(*car==kirim[i].berat)
			{
			found=1;
     		cout<<" Data Barang ke - "<<i+1<<endl;
    		cout<<" Tipe  Barang  = "<<kirim[i].tipe<<endl;
    		cout<<" Nama Barang   = "<<kirim[i].nb<<endl;
    		cout<<" Berat Barang/Satuan = "<<kirim[i].berat<<endl;
    		cout<<" Jumlah Barang  = "<<kirim[i].jb<<endl;
			}
		}
		if(found==0)
		cout<<"--Data Berat Tersebut Tidak Ditemukan--"<<endl;
}
void searching_squentialchar (data kirim[],string *nam,int size, int menu)
{
	int i,found;
	found=0;
	for(i=0;i<=size;i++)
	{
		if (kirim[i].tipe==*nam) 
		{
			 found=1;
		     cout<<" Data Barang ke - "<<i+1<<endl;
		     cout<<" Tipe  Barang  = "<<kirim[i].tipe<<endl;
		     cout<<" Nama Barang   = "<<kirim[i].nb<<endl;
		     cout<<" Berat Barang/Satuan = "<<kirim[i].berat<<endl;
		     cout<<" Jumlah Barang  = "<<kirim[i].jb<<endl;
		}
	}
	if(found==0)
	cout<<"--Data Tipe Tersebut Tidak Ditemukan--";
}
void searching_binarychar (data kirim[],string *nam,int size, int menu)
{
	int f,l,i,found;
	found=0;
	f=0;//low
	l=size-1;//high
	while (f<=l)
	{
		i=(f+l)/2;
		if(*nam<kirim[i].tipe)
		l=i-1;
		else if(*nam>kirim[i].tipe)
		f=l+1;
		else
		f=l+1;}
		for(i=0;i<=size;i++)
		{
			if(*nam==kirim[i].tipe)
			{
				found=1;
    			cout<<" Data Barang ke - "<<i+1<<endl;
    			cout<<" Tipe  Barang  = "<<kirim[i].tipe<<endl;
 			    cout<<" Nama Barang   = "<<kirim[i].nb<<endl;
  				cout<<" Berat Barang/Satuan = "<<kirim[i].berat<<endl;
   				  cout<<" Jumlah Barang  = "<<kirim[i].jb<<endl;
			}
		}
		if(found==0)
		cout<<"--Data Tipe Tersebut Tidak Ditemukan--"<<endl;
	}
void searching_squentialjk (data kirim[],string *nam,int size, int menu)
{
	int i,found;
	found=0;
	for(i=0;i<=size;i++)
	{
		if (kirim[i].nb==*nam)
		{
			found=1;
   			cout<<" Data Barang ke - "<<i+1<<endl;
			cout<<" Tipe  Barang  = "<<kirim[i].tipe<<endl;
    		cout<<" Nama Barang   = "<<kirim[i].nb<<endl;
    		cout<<" Berat Barang/Satuan = "<<kirim[i].berat<<endl;
    		cout<<" Jumlah Barang  = "<<kirim[i].jb<<endl;
		}
	}	
	if(found==0)
	cout<<"--Data Nama Barang Tersebut Tidak Ditemukan--";
}
void searching_binaryjk (data kirim[],string *car,int size, int menu)
{
	int f,l,i,found;
	found=0;
	f=0;//low
	l=size-1;//high
	while (f<=l)
	{
		i=(f+l)/2;
		if(*car<kirim[i].nb)
		l=i-1;
		else if(*car>kirim[i].nb)
		f=l+1;
		else
		f=l+1;
	}
		for(i=0;i<=size;i++)
		{
			if(*car==kirim[i].nb)
			{
				found=1;
    			cout<<" Data Barang ke - "<<i+1<<endl;
    			cout<<" Tipe  Barang  = "<<kirim[i].tipe<<endl;
    			cout<<" Nama Barang   = "<<kirim[i].nb<<endl;
 				cout<<" Berat Barang/Satuan = "<<kirim[i].berat<<endl;
    			cout<<" Jumlah Barang  = "<<kirim[i].jb<<endl;
			}
		}
		if(found==0)
		cout<<"--Data Nama barang Tersebut Tidak Ditemukan--"<<endl;
}
FILE *last;
int main()
{
	cout<<"***************************************\n";
	cout<<"*\tTUGAS PROJECT SEMESTER 2      *\n";
	cout<<"*\t123170044 - 123170045         *\n";
	cout<<"***************************************\n";
	system("color F0");
	cout<<endl<<endl;
	int menu1,n,i,y;
	char nbfile[100];
	do
	{	cout << "============================================";
		cout << "\n\t    INFORMATIKA EXPRESS ";
		cout << "\n  Jl.Babarasari No.2 , Sleman ,Yogyakarta";
		cout << "\n============================================"<<endl;
		cout << "\n============================================";
		cout << "\n\t---S E L A M A T D A T A N G---";
		cout << "\n============================================";
		cout << " \n\t*****MENU***** ";
		cout << " \n1. Input Data Barang  ";
		cout << " \n2. Tampilan Data Barang  ";
		cout << " \n3. Sorting ";
		cout << " \n4. Searching ";
		cout << " \n5. Exit ";
		cout << " \n\nPilih Menu : ";
		cin >> menu1;
	switch(menu1)
		{
			case 1 :
			 cout<<" ~:::Masukkan Data untuk Disimpan dalam File:::~ "<<endl;
              cout<<"=============================================="<<endl<<endl;
              cout<<"Nama File yang akan dibuat (.txt)	= ";cin>>nbfile;
              last=fopen(nbfile,"wb");
			cout<<"Banyak Tipe Barang\t\t= ";
			cin>>n;
		for(i=0;i<n;i++)
		{	cout<<endl;
			cout<<" Data Barang ke - "<<i+1<<endl;
			cin.ignore();
			cout<<" Tipe  Barang(pecah belah/dokumen/paket)	= ";cin.getline(kirim[i].tipe,100);
			cout<<" Nama Barang				 	= ";cin.getline(kirim[i].nb,100);
			cout<<" Berat Barang/Satuan(gram)		 	= ";cin>>kirim[i].berat;
			cout<<" Jumlah Barang					= ";cin>>kirim[i].jb;
			cout<<endl;
			kirim[i].hrg=kirim[i].berat*kirim[i].jb*10;
		 }
		 
			kirim[0].total=i-1;
                 fwrite(&kirim,sizeof(kirim),1,last);
                 cout<<endl;
              fclose(last);break;
		case 2 :
				cout<<" ~:::  Tampilkan Data dari File  :::~ "<<endl;
               cout<<"======================================"<<endl<<endl;
               cout<<"File yang ingin ditampilkan : ";cin>>nbfile;
               last=fopen(nbfile,"r");
               fread (&kirim, sizeof (kirim), 1 , last); 
               if ((last=fopen(nbfile,"r"))==NULL)
                 {cout<<"File TIDAK ADA!!!\n";}
               else
            
                    for(i=0;i<=kirim[0].total;i++)
				{	cout<<endl;
					cout<<" Data Barang ke - "<<i+1<<endl;
					cout<<" Tipe  Barang				= "<<kirim[i].tipe<<endl;
					cout<<" Nama Barang 				= "<<kirim[i].nb<<endl;
					cout<<" Berat Barang/Satuan(gram)		= "<<kirim[i].berat<<endl;
					cout<<" Jumlah Barang				= "<<kirim[i].jb<<endl;
					cout<<" Biaya Kirim				= "<<kirim[i].hrg<<" Rupiah"<<endl;
					cout<<endl;
					xx=kirim[0].total;
					fread (&kirim, sizeof (kirim), 1 , last);
				}
                   cout<<endl;
                   fclose(last); 
                   break;
		case 3:
			{
			cout << "1. Nama Barang\n";
			cout << "2. Harga Barang\n";
			cout<<" Sorting Sesuai : ";
			cin >> menu1;cout<<endl;
				switch(menu1)
			{
			
				case 1 :
			cout << "1. Bubble Sort\n";
			cout << "2. Insertion Sort\n";
			cout << "3. Selection Sort\n";
			cout << "4. Shell Sort\n";
			cout << "5. Quick Sort\n";
			cout<<" Jenis Sorting yang dipilih : ";cin >> menu1;cout<<endl; 
			switch(menu1)
			{
			case 1:
				cout << "1. Ascending"<<endl;
				cout << "2. Descending\n";
				cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;	
				 switch(menu1)
				 {	case 1:
					 cout << "\nBubble Sort\n";
					bubble_sortnb(kirim,xx,menu1);break;
				 case 2:
			cout << "\nBubble Sort\n";
			bubble_sortnb(kirim,xx,menu1);
			}break;
			 
			case 2:
				cout << "1. Ascending"<<endl;
				cout << "2. Descending\n";
				cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;	
				 switch(menu1)
				 {	case 1:
					 cout << "\nInsertion Sort\n";
					inst_sortnb(kirim,xx, menu1);
			break;
				 case 2:
			cout << "\nInsertion Sort\n";
			inst_sortnb(kirim,xx, menu1);
			break;} break;
			case 3:
				cout << "1. Ascending"<<endl;
				cout << "2. Descending\n";
				cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;	
				 switch(menu1)
				 {	case 1:
					 cout << "\nSelection Sort\n";
					selection_sortnb(kirim,xx, menu1);
			break;
				 case 2:
			cout << "\nSelection Sort\n";
			selection_sortnb(kirim,xx, menu1);
			break;}break;
			case 4:
				cout << "1. Ascending"<<endl;
				cout << "2. Descending\n";
				cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;	
				 switch(menu1)
				 {	case 1:
					 cout << "\nShell Sort\n";
					shell_sortnb(kirim,xx, menu1);
			break;
				 case 2:
			cout << "\nShell Sort\n";
			shell_sortnb(kirim,xx, menu1);
			break;}break;
			case 5:
				cout << "1. Ascending"<<endl;
				cout << "2. Descending\n";
				cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;	
				 switch(menu1)
				 {	case 1:
					 cout << "\nQuick Sort\n";
					quick_sortnb(kirim, 0, xx ,menu1);
					break;
					case 2:
					cout << "\nQuick Sort\n";
					quick_sortnb(kirim, 0, xx ,menu1 );
					}break;}break;	
			case 2 :
			cout << "1.Bubble Sort\n";
			cout << "2.Insertion Sort\n";
			cout << "3.Selection Sort\n";
			cout << "4.Shell Sort\n";
			cout << "5.Quick Sort\n";
			cout<<" Jenis Sorting yang dipilih : ";cin >> menu1;cout<<endl; 
			switch(menu1)
			{
				case 1:
				cout << "1. Ascending"<<endl;
				cout << "2. Descending\n";
				cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;	
				 switch(menu1)
				 {	case 1:
					 cout << "\nBubble Sort\n";
					bubble_sortberat(kirim,xx, menu1);
			break;
				 case 2:
			cout << "\nBubble Sort\n";
			bubble_sortberat(kirim,xx, menu1);
			}break;
			case 2 :
					cout << "1. Ascending"<<endl;
					cout << "2. Descending\n";
					cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;
				switch(menu1)
				{case 1 :cout << "\nInsertion Sort\n";
					inst_sortberat(kirim,xx, menu1);
					break;
				
					case 2 :cout << "\nInsertion Sort\n";
								inst_sortberat(kirim,xx, menu1);
					break;}break;
			
			case 3 :
					cout << "1. Ascending"<<endl;
					cout << "2. Descending\n";
					cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;
					switch(menu1)
					{
						case 1 : cout << "\nSelection Sort\n";
							selection_sortberat(kirim, xx, menu1);
							break;
						case 2 : cout << "\nSelection Sort\n";
								selection_sortberat(kirim, xx, menu1);
							break;}break;
			case 4 : cout << "1. Ascending"<<endl;
					cout << "2. Descending\n";
					cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;
					switch(menu1)
					{ 
			case 1 : cout << "\nShell Sort\n";
					shell_sortberat(kirim,xx, menu1);
					break;
			case 2 : cout << "\nShell Sort\n";
			shell_sortberat(kirim,xx, menu1);
			break;}break; 
			case 5: cout << "1. Ascending"<<endl;
					cout << "2. Descending\n";
					cout<<" Pilihan jenis urutan : ";cin >> menu1;cout<<endl;
					switch(menu1)
					{ case 1 : cout<<"\nQuick Sort\n";
					quick_sortberat(kirim, 0, xx, menu1);
			break;
					case 2 : cout<<"\nQuick Sort\n";
					quick_sortberat(kirim, 0, xx, menu1);
			break;
				}break;
			}break;
		}break;}
		case 4 :
		{
				int *cari; string *jk;string *nam;
				cout << "SEARCHING" ;
				cout << "\nCari Berdasarkan : ";
				cout << "\n1. Berat \n2. Tipe\n3. Nama barang"<<endl;
				cout << "Pilih : "; cin >> menu1;
				switch(menu1){
					case 1:{
						int a;
						cout<<"\n Cari berdasarkan Berat Barang"<<endl;
						cout<<"Masukkan berat barang yang anda cari = ";
						cin >> a;
						cari=&a;
						cout<<" \nCara Pencarian Data "<<endl;
				cout << "1. Sequential ";
				cout << "\n2. Binary "<<endl;
				cout << "Pilih Cara : ";
				cin >> menu1;
				switch (menu1)
				{	case 1 :
						searching_squential (kirim,cari,xx, menu1);
						break;
					case 2 :
					searching_binary (kirim,cari,xx, menu1);
					break;
					}
					}break;
					case 2:{
						string cr;
						cout<<"\n Dicari berdasarkan Tipe"<<endl;
						cout<<"Masukkan tipe yang anda cari = ";cin>>cr;
						nam=&cr;
				cout<<" \nCara Pencarian Data "<<endl;
				cout << "1. Sequential ";
				cout << "\n2. Binary "<<endl;
				cout << "Pilih Cara : ";
				cin >> menu1;
				switch (menu1)
				{
					case 1 :
						searching_squentialchar (kirim,nam,xx, menu1);
						break;
					case 2:
						searching_binarychar (kirim,nam,xx, menu1);
						break;
				}
				}break;
				case 3:{
				string crk;
				cout<<"\n Dicari berdasarkan Nama barang"<<endl;
				cout<<"Masukkan Nama barang yang anda cari = ";
				cin>>crk;
				jk=&crk;
				cout<<" \nCara Pencarian Data "<<endl;
				cout << "1. Sequential ";
				cout << "\n2. Binary "<<endl;
				cout << "Pilih Cara : ";
				cin >> menu1;
				switch (menu1)
				{
					case 1 :
						searching_squentialjk (kirim,jk,xx , menu1);break;
					case 2:
						searching_binaryjk (kirim,jk,xx , menu1);break;
				}
				}						
				}
		}
		break;
		case 5:
		exit (0);
		}//casebesar
			do 
		{
			cout << "\n=================================";
			cout << "\n||\tKembali pada menu awal? ||";
			cout << "\n|| \t 1. Ya \t\t\t||";
			cout << "\n|| \t 2. Tidak\t\t||";
			cout << "\n================================\n";
			cout << "\nMasukkan Pilihan Anda : ";
			cin >> y;
			cout << flush;
			system("cls");
			if (y==2)
				exit (0);
			
			}
			while (y>2);
		}
		while (y==1);
}
