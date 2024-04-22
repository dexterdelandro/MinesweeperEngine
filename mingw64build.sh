#run with sh mingw64build.sh

COMPILE="g++ -std=c++20 ./src/*.cpp -o ./bin/Minesweeper -I./SDL/include -I./include -L./build/ -lSDL3 -mwindows"

BUILD="./bin/Minesweeper.exe"

echo $COMPILE
echo "-------------------------------------------"
eval $COMPILE

echo $BUILD
echo "-------------------------------------------"
eval $BUILD