a.out: cardchoosing.cc cardchoosing.h
        g++ -std=c++11 cardchoosing.cc cardchoosing.h
        @echo "Successfully compiled. Type a.out to test your code."
        
clean:
        rm -f a.out core *.o
