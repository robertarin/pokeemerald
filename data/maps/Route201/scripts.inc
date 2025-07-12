Route201_MapScripts::
# 2 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_OnTransition
	.byte 0


Route201_OnTransition::
# 6 "data/maps/Route201/scripts.pory"
	goto_if_unset FLAG_TRAINERS_DEFEATED_ROUTE_201, Route201_EventScript_ResetAllTrainers
	end


Route201_EventScript_Sean::
# 11 "data/maps/Route201/scripts.pory"
	trainerbattle_single TRAINER_SEAN, Route201_Text_SeanIntro, Route201_Text_SeanDefeated, Route201_Event_Script_CheckTrainersCompletion
# 12 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_SeanPostBattle, MSGBOX_AUTOCLOSE
	end


Route201_EventScript_Jon::
# 17 "data/maps/Route201/scripts.pory"
	trainerbattle_single TRAINER_JON, Route201_Text_JonIntro, Route201_Text_JonDefeated, Route201_Event_Script_CheckTrainersCompletion
# 18 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_JonPostBattle, MSGBOX_AUTOCLOSE
	end


Route201_Event_Script_CheckTrainersCompletion::
# 23 "data/maps/Route201/scripts.pory"
	goto_if_not_defeated TRAINER_SEAN, Route201_EventScript_TrainersNotCompleted
# 24 "data/maps/Route201/scripts.pory"
	goto_if_not_defeated TRAINER_JON, Route201_EventScript_TrainersNotCompleted
# 25 "data/maps/Route201/scripts.pory"
	goto_if_not_defeated TRAINER_CAMPER_JIM, Route201_EventScript_TrainersNotCompleted
# 26 "data/maps/Route201/scripts.pory"
	setflag FLAG_TRAINERS_DEFEATED_ROUTE_201
# 27 "data/maps/Route201/scripts.pory"
	release
	end


Route201_EventScript_TrainersNotCompleted::
# 32 "data/maps/Route201/scripts.pory"
	release
	end


Route201_EventScript_ResetAllTrainers::
# 37 "data/maps/Route201/scripts.pory"
	cleartrainerflag TRAINER_JON
# 38 "data/maps/Route201/scripts.pory"
	cleartrainerflag TRAINER_SEAN
# 39 "data/maps/Route201/scripts.pory"
	cleartrainerflag TRAINER_CAMPER_JIM
	return


Route201_EventScript_InfoSign::
# 50 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_InfoSign, MSGBOX_SIGN
	return


Route201_EventScript_DirectionSignNorth::
# 58 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_DirectionSignNorth, MSGBOX_SIGN
	return


Route201_EventScript_HouseSign::
# 66 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_InfoSign, MSGBOX_SIGN
	return


Route201_EventScript_Camper::
# 106 "data/maps/Route201/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_JIM, Route201_Text_CamperIntro, Route201_Text_CamperDefeated, Route201_Event_Script_CheckTrainersCompletion
# 107 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_CamperPostBattle, MSGBOX_AUTOCLOSE
	return


Route201_EventScript_Lass::
# 123 "data/maps/Route201/scripts.pory"
	lock
# 124 "data/maps/Route201/scripts.pory"
	faceplayer
# 125 "data/maps/Route201/scripts.pory"
	trainerbattle_single TRAINER_SAD_LASS, Route201_Text_LassIntro, Route201_Text_LassDefeated
# 126 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_LassPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_Boy_1::
# 131 "data/maps/Route201/scripts.pory"
	lock
# 132 "data/maps/Route201/scripts.pory"
	faceplayer
# 133 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_Boy_1_Text_0
# 134 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_Boy_1_Text_0:
# 133 "data/maps/Route201/scripts.pory"
	.string "Hey! Do you know how to cross these? I\n"
	.string "havn't been able to figure it out.$"

Route201_Text_InfoSign::
# 42 "data/maps/Route201/scripts.pory"
	.string "GAUNTLETS\p"
	.string "Routes in this game are known as\n"
	.string "GAUNTLETS.\p"
	.string "That means when you leave to heal, your\n"
	.string "opponents will heal their POKéMON as\l"
	.string "well.\p"
	.string "Defeat every opponent on this route\n"
	.string "without leaving to fully clear it!$"

Route201_Text_DirectionSignNorth::
# 53 "data/maps/Route201/scripts.pory"
	.string "Suncloak Town {UP_ARROW}\n"
	.string "Cave {DOWN_ARROW}$"

Route201_Text_HouseSign::
# 61 "data/maps/Route201/scripts.pory"
	.string "Out for an errand. Be back soon!$"

Route201_Text_SeanIntro::
# 69 "data/maps/Route201/scripts.pory"
	.string "I don't even know what type each\n"
	.string "POKéMON is!$"

Route201_Text_SeanDefeated::
# 73 "data/maps/Route201/scripts.pory"
	.string "Since when did they show POKéMON types\n"
	.string "next to their health?.$"

Route201_Text_SeanPostBattle::
# 77 "data/maps/Route201/scripts.pory"
	.string "Go away.$"

Route201_Text_JonIntro::
# 81 "data/maps/Route201/scripts.pory"
	.string "My POKéMON are fully healed! I'm glad I\n"
	.string "bought these potions.$"

Route201_Text_JonPostBattle::
# 85 "data/maps/Route201/scripts.pory"
	.string "I didn't even agree to be here!$"

Route201_Text_JonDefeated::
# 89 "data/maps/Route201/scripts.pory"
	.string "That was a tough fight!\l"
	.string "You should probably go heal your\l"
	.string "POKéMON before moving on.$"

Route201_Text_CamperIntro::
# 93 "data/maps/Route201/scripts.pory"
	.string "Battling outside is thrilling!$"

Route201_Text_CamperDefeated::
# 97 "data/maps/Route201/scripts.pory"
	.string "I guess I'm a better camper than\n"
	.string "battler...$"

Route201_Text_CamperPostBattle::
# 101 "data/maps/Route201/scripts.pory"
	.string "Hopefully I at least made you use a\n"
	.string "Pokestus charge!$"

Route201_Text_LassIntro::
# 110 "data/maps/Route201/scripts.pory"
	.string "I made it through the cave but I'm\n"
	.string "completely out of healing items!\p"
	.string "I'm not sure I'll make it to Suncloak\n"
	.string "Town...\p"
	.string "Unless...$"

Route201_Text_LassDefeated::
# 114 "data/maps/Route201/scripts.pory"
	.string "I'm sorry! I was just afraid!$"

Route201_Text_LassPostBattle::
# 118 "data/maps/Route201/scripts.pory"
	.string "I can't even heal my pokemon when you\n"
	.string "leave...$"
