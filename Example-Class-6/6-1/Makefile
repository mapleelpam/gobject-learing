

TARGET := maman-bar-vala maman-bar-c 
CFLAGS=`pkg-config --cflags glib-2.0 gtk+-2.0`
LDFLAGS=`pkg-config --libs glib-2.0 gtk+-2.0` 

ALL:$(TARGET)

maman-bar-vala: maman-bar.vala main.vala
	valac -o $@ $^

maman-bar-c: main.o maman-bar.o
	$(CC) -o $@ $^ $(LDFLAGS)


maman-bar.h: maman-bar.vala
	valac -C -H $@  $<

maman-bar.c: maman-bar.vala
	valac $< -C  -o $@

main.o: main.c maman-bar.h

clean:
	rm -f maman-bar.c maman-bar.h *.o $(TARGET)

