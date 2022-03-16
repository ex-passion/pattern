/*
 * Experimenting with command pattern
 *
 * @Author: github.com/ex-passion
 * Experience Passion
 *
 */

#ifndef COMMAND_PATTERN_H
#define COMMAND_PATTERN_H

#include <memory>

namespace pattern{
	namespace command {
		class Command {
			public:
				virtual ~Command() = default;
				virtual void execute() =0;

			protected:
				Command() = default;
		};

		template<class Receiver>
		class SimpleCommand : public Command{
			private:
				typedef void (Receiver::* Action) ();
				std::shared_ptr<Receiver> m_receiver;
				Action m_action;

			public:
				SimpleCommand(std::shared_ptr<Receiver> receiver, Action action): m_receiver(receiver), m_action(action){}	
				virtual ~SimpleCommand() = default;

				void execute() {
					(m_receiver.get()->*m_action)();
				}
		};
	}
}	

#endif
