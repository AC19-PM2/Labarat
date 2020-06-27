SRC = add.o izmenenie.o  pech.o search.o udalenie.o main.o details.o

all : app head.h func.h

app: $(SRC)
	g++ $(SRC) -o app

details.o : details.cpp
	g++ -c -o details.o details.cpp

add.o : add.cpp
	g++ -c -o add.o add.cpp
izmenenie.o : izmenenie.cpp 
	g++ -c -o izmenenie.o izmenenie.cpp
pech.o : pech.cpp
	g++ -c -o pech.o pech.cpp
search.o: search.cpp
	g++ -c -o search.o search.cpp
udalenie.o : udalenie.cpp
	g++ -c -o udalenie.o udalenie.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean:
	rm -rf $(SRC)
