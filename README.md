# CubeT - A command-line Rubik's cube scrambler and timer, written in C.

## About
CubeT is a simple command-line program that generates a scramble
for a 3x3 Rubik's cube and times your solves. Why use an online
cube timer when you can use your terminal?

## Installation
First, clone this repository:
```
git clone https://github.com/KobusErasmus/cubet
```
Second, use a C compiler, such as GCC, to compile the program:
```
gcc -O3 -o cubet cubet.c
```
Finally, move the program to an accessible directory, such as
/usr/local/bin
```
sudo mv cubet /usr/local/bin/.
```
To uninstall, just remove it, e.g.:
```
sudo rm /usr/local/bin/cubet
```

## Usage
To run the program, simply call it:
```
cubet
```
Then, to start timing your solve, press the ENTER key, and to
stop timing, press the ENTER key again.

To quit the program, press Ctrl+C.

## About Author
See www.JacobusErasmus.com
