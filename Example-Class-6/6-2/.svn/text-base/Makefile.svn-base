

TARGET := maman-bar-vala maman-bar-c 
CFLAGS=`pkg-config --cflags glib-2.0 gtk+-2.0`
LDFLAGS=`pkg-config --libs glib-2.0 gtk+-2.0` 
VALAC=valac

ALL:$(TARGET)

SRC_VALA = sub-bar.vala maman-bar.vala 

maman-bar-vala: maman-bar.vala main.vala  sub-bar.vala
	$(VALAC) -o $@ $^

maman-bar-c: main.o maman-bar.o sub-bar.o
	$(CC) -o $@ $^ $(LDFLAGS)

main.o: main.c vala.h

%.vala: %.c
	$(VALAC) -C $^ -o $@

vala.h: $(SRC_VALA)
	$(VALAC) -C -H $@  $^

clean:
	rm -f maman-bar.c sub-bar.c vala.h *.o $(TARGET)

