a.out: cardchoosing.cc cardchoosing.h
        g++ -std=c++11 cardchoosing.cc cardchoosing.h

clean:
        rm -f a.out core *.o
