CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -Ilib/eigen -O2
SRC = src/Target.cpp src/Sensor.cpp src/KalmanFilter.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = tracker

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	del $(TARGET).exe  