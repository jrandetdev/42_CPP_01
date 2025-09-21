#!/bin/bash

make re && touch hello.txt && printf "hellohellohellohellohello\n\nhellohell" > hello.txt
./myownsed hello.txt hello greetings