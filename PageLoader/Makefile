all: pageloader.so

pageloader.so: LoadResult.o PageLoader.o
	g++ LoadResult.o PageLoader.o -shared -fPIC -o pageloader.so

LoadResult.o: LoadResult.cpp LoadResult.h PageLoader.h
	g++ -c  LoadResult.cpp -fPIC -o LoadResult.o

PageLoader.o: PageLoader.cpp LoadResult.h PageLoader.h
	g++ -c PageLoader.cpp -fPIC -o PageLoader.o

clean: 
	rm -rf *.o pageloader.so