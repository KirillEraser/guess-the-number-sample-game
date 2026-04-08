FROM gcc:latest
COPY main.cpp .
RUN g++ -o game main.cpp
CMD ["./game"]
