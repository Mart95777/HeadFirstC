
@rem generating hfcal.o as Position Independent Code
gcc -I./includes -fPIC -c hfcal.c -o hfcal2.o

gcc -shared hfcal2.o -o hfcal2.dll

gcc -I./includes -c elliptical.c -o elliptical2.o

@rem build elliptical test program
gcc elliptical2.o -L./libs -lhfcal2 -o elliptical2

