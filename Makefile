# PROJECT CONFIGURATION
PROJECT_NAME = Forgotten_Vault
BUILD_DIR = ../builds

# COMPILER SETTINGS
CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra

# SOURCE FILES
SOURCES = *.cpp
# Or list specific files: SOURCES = main.cpp utils.cpp

# BUILD RULES
$(PROJECT_NAME): $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(BUILD_DIR)/$(PROJECT_NAME)

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build and run
run: $(PROJECT_NAME)
	$(BUILD_DIR)/$(PROJECT_NAME)

# Clean this project's build
clean:
	rm -f $(BUILD_DIR)/$(PROJECT_NAME)

# Clean entire build directory
clean-all:
	rm -rf $(BUILD_DIR)

# Default target
all: $(PROJECT_NAME)

# Phony targets
.PHONY: all clean clean-all run
