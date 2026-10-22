OBJ_FILES = testC.o main.o
BUILD_DIR = build
TARGET = $(BUILD_DIR)/pacman.exe

# NO podemos hacer all: $(TARGET), ya que no verifica en caso de que actualicemos algún archivo

all: clean $(TARGET)

# | specify that must be ensure that the directory exists before building the target.
$(TARGET): $(OBJ_FILES) | $(BUILD_DIR)
	gcc -o $(TARGET) $(OBJ_FILES)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

testC.o:
	gcc -c test/testC.c

main.o:
	gcc -c test/main.c

.PHONY: clean all

# Limpiar archivos *.o o *.exe
clean:
	rm -f *.o $(TARGET)