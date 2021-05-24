all: linkrepository.so

linkrepository.so: LinkRepository.o LinkEntry.o 
	g++ LinkRepository.o LinkEntry.o -shared -fPIC -o linkrepository.so

LinkRepository.o: LinkRepository.cpp LinkRepository.h LinkEntry.h 
	g++ -c  LinkRepository.cpp -fPIC -o LinkRepository.o

LinkEntry.o: LinkEntry.cpp LinkEntry.h LinkStatus.h
	g++ -c  LinkEntry.cpp -fPIC -o LinkEntry.o

clean: 
	rm -rf *.o linkrepository.so