#include <stdio.h>
#include <conio.h>
extern CAU1();
extern CAU2();
extern CAU3();
void main()
{
      char tl;
      int cn; /*chuc nang*/
      clrscr();
      printf("\n          Truong Dai hoc Mo Ha Noi");
      printf("\n          KHOA CONG NGHE THONG TIN");
      printf("\n          -----------o0o----------");
      printf("\n\n\n           BAI TAP LON MON LTHT");
      printf("\n\n\n     Cac SV thuc hien:");
      printf("\n      1. Pham Duy Dat - 2010A04");
      printf("\n      2. Mai Thi Dinh - 2010A03");
      printf("\n      3. Bui The Hai - 2010A05");
      printf("\n      4. Trinh Dang Dat - 2010A04");
      printf("\n\n\n     Co tiep tuc CT (c/k)?");
      tl=getch();
      if(tl=='c')
               {
                 L1:
                 clrscr();
                 printf("\n            CAC CHUC NANG CUA BTL");
                 printf("\n            ---------***----------");
                 printf("\n\n     1. Chuc nang SET ATT");
                 printf("\n     2. Trung binh cong cua 2 so");
                 printf("\n     3. Lieu may co FPU ?");
                 printf("\n     4. Thoat ve dos ?");
                 printf("\n\n     Hay chon: ");
                 scanf("%d",&cn);
                 switch(cn)
                 {
                 case 1: CAU1(); break;
                 case 2: CAU2(); break;
                 case 3: CAU3(); break;
                 case 4: return;
                 default: printf("\n     Nhap tu 1-3 thoi!");
                 }
     printf("\n     Co thuc hien CN chinh khac(c/k): ");
     tl=getch();
     if(tl=='c'){
      goto L1;
      }
    }
}

