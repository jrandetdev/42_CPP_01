#!/bin/bash

make re && touch hello.txt && printf "hellohellohellohellohello\n\nhello" > hello.txt
./myownsed hello.txt hello greetings