SuncloakTown_Lab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SuncloakTown_Lab_OnTransition
	.byte 0


SuncloakTown_Lab_OnTransition::
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 9
	goto_if_ge SuncloakTown_Lab_OnTransition_1
	return

SuncloakTown_Lab_OnTransition_1:
	clearflag FLAG_SUNCLOAK_LAB_HIDE_COAL
	return


SuncloakTown_Lab_EventScript_Assistant::
	lock
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_lt SuncloakTown_Lab_EventScript_Assistant_2
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_eq SuncloakTown_Lab_EventScript_Assistant_3
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_5
SuncloakTown_Lab_EventScript_Assistant_1:
	release
	return

SuncloakTown_Lab_EventScript_Assistant_2:
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_0
	applymovement 2, AssistantExclamation
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_1
	giveitem ITEM_POKE_BALL, 10
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_2
	giveitem ITEM_POKESTUS, 1
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_3
	giveitem ITEM_METEOR_SHARD, 1
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto SuncloakTown_Lab_EventScript_Assistant_1

SuncloakTown_Lab_EventScript_Assistant_3:
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_4
	goto SuncloakTown_Lab_EventScript_Assistant_1


SuncloakTown_Lab_EventScript_Assistant_Right::
	lock
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_lt SuncloakTown_Lab_EventScript_Assistant_Right_2
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_eq SuncloakTown_Lab_EventScript_Assistant_Right_3
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Assistant_Right_Text_2
SuncloakTown_Lab_EventScript_Assistant_Right_1:
	release
	return

SuncloakTown_Lab_EventScript_Assistant_Right_2:
	msgbox SuncloakTown_Lab_EventScript_Assistant_Right_Text_0
	goto SuncloakTown_Lab_EventScript_Assistant_Right_1

SuncloakTown_Lab_EventScript_Assistant_Right_3:
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Assistant_Right_Text_1
	goto SuncloakTown_Lab_EventScript_Assistant_Right_1


SuncloakTown_Lab_EventScript_Coal::
	lock
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Coal_Text_0
	release
	return


SuncloakTown_Lab_EventScript_Pokestus_Synthesizer::
	lock
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_lt SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_2
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_3
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_1
	checkitem ITEM_METEOR_SHARD
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_9
	playse SE_CLICK
	special PokestusRefill
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_6
SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1:
	release
	return

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_2:
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_0
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_3:
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_1
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_7
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_7:
	playse SE_CLICK
	special PokestusRefill
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 7
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_3
	removeitem ITEM_METEOR_SHARD
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_9:
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_12
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_12:
	playse SE_CLICK
	special PokestusUpgradeCount
	msgbox SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_5
	removeitem ITEM_METEOR_SHARD
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1


SuncloakTown_Lab_Trigger_BeforeLeaving_AfterPokestus::
	lock
	applymovement 2, AssistantTowardsDoor
	setobjectxyperm 2, 6, 4
	msgbox SuncloakTown_Lab_Trigger_BeforeLeaving_AfterPokestus_Text_0
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 8
	release
	return


SuncloakTown_Lab_Trigger_BeforeLeaving_BeforePokestus::
	msgbox SuncloakTown_Lab_Trigger_BeforeLeaving_BeforePokestus_Text_0, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, LabTutorialPushUp
	return


SuncloakTown_Lab_EventScript_Bookshelf::
	lock
	msgbox SuncloakTown_Lab_EventScript_Bookshelf_Text_0
	release
	return


SuncloakTown_Lab_EventScript_Notes::
	lock
	msgbox SuncloakTown_Lab_EventScript_Notes_Text_0
	release
	return


AssistantExclamation:
	emote_exclamation_mark
	step_end

AssistantTowardsDoor:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	step_end

LabTutorialPushUp:
	walk_fast_up
	step_end

SuncloakTown_Lab_EventScript_Assistant_Text_0:
	.string "Maybe if I update the synthesis event\n"
	.string "here ...$"

SuncloakTown_Lab_EventScript_Assistant_Text_1:
	.string "Ah! You must be our newest member,\n"
	.string "{PLAYER}.\p"
	.string "Professor Coal told me to outfit you.\p"
	.string "First, here are some Pokeballs to keep\n"
	.string "you safe while you're out there.$"

SuncloakTown_Lab_EventScript_Assistant_Text_2:
	.string "As for supplies, we have just finished\n"
	.string "creating model zero of what we are\l"
	.string "calling the 'Pokestus'.$"

SuncloakTown_Lab_EventScript_Assistant_Text_3:
	.string "Using materials harvested from the\n"
	.string "recently downed meteors we have been\l"
	.string "able to synthesize an infinitely\l"
	.string "rechargable Pokemon healing device!\p"
	.string "Sadly, the materials are incredibly hard\n"
	.string "to come by as the meteors primarily\l"
	.string "fell in remote locations. This one is\l"
	.string "brand new, and you will need to\l"
	.string "activate it at the Synthesizer on the\l"
	.string "right side of the lab.\p"
	.string "Here's a meteor shard to add its initial\n"
	.string "charge!$"

SuncloakTown_Lab_EventScript_Assistant_Text_4:
	.string "Go give the Synthesizer a try!$"

SuncloakTown_Lab_EventScript_Assistant_Text_5:
	.string "If we had more meteor shards we could\n"
	.string "upgrade the Pokestus! Look for more\l"
	.string "when you're out in remote locations.$"

SuncloakTown_Lab_EventScript_Assistant_Right_Text_0:
	.string "You should go talk to the lead\n"
	.string "technician first. She has some things\l"
	.string "from Professor Coal for you.$"

SuncloakTown_Lab_EventScript_Assistant_Right_Text_1:
	.string "This is the Pokestus Synthesizer. It's\n"
	.string "ready for you to activate.$"

SuncloakTown_Lab_EventScript_Assistant_Right_Text_2:
	.string "If your Pokestus ever runs out, it will\n"
	.string "refill automatically when your pokemon\l"
	.string "are healed at a PokeCenter!$"

SuncloakTown_Lab_EventScript_Coal_Text_0:
	.string "I didn't think you'd make it this far!$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_0:
	.string "This looks complicated.\n"
	.string "Maybe I shouldn't touch it.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_1:
	.string "The Pokestus Synthesizer whirrs to\n"
	.string "life.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_2:
	.string "Press the blinking 'ENGAGE' button?$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_3:
	.string "Your Pokestus has been activated using\n"
	.string "the Meteor Shard!\n"
	.string "It now has 1 charge.\p"
	.string "The shard is consumed in the process.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_4:
	.string "Do you wish to enhance your Pokestus\nwith a Meteor Shard?$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_5:
	.string "Your Pokestus has been enhanced.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_6:
	.string "Your Pokestus has been re-charged.$"

SuncloakTown_Lab_Trigger_BeforeLeaving_AfterPokestus_Text_0:
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
	.string "Hey!\nDon't go before activating your Pokestus!$"

SuncloakTown_Lab_EventScript_Bookshelf_Text_0:
	.string "The shelves are filled with exciting new\n"
	.string "research!$"

SuncloakTown_Lab_EventScript_Notes_Text_0:
	.string "I shouldn't mess with any of the\n"
	.string "Professors notes.$"
