# Com o CMD aberto na pasta "Projeto_Hotel", no windows, siga os seguintes passos para compilar:

cd src/
g++ -c *.cpp
cd ..
cd principal/
g++ -c main.cpp
cd ..
g++ src/*.o principal/main.o -o principal/executar_interface
cd principal
executar_interface.exe
