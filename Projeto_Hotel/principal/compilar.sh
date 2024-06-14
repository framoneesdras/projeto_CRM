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