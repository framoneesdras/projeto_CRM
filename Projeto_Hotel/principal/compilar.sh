# Com o CMD aberto na pasta "Projeto_Hotel", no windows, siga os seguintes passos para compilar:

cd include/
g++ -c *.cpp 
cd ..
cd principal/
g++ -c *.cpp
cd ..
g++ include/*.o principal/*.o -o executar_interface
executar_interface.exe

//para compilar, por enquanto, é preciso adicionar os arquivos de src em include. A classe "hospede" está dando algum erro, ainda tentando identificar
