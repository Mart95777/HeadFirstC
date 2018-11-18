
@rem generating hfcal.o and using .h from ./includes
gcc -I./includes -c hfcal.c -o hfcal.o

@rem generating elliptical.o
gcc -I./includes -c elliptical.c -o elliptical.o

if not exist %cd%\libs (mkdir %cd%\libs)

@rem building archive file
ar -rcs ./libs/libhfcal.a hfcal.o

@rem build elliptical test program
gcc elliptical.o -L./libs -lhfcal -o elliptical
