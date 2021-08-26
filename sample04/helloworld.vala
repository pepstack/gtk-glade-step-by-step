// helloworld.vala
//   My first vala app
//
// Compile:
//   $ valac -o helloworld helloworld.vala
// Run:
//   $ ./helloworld
//
// Generate C source codes (helloworld.c):
//   $ valac -C helloworld.vala
//
using GLib;

public class HelloVala: GLib.Object {
    public static int main (string[] args) {
        stdout.printf ("Hello world!\n");
        return 0;
    }
}