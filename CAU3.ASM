INCLUDE LIB1.ASM
.MODEL small
.STACK 100h
.DATA
  mTieuDe  db 13, 10, 'LIEU MAY TINH CO FPU'
           db 13, 10, '-------------------------------'
           db 13, 10, 'May tinh dnag dung co FPU: $'
  mCo      db 'Co!$'
  mKhong   db 'Khong!$'
  mTiepTuc db 13,10,'Co tiep tuc chuong trinh (c/k)? $'
.CODE
  PUBLIC _CAU3
  _CAU3 PROC
    MAIN:
        mov        ax, @data
        mov        ds, ax

        CLRSCR
        HienString mTieuDe

        xor        ax, ax
        
        int        11h
        shr        al, 2

        jnc        Khong
        HienString mCo
        jmp        TiepTuc
  Khong:
        HienString mKhong
  TiepTuc:
                HienString mTiepTuc
                mov        ah, 01h
                int        21h
                cmp        al,'c'
                jne        Exit
                jmp        MAIN
  Exit: 
        ret
        INCLUDE    LIB2.ASM
        INCLUDE    LIB3.ASM
_CAU3 ENDP
END