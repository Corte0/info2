# Default targct: Compile the sketch
all: compile

# Rule to compile the sketch
compile:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -o uart.hex uart.c

# Rule to clean the build directory
clean:
	rm -rf $(BUILD_DIR)
