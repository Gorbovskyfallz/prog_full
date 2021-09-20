%include    "stud_io.inc"        ; напишем комментарий на русском 
global      _start               ; enter point of program for operating system

section     .text                
_start:     mov         eax, 0
again:      PRINT       "Hello"
            PUTCHAR     10
            inc         eax
            cmp         eax, 5
            jl          again
            FINISH
