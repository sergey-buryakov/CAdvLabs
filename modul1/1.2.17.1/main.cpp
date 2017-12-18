#include <iostream>
#include <deque>

using namespace std;

enum CommandType
{
	MoveLeft,
	MoveRight,
	MoveForward,
	MoveBackward
};

ostream& operator<< (ostream &strm, CommandType command) {
	switch(int(command)) {
        case MoveLeft:    strm << "Move left"; break;
        case MoveRight:    strm << "Move right"; break;
        case MoveForward:   strm << "Move forward"; break;
        case MoveBackward: strm << "Move backward"; break;
	}
	return strm;
}

class RoboCommander
{
public:
    RoboCommander(): commands(1) {}
    void AddCommand(CommandType command)
    {
        commands.push_back(command);
    }
    void UndoCommand()
    {
        commands.pop_back();
    }
    void Execute()
    {
        for(CommandType command: commands)
            cout << command << endl;
        cout << "Ready" << endl;
    }
private:
    deque<CommandType> commands;
};


int main()
{
	RoboCommander commander;
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveRight);
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveRight);
	commander.AddCommand(MoveBackward);
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveForward);
	commander.Execute();
	return 0;
}
