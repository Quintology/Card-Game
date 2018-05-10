a.out: main.cc battle.cc
	g++ -std=c++11 main.cc battle.cc

clean:
	rm -f a.out core *.o
  
  //just throwing some sorta Makefile right now
