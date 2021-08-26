## How to build gtkmap with VisualStudio2015

### Downloads gtk+-bundle from http://www.tarnyko.net/dl/gtk.htm

    [gtk+-bundle_3.6.4-20130513_win32.zip](http://www.tarnyko.net/repo/gtk3_build_system/gtk+-bundle_3.6.4-20130513_win32.zip)

    [gtk+-bundle_3.6.4-20130513_win64.zip](http://www.tarnyko.net/repo/gtk3_build_system/gtk+-bundle_3.6.4-20130513_win64.zip)


### Enable Windows System Environment Variables

  1) MINGW64_DEV_ROOT=C:\DEVPACK\gtk+-bundle_3.6.4-20130513_win64

  2) %Path%=...;%MINGW64_DEV_ROOT%\bin


###  Visual Studio Config adds

- C++ Include Dirs:

    $(MINGW64_DEV_ROOT)\include\atk-1.0;
    $(MINGW64_DEV_ROOT)\include\gio-win32-2.0;
    $(MINGW64_DEV_ROOT)\include\pango-1.0;
    $(MINGW64_DEV_ROOT)\include\cairo;
    $(MINGW64_DEV_ROOT)\include\gdk-pixbuf-2.0;
    $(MINGW64_DEV_ROOT)\include\glib-2.0;
    $(MINGW64_DEV_ROOT)\include\harfbuzz;
    $(MINGW64_DEV_ROOT)\include\freetype2;
    $(MINGW64_DEV_ROOT)\include\pixman-1;
    $(MINGW64_DEV_ROOT)\include\libpng16;
    $(MINGW64_DEV_ROOT)\include\librsvg-2.0;
    $(MINGW64_DEV_ROOT)\include\gtk-3.0;
    $(MINGW64_DEV_ROOT)\lib\glib-2.0\include;

- Link Lib Dirs:

    $(MINGW64_DEV_ROOT)\lib

- Link Libs:

    atk-1.0.lib;
    cairo.lib;
    fontconfig.lib;
    gailutil.lib;
    gdk_pixbuf-2.0.lib;
    gdk-win32-3.0.lib;
    gio-2.0.lib;
    glib-2.0.lib;
    gmodule-2.0.lib;
    gobject-2.0.lib;
    gthread-2.0.lib;
    gtk-win32-3.0.lib;
    pango-1.0.lib;
    pangocairo-1.0.lib;
    pangoft2-1.0.lib;
    pangowin32-1.0.lib;

### Show code samples

    run CMD -> gtk3-demo.exe
