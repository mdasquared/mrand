CC=gcc
AR=ar
CFLAGS=-IInclude -fPIE -std=gnu99 -D_USE_CRAND

RM=rm

LIB=libmrand.a

LIB_SRC=Rand/mrand.c
LIB_OUT=mrand.o

all: build clean

build:
	$(CC) -c $(LIB_SRC) $(CFLAGS)
	$(AR) rcs $(LIB) $(LIB_OUT)

clean:
	$(RM) $(LIB_OUT)
