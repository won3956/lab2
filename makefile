dynamic_lib_calculator_make: dlcalculator.o
	gcc -o dynamic_lib_calculator_make dlcalculator.o -ldl
dlcalculator.o: dlcalculator.c
	gcc -c dlcalculator.c
clean :
	rm -f dynamic_lib_calculator_make dlcalculator.o
