# Com o CMD aberto na pasta "Projeto_Hotel", no windows, siga os seguintes passos para compilar:

cd include/
g++ -c *.cpp 
cd ..
g++ principal\\main.cpp include\\*.o -o executar_interface
executar_interface.exe