Route201_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_OnTransition
	.byte 0

Route201_OnTransition:
	goto_if_unset FLAG_TRAINERS_DEFEATED_ROUTE_201, Route201_EventScript_ResetAllTrainers
	end

Route201_EventScript_Sean::
	trainerbattle_single TRAINER_SEAN, Route201_Text_SeanIntro, Route201_Text_SeanDefeated, Route201_Event_Script_CheckTrainersCompletion
	msgbox Route201_Text_SeanPostBattle, MSGBOX_AUTOCLOSE
	end

Route201_EventScript_Jon::
	trainerbattle_single TRAINER_JON, Route201_Text_JonIntro, Route201_Text_JonDefeated, Route201_Event_Script_CheckTrainersCompletion
	msgbox Route201_Text_JonPostBattle, MSGBOX_AUTOCLOSE
	end

Route201_Event_Script_CheckTrainersCompletion::
	goto_if_not_defeated TRAINER_SEAN, Route201_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_JON, Route201_EventScript_TrainersNotCompleted
	setflag FLAG_TRAINERS_DEFEATED_ROUTE_201
	release
	end

Route201_EventScript_TrainersNotCompleted::
	release
	end

Route201_EventScript_ResetAllTrainers::
	cleartrainerflag TRAINER_JON
	cleartrainerflag TRAINER_SEAN
	end

Route201_EventScript_InfoSign::
	msgbox Route201_Text_InfoSign, MSGBOX_SIGN
	end

Route201_Text_InfoSign:
	.string "GAUNTLETS\p"
	.string "Routes in this game are\n"
	.string "known as GAUNTLETS.\p"
	.string "That means when you leave to heal,\l"
	.string "your opponents will\n"
	.string "heal their POKéMON as well.\p"
	.string "Defeat every opponent\n"
	.string "on this route without leaving\p"
	.string "to fully clear it!$"

Route201_EventScript_DirectionSignNorth::
	msgbox Route201_Text_DirectionSignNorth, MSGBOX_SIGN
	end

Route201_Text_DirectionSignNorth:
	.string "Suncloak Town {UP_ARROW}\n"
	.string "Cave {DOWN_ARROW}$"

Route201_EventScript_HouseSign::
	msgbox Route201_Text_InfoSign, MSGBOX_SIGN
	end

Route201_Text_HouseSign:
	.string "Out for an errand.\n"
	.string "Be back soon!$"

Route201_Text_SeanIntro:
	.string "I don't even know what type\n"
	.string "each POKéMON is!$"

Route201_Text_SeanDefeated:
	.string "I should have pressed R while in battle...$"

Route201_Text_SeanPostBattle:
	.string "Pressing R while in battle\n"
	.string "let's you see the types\l"
	.string "of your opponent's POKéMON.\l"
	.string "Next time I'll know what moves to use!$"

Route201_Text_JonIntro:
	.string "My POKéMON are fully healed!\n"
	.string "I'm glad I bought these potions.$"

Route201_Text_JonDefeated:
	.string "That was a tough fight!\l"
	.string "You should probably go heal\n"
	.string "your POKéMON before moving on.$"

Route201_Text_JonPostBattle:
	.string "I didn't even agree to be here!$"
