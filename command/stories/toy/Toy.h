/*
 * Experimenting with Receiver of a command pattern
 *
 * @Author: github.com/ex-passion
 * Experience passion
 *
 */

#ifndef RECEIVER_TOY_XP
#define RECEIVER_TOY_XP 

#include <iostream> 

class RotatingToy{
	public:
		void on(); 
		void off();
		void rotateClockwise();
		void rotateAntiClockwise();

		RotatingToy(std::string name) : m_toyname(name) {}
	private:
		std::string m_toyname;
};


void RotatingToy::on () {
	/* Rotating toy knows how to switch it on */
	std::cout<<m_toyname<<" has now been switched on. Yay!!"<<std::endl;
}

void RotatingToy::off () {
	/* Rotating toy knows how to switch it off */
	std::cout<<m_toyname<<" has now been switched off. Finally!!"<<std::endl;
}

void RotatingToy::rotateClockwise () {
	/* Rotating toy knows how to rotate it clockwise */
	std::cout<<m_toyname<<" knows how to rotate it. See it has started to rotate clockwise"<<std::endl;
}

void RotatingToy::rotateAntiClockwise () {
	/* Rotating toy knows how to rotate it anti-clockwise */
	std::cout<<m_toyname<<" knows how to rotate it in anti-clockwise direction. Its started to rotate in anti-clockwise"<<std::endl;
}

#endif
