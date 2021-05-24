all: htmldocument.so

htmldocument.so: HtmlDocument.o HtmlElement.o HtmlNode.o
	g++ HtmlDocument.o HtmlElement.o HtmlNode.o -shared -fPIC -o htmldocument.so

HtmlDocument.o: HtmlDocument.cpp HtmlDocument.h
	g++ -c  HtmlDocument.cpp -fPIC -o HtmlDocument.o

HtmlElement.o: HtmlElement.cpp HtmlElement.h
	g++ -c HtmlElement.cpp -fPIC -o HtmlElement.o

HtmlNode.o: HtmlNode.cpp HtmlNode.h
	g++ -c HtmlNode.cpp -fPIC -o HtmlNode.o

clean: 
	rm -rf *.o htmldocument.so