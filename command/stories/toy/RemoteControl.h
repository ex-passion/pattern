/*
 * Experimenting with Invoker of a command pattern
 *
 * @Author: github.com/ex-passion
 * Experience passion
 *
 */

#ifndef INVOKER_REMOTE_XP
#define INVOKER_REMOTE_XP

#include "command.h"

using namespace pattern::command;

/* Invoker */
class RemoteControl{
	private:
		Command* onButton;
		Command* offButton;
		Command* clockwiseRotateButton;
		Command* antiClockwiseRotateButton;

	public: 
		RemoteControl(Command* onCommand, 
			      Command* offCommand,
			      Command* clockwiseRotateCommand,
			      Command* antiClockwiseRotateCommand) : 

		              onButton(onCommand),
			      offButton(offCommand),
			      clockwiseRotateButton(clockwiseRotateCommand),
			      antiClockwiseRotateButton(antiClockwiseRotateCommand) {}

		void pressOnButton();
		void pressOffButton();
		void pressClockwiseRotateButton();
		void pressAntiClockwiseRotateButton();
};

void RemoteControl::pressOnButton() {
	onButton->execute();
}

void RemoteControl::pressOffButton() {
	offButton->execute();
}

void RemoteControl::pressClockwiseRotateButton() {
	clockwiseRotateButton->execute();
}

void RemoteControl::pressAntiClockwiseRotateButton() {
	antiClockwiseRotateButton->execute();
}

#endif
