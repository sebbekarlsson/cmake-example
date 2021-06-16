DIR=$(pwd)
# python cmake.py
cmake -Bbuild -S.
cd build
make
cd $DIR
