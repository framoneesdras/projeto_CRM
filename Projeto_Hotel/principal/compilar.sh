# Com o CMD aberto na pasta "Projeto_Hotel", no windows, siga os seguintes passos para compilar:

cd include/
g++ -c *.cpp 
cd ..
cd principal/
g++ -c *.cpp
cd ..
g++ include/*.h principal/*.cpp -o executar_interface
executar_interface.exe

// para compilar, por enquanto, é preciso adicionar os arquivos de src em include. 


g++ *.h *.cpp -o executar_interface


#Com tudo na mesma pasta

#Dados.csv tem que ficar junto ao exercutável

g++ -c *.cpp
g++ *.h *.cpp -o executar_interface
executar_interface.exe

#Nova tentantiva

cd src/
g++ -c *.cpp
cd ..
cd principal/
g++ -c main.cpp
cd ..
g++ src/*.o principal/main.o -o principal/executar_interface
cd principal
executar_interface.exe