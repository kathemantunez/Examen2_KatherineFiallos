exe:    main.cpp seleccion.o Nodo.o Lista.o
	g++ main.cpp seleccion.o Nodo.o Lista.o -o exe

main.o:	main.cpp seleccion.h Nodo.h Lista.h
	g++ -c main.cpp

seleccion.o:	seleccion.cpp seleccion.h
	g++ -c seleccion.cpp

Nodo.o:	Nodo.cpp Nodo.h seleccion.h
	g++ -c Nodo.cpp

Lista.o:	Lista.cpp Lista.h Nodo.h
	g++ -c Lista.cpp