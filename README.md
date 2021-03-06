## gtk-glade-step-by-step

GTK Glade C Programming Study Step by Step

### References

[GTK Glade C Programming Tutorial](https://prognotes.net/gtk-glade-c-programming/)


### How to Build Samples

- Build on Windows with mingw:

        $ cd sampleXX
        $ make mingw

- Build on Linux (e.g. Ubuntu):

        $ cd sampleXX
        $ make linux

#### Samples

#### sample01

[GTK+ 3 C Program using Glade 3](https://prognotes.net/2015/06/gtk-3-c-program-using-glade-3/)


#### sample02

[GTK+ 3 Glade C Programming Template Files] https://prognotes.net/2015/07/gtk-3-glade-c-programming-template/

Build guide:

    $ make

#### sample03

[GTK 3 C Code Hello World Tutorial using Glade 3](https://prognotes.net/2016/03/gtk-3-c-code-hello-world-tutorial-using-glade-3/)

Build guide:

    $ make

#### sample04

To install Vala on 64-bit (32-bit uses 'i686' than 'x86_64')  Windows (mingw):

	$ pacman -S mingw-w64-x86_64-gcc 
	$ pacman -S mingw-w64-x86_64-pkg-config
	$ pacman -S mingw-w64-x86_64-vala
