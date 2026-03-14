all: copy docker
	cd chall/ && docker compose up
docker: main
	cd chall/ && docker compose build
copy: main
	cp main chall/
	cp main solve/
	cp main handout/
main: main.c
	gcc -o main -fno-stack-protector main.c

