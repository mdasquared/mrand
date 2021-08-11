CC=gcc
AR=ar
CFLAGS=-IInclude -fPIC -std=c99

RM=rm

LIB=libmrand.a

LIB_SRC=Rand/mrand.c
LIB_OUT=mrand.o

all: build clean

build:
	for src in $(LIB_SRC); do \
		$(CC) -c $$src $(CFLAGS); \
	done
	$(AR) rcs $(LIB) $(LIB_OUT)

clean:
	for out in $(LIB_OUT); do \
		$(RM) $$out; \
	done
