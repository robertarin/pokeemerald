SuncloakTown_Lab_MapScripts::
	.byte 0


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
	applymovement 1, AssistantExclamation
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_1
	giveitem ITEM_POKE_BALL, 10
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_2
	giveitem ITEM_POKESTUS, 1
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_3
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 6
	goto SuncloakTown_Lab_EventScript_Assistant_1

SuncloakTown_Lab_EventScript_Assistant_3:
	faceplayer
	msgbox SuncloakTown_Lab_EventScript_Assistant_Text_4
	goto SuncloakTown_Lab_EventScript_Assistant_1


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
	goto SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_1


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

AssistantToSynthesizer:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

SuncloakTown_Lab_EventScript_Assistant_Text_0:
	.string "Maybe if I update the synthesis event\n"
	.string "here ...$"

SuncloakTown_Lab_EventScript_Assistant_Text_1:
	.string "Ah! You must be our newest member,\n"
	.string "{PLAYER}. Professor Coal told me to\l"
	.string "outfit you. First, here are some\l"
	.string "Pokeballs to keep you safe while you're\l"
	.string "out there.$"

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
	.string "fell only in the most remote locations.\l"
	.string "This one is brand new, and you will need\l"
	.string "to activate it at the synthesizer in\l"
	.string "the corner of the lab. Go give it a try!$"

SuncloakTown_Lab_EventScript_Assistant_Text_4:
	.string "Go give the synthesizer a try!$"

SuncloakTown_Lab_EventScript_Assistant_Text_5:
	.string "If we had more meteor shards we could\n"
	.string "upgrade the Pokestus!$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_0:
	.string "This looks complicated.\n"
	.string "Maybe I shouldn't touch it.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_1:
	.string "The Pokestus synthesizer whirrs to\n"
	.string "life.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_2:
	.string "Press the blinking 'ENGAGE' button?$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_3:
	.string "Your Pokestus has been activated!\n"
	.string "It now has 1 charge.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_4:
	.string "Do you wish to enhance your Pokestus\nwith a Meteor Shard?$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_5:
	.string "Your Pokestus has been enhanced.$"

SuncloakTown_Lab_EventScript_Pokestus_Synthesizer_Text_6:
	.string "Your Pokestus has been re-charged.$"

SuncloakTown_Lab_EventScript_Bookshelf_Text_0:
	.string "The shelves are filled with exciting new\n"
	.string "research!$"

SuncloakTown_Lab_EventScript_Notes_Text_0:
	.string "I shouldn't mess with any of the\n"
	.string "Professors notes.$"
