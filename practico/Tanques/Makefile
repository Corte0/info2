# Define the FQBN (Fully Qualified Board Name) for your Arduino board
FQBN = arduino:avr:nano:cpu=atmega328old

# Define the output directory
BUILD_DIR = ./build

SRC_DIR = ./src/Tanques

PORT = /dev/ttyUSB1

# Default targct: Compile the sketch
all: compile

# Rule to compile the sketch
compile:
	arduino-cli compile --fqbn $(FQBN) --no-color --output-dir $(BUILD_DIR) $(SRC_DIR)

upload:
	arduino-cli compile -u -b $(FQNB) -p $(PORT) --no-color $(SRC_DIR)

# Rule to clean the build directory
clean:
	rm -rf $(BUILD_DIR)
