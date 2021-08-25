help:
	@echo Build on Windows with Mingw:
	@echo "  $$ make mingw"
	@echo Build on Linux:
	@echo "  $$ make linux"

linux:
	rm -rf ./helloworld
	gcc -o helloworld src/helloworld.c -Wall `pkg-config --cflags --libs gtk+-3.0` -export-dynamic

mingw:
	rm -rf ./helloworld.exe
	gcc `pkg-config --cflags gtk+-3.0` -o helloworld.exe src/helloworld.c `pkg-config --libs gtk+-3.0`
