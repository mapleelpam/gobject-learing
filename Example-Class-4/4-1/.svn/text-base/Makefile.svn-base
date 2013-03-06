
TARGET := maman-bar
CFLAGS=`pkg-config --cflags glib-2.0 gtk+-2.0`
LDFLAGS=`pkg-config --libs glib-2.0 gtk+-2.0` 

ALL:$(TARGET)

maman-bar: main.o maman-bar.o


clean:
	rm -f $(TARGET) *.o
