FROM gcc:latest

WORKDIR '/home/calc'

RUN apt update && apt upgrade -y
RUN apt install cmake -y
RUN apt install googletest googletest-tools libgtest-dev
RUN mkdir build

COPY . .

RUN rm -r build/*