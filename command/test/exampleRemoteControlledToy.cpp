/*
 * Experimenting with Simple command of command pattern example
 *
 * @Author: github.com/ex-passion
 * Experience passion
 */

#include "command.h"
#include "Toy.h"
#include "RemoteControl.h"

using namespace pattern::command;

int main() {
	std::shared_ptr<RotatingToy> toy = std::make_shared<RotatingToy> ("Dancing Robot");
	
	//std::unique_ptr<SimpleCommand<RotatingToy>> sc_on (toy, &RotatingToy::on);
	//SimpleCommand<RotatingToy> *sc_on = new SimpleCommand<RotatingToy>(toy, &RotatingToy::on);
	RemoteControl *r = new RemoteControl(new SimpleCommand<RotatingToy>(toy, &RotatingToy::on),
			                     new SimpleCommand<RotatingToy>(toy, &RotatingToy::off),
					     new SimpleCommand<RotatingToy>(toy, &RotatingToy::rotateClockwise),
					     new SimpleCommand<RotatingToy>(toy, &RotatingToy::rotateAntiClockwise));


	r->pressOnButton();

	r->pressClockwiseRotateButton();
	r->pressAntiClockwiseRotateButton();
	r->pressClockwiseRotateButton();
	r->pressAntiClockwiseRotateButton();

	r->pressOffButton();
	delete r;

	return 0;
}
