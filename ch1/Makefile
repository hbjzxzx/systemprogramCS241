.PHONY : valgrind threadsan clean

valgrindPro : memoryLeak.c
	gcc -g memoryLeak.c -o valgrindPro
	chmod a+x valgrindPro

valgrind : valgrindPro
	valgrind --leak-check=full --show-leak-kinds=all ./valgrindPro

ThreadSANPro : simple_race.c
	gcc -fsanitize=thread -pie -fPIC -ltsan -g simple_race.c -o ThreadSANPro

threadsan : ThreadSANPro
	./ThreadSANPro

clean : 
	-rm valgrindPro
	-rm ThreadSANPro