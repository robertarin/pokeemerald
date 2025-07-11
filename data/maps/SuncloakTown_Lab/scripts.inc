SuncloakTown_Lab_MapScripts::
# 4 "data/maps/SuncloakTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SuncloakTown_Lab_OnTransition
	.byte 0


SuncloakTown_Lab_OnTransition::
# 11 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 9
	goto_if_ge SuncloakTown_Lab_OnTransition_1
	return

SuncloakTown_Lab_OnTransition_1:
# 12 "data/maps/SuncloakTown_Lab/scripts.pory"
	clearflag FLAG_SUNCLOAK_LAB_HIDE_COAL
	return


SuncloakTown_Lab_EventScript_Assistant::
# 17 "data/maps/SuncloakTown_Lab/scripts.pory"
	lock
# 18 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_lt SuncloakTown_Lab_EventScript_Assistant_2
# 37 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_eq SuncloakTown_Lab_EventScript_Assistant_3
# 42 "data/maps/SuncloakTown_Lab/scripts.pory"
	faceplayer
# 43 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_5
SuncloakTown_Lab_EventScript_Assistant_1:
# 45 "data/maps/SuncloakTown_Lab/scripts.pory"
	release
	return

SuncloakTown_Lab_EventScript_Assistant_2:
# 19 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_0
# 20 "data/maps/SuncloakTown_Lab/scripts.pory"
	applymovement 2, AssistantExclamation
# 21 "data/maps/SuncloakTown_Lab/scripts.pory"
	faceplayer
# 22 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_1
# 24 "data/maps/SuncloakTown_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 25 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_2
# 26 "data/maps/SuncloakTown_Lab/scripts.pory"
	giveitem ITEM_POKESTUS, 1
# 27 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_3
# 34 "data/maps/SuncloakTown_Lab/scripts.pory"
	giveitem ITEM_METEOR_SHARD, 1
# 35 "data/maps/SuncloakTown_Lab/scripts.pory"
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto SuncloakTown_Lab_EventScript_Assistant_1

SuncloakTown_Lab_EventScript_Assistant_3:
# 38 "data/maps/SuncloakTown_Lab/scripts.pory"
	faceplayer
# 39 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_4
	goto SuncloakTown_Lab_EventScript_Assistant_1


SuncloakTown_Lab_EventScript_Assistant_Right::
# 49 "data/maps/SuncloakTown_Lab/scripts.pory"
	lock
# 50 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_lt SuncloakTown_Lab_EventScript_Assistant_Right_2
# 53 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_eq SuncloakTown_Lab_EventScript_Assistant_Right_3
# 58 "data/maps/SuncloakTown_Lab/scripts.pory"
	faceplayer
# 59 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Right_Text_2
SuncloakTown_Lab_EventScript_Assistant_Right_1:
# 61 "data/maps/SuncloakTown_Lab/scripts.pory"
	release
	return

SuncloakTown_Lab_EventScript_Assistant_Right_2:
# 51 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Right_Text_0
	goto SuncloakTown_Lab_EventScript_Assistant_Right_1

SuncloakTown_Lab_EventScript_Assistant_Right_3:
# 54 "data/maps/SuncloakTown_Lab/scripts.pory"
	faceplayer
# 55 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Assistant_Right_Text_1
	goto SuncloakTown_Lab_EventScript_Assistant_Right_1


SuncloakTown_Lab_EventScript_Coal::
# 65 "data/maps/SuncloakTown_Lab/scripts.pory"
	lock
# 66 "data/maps/SuncloakTown_Lab/scripts.pory"
	faceplayer
# 67 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Coal_Text_0
# 68 "data/maps/SuncloakTown_Lab/scripts.pory"
	release
	return


SuncloakTown_Lab_EventScript_Pokestus_Synthesizer::
# 72 "data/maps/SuncloakTown_Lab/scripts.pory"
	lock
# 73 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_lt SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_2
# 76 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_3
# 88 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_1
# 89 "data/maps/SuncloakTown_Lab/scripts.pory"
	checkitem ITEM_METEOR_SHARD
# 90 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_9
# 100 "data/maps/SuncloakTown_Lab/scripts.pory"
	playse SE_CLICK
# 101 "data/maps/SuncloakTown_Lab/scripts.pory"
	special ResetPokestus
# 102 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_6
SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1:
# 106 "data/maps/SuncloakTown_Lab/scripts.pory"
	release
	return

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_2:
# 74 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_0
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_3:
# 77 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_1
# 78 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_2, MSGBOX_YESNO
# 79 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_7
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_7:
# 80 "data/maps/SuncloakTown_Lab/scripts.pory"
	playse SE_CLICK
# 81 "data/maps/SuncloakTown_Lab/scripts.pory"
	special ResetPokestus
# 82 "data/maps/SuncloakTown_Lab/scripts.pory"
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 7
# 83 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_3
# 84 "data/maps/SuncloakTown_Lab/scripts.pory"
	removeitem ITEM_METEOR_SHARD
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_9:
# 91 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_4, MSGBOX_YESNO
# 92 "data/maps/SuncloakTown_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_12
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_12:
# 93 "data/maps/SuncloakTown_Lab/scripts.pory"
	playse SE_CLICK
# 94 "data/maps/SuncloakTown_Lab/scripts.pory"
	special PokestusUpgradeCount
# 95 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_5
# 96 "data/maps/SuncloakTown_Lab/scripts.pory"
	removeitem ITEM_METEOR_SHARD
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1


SuncloakTown_Lab_Trigger_BeforeLeaving_AfterPokestus::
# 110 "data/maps/SuncloakTown_Lab/scripts.pory"
	lock
# 111 "data/maps/SuncloakTown_Lab/scripts.pory"
	applymovement 2, AssistantTowardsDoor
# 112 "data/maps/SuncloakTown_Lab/scripts.pory"
	setobjectxyperm 2, 6, 4
# 113 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_Trigger_BeforeLeaving_AfterPokestus_Text_0
# 117 "data/maps/SuncloakTown_Lab/scripts.pory"
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 8
# 118 "data/maps/SuncloakTown_Lab/scripts.pory"
	release
	return


SuncloakTown_Lab_Trigger_BeforeLeaving_BeforePokestus::
# 122 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_Trigger_BeforeLeaving_BeforePokestus_Text_0, MSGBOX_AUTOCLOSE
# 123 "data/maps/SuncloakTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LabTutorialPushUp
	return


SuncloakTown_Lab_EventScript_Bookshelf::
# 127 "data/maps/SuncloakTown_Lab/scripts.pory"
	lock
# 128 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Bookshelf_Text_0
# 129 "data/maps/SuncloakTown_Lab/scripts.pory"
	release
	return


SuncloakTown_Lab_EventScript_Notes::
# 133 "data/maps/SuncloakTown_Lab/scripts.pory"
	lock
# 134 "data/maps/SuncloakTown_Lab/scripts.pory"
	msgbox SuncloakTown_Lab_EventScript_Notes_Text_0
# 135 "data/maps/SuncloakTown_Lab/scripts.pory"
	release
	return


# 138 "data/maps/SuncloakTown_Lab/scripts.pory"
AssistantExclamation:
# 139 "data/maps/SuncloakTown_Lab/scripts.pory"
	emote_exclamation_mark
	step_end

# 142 "data/maps/SuncloakTown_Lab/scripts.pory"
AssistantTowardsDoor:
# 143 "data/maps/SuncloakTown_Lab/scripts.pory"
	walk_fast_down
# 144 "data/maps/SuncloakTown_Lab/scripts.pory"
	walk_fast_right
# 144 "data/maps/SuncloakTown_Lab/scripts.pory"
	walk_fast_right
# 144 "data/maps/SuncloakTown_Lab/scripts.pory"
	walk_fast_right
# 145 "data/maps/SuncloakTown_Lab/scripts.pory"
	walk_fast_down
	step_end

# 148 "data/maps/SuncloakTown_Lab/scripts.pory"
LabTutorialPushUp:
# 149 "data/maps/SuncloakTown_Lab/scripts.pory"
	walk_fast_up
	step_end

SuncloakTown_Lab_EventScript_Assistant_Text_0:
# 19 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Maybe if I update the synthesis event\n"
	.string "here ...$"

SuncloakTown_Lab_EventScript_Assistant_Text_1:
# 22 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Ah! You must be our newest member,\n"
	.string "{PLAYER}.\p"
	.string "Professor Coal told me to outfit you.\p"
	.string "First, here are some Pokeballs to keep\n"
	.string "you safe while you're out there.$"

SuncloakTown_Lab_EventScript_Assistant_Text_2:
# 25 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "As for supplies, we have just finished\n"
	.string "creating model zero of what we are\l"
	.string "calling the 'Pokestus'.$"

SuncloakTown_Lab_EventScript_Assistant_Text_3:
# 27 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Using materials harvested from the\n"
	.string "recently downed meteors we have been\l"
	.string "able to synthesize an infinitely\l"
	.string "rechargable Pokemon healing device!\p"
	.string "Sadly, the materials are incredibly hard\n"
	.string "to come by as the meteors primarily fell\l"
	.string "in remote locations. This one is brand\l"
	.string "new, and you will need to activate it at\l"
	.string "the Synthesizer on the right side of\l"
	.string "the lab.\p"
	.string "Here's a meteor shard to add its initial\n"
	.string "charge!$"

SuncloakTown_Lab_EventScript_Assistant_Text_4:
# 39 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Go give the Synthesizer a try!$"

SuncloakTown_Lab_EventScript_Assistant_Text_5:
# 43 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "If we had more meteor shards we could\n"
	.string "upgrade the Pokestus! Look for more\l"
	.string "when you're out in remote locations.$"

SuncloakTown_Lab_EventScript_Assistant_Right_Text_0:
# 51 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "You should go talk to the lead\n"
	.string "technician first. She has some things\l"
	.string "from Professor Coal for you.$"

SuncloakTown_Lab_EventScript_Assistant_Right_Text_1:
# 55 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "This is the Pokestus Synthesizer. It's\n"
	.string "ready for you to activate.$"

SuncloakTown_Lab_EventScript_Assistant_Right_Text_2:
# 59 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "If your Pokestus ever runs out, it will\n"
	.string "refill automatically when your pokemon\l"
	.string "are healed at a PokeCenter!$"

SuncloakTown_Lab_EventScript_Coal_Text_0:
# 67 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "I didn't think you'd make it this far!$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_0:
# 74 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "This looks complicated.\n"
	.string "Maybe I shouldn't touch it.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_1:
# 77 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "The Pokestus Synthesizer whirrs to\n"
	.string "life.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_2:
# 78 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Press the blinking 'ENGAGE' button?$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_3:
# 83 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Your Pokestus has been activated using\n"
	.string "the Meteor Shard!\n"
	.string "It now has 1 charge.\p"
	.string "The shard is consumed in the process.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_4:
# 91 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Do you wish to enhance your Pokestus\nwith a Meteor Shard?$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_5:
# 95 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Your Pokestus has been enhanced.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_6:
# 102 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Your Pokestus has been re-charged.$"

SuncloakTown_Lab_Trigger_BeforeLeaving_AfterPokestus_Text_0:
# 113 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Be careful out on Route 201.\n"
	.string "Suncloak is a rural town with dangerous\l"
	.string "Pokemon right on our doorstep.\p"
	.string "You're renting a room from the old man\n"
	.string "in the house on the North-East side of\l"
	.string "town right?\p"
	.string "Make sure you stop back there often to\n"
	.string "rest up and heal.\p"
	.string "Good luck on your mission for the\n"
	.string "Professor. You're all set to go!$"

SuncloakTown_Lab_Trigger_BeforeLeaving_BeforePokestus_Text_0:
# 122 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "Hey!\nDon't go before activating your Pokestus!$"

SuncloakTown_Lab_EventScript_Bookshelf_Text_0:
# 128 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "The shelves are filled with exciting new\n"
	.string "research!$"

SuncloakTown_Lab_EventScript_Notes_Text_0:
# 134 "data/maps/SuncloakTown_Lab/scripts.pory"
	.string "I shouldn't mess with any of the\n"
	.string "Professors notes.$"
