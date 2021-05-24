all: linkextractor.so

linkextractor.so: LinkExtractor.o 
	g++ LinkExtractor.o -shared -fPIC -o linkextractor.so

LinkExtractor.o: LinkExtractor.cpp LinkExtractor.h HtmlDocument.h
	g++ -c  LinkExtractor.cpp -fPIC -o LinkExtractor.o

clean: 
	rm -rf *.o linkextractor.so