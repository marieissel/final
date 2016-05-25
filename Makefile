mars: CinReader.o mars.o RocketShip.o SpecialRocketShip.o
	g++ -Wall -g -o mars CinReader.o mars.o RocketShip.o SpecialRocketShip.o

jupiter: CinReader.o jupiter.o RocketShip.o
	g++ -Wall -g -o jupiter CinReader.o jupiter.o RocketShip.o

saturn: CinReader.o saturn.o RocketShip.o
	g++ -Wall -g -o saturn CinReader.o saturn.o RocketShip.o

rocketship: RocketShip.cpp
	g++ -Wall -g -c RocketShip.cpp

titan: CinReader.o titan.o
	g++ -Wall -g -o titan CinReader.o titan.o