all:
	@echo Unknown command please use:
	@echo make build
	@echo make clean
	@echo make run
build: 	src/main.c 
	gcc -o bin/main src/main.c -I.
	@echo 
run:
	@./bin/main
	@echo 
clean:
	rm bin/*
