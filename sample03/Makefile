# Makefile
# 2021-08-25

# change application name here (executable output name)
TARGET=template_app


# Linux, CYGWIN_NT, MSYS_NT, ...
shuname="$(shell uname)"
OSARCH=$(shell echo $(shuname)|awk -F '-' '{ print $$1 }')

# is MINGW(1) or not(0)
ifneq ($(findstring $(OSARCH),  "MSYS_NT MINGW64_NT MINGW32_NT"),)
	MINGW_LDFLAGS :=
else
	MINGW_LDFLAGS := -export-dynamic
endif

CFLAGS += -D$(OSARCH)

# compiler
CC = gcc

# debug or not
DEBUG ?= -g

# optimisation
OPT = -O0

# warnings
WARN = -Wall

PTHREAD = -pthread

CCFLAGS += $(DEBUG) $(OPT) $(WARN) $(PTHREAD) -pipe

GTKLIB ?= `pkg-config --cflags --libs gtk+-3.0`

# linker
LD = gcc
LDFLAGS += $(PTHREAD) $(GTKLIB) $(MINGW_LDFLAGS)

OBJS=   app_main.o

all: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(LDFLAGS)

app_main.o: src/app_main.c
	$(CC) -c $(CCFLAGS) src/app_main.c $(GTKLIB) -o app_main.o

clean:
	rm -f *.o $(TARGET)
