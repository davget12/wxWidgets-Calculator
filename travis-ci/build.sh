
cd wxWidgetsProjectFour-Calculator

echo "Building:"
g++ cApp.cpp `wx-config --cxxflags --libs` -o cApp.o -c -std=c++11
g++ cMain.cpp `wx-config --cxxflags --libs` -o cMain.o -c -std=c++11 -fpermissive
g++ -o wxCalculator cApp.o cMain.o `wx-config --cxxflags --libs`