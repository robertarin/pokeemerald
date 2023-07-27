SuncloakDepths_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SuncloakDepths_B1F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_SUNCLOAK_TUTORIAL_STATE, 1, SuncloakDepths_B1F_OnWarp_SetPlayerForIntro
	.2byte 0

SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SUNCLOAK_TUTORIAL_STATE, 1, SuncloakDepths_B1F_OnFrame_IntroCoalSpeech
	.2byte 0


SuncloakDepths_B1F_OnTransition::
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 1
	goto_if_eq SuncloakDepths_B1F_OnTransition_1
	return

SuncloakDepths_B1F_OnTransition_1:
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_COAL
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_PEERS
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_WALLY
	setflashlevel 1
	return


SuncloakDepths_B1F_OnWarp_SetPlayerForIntro::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


SuncloakDepths_B1F_OnFrame_IntroCoalSpeech::
	lock
	applymovement 1, CoalSpeech_WalkLeft
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_0
	waitmovement 1
	applymovement 1, CoalSpeech_WalkRight
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_1
	waitmovement 1
	applymovement 1, CoalSpeech_WalkLeft
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_2
	waitmovement 1
	applymovement 1, CoalSpeech_WalkRight
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_3
	waitmovement 1
	applymovement 1, CoalSpeech_WalkLeft
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_4
	waitmovement 1
	applymovement 1, CoalSpeech_WalkFromLeftToCenter
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_5
	waitmovement 1
	applymovement 1, CoalSpeech_WalkFromCenterToRight
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_6
	waitmovement 1
	applymovement 1, CoalSpeech_WalkOut
	waitmovement 1
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_7
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 2
	release
	return


SuncloakDepths_B1F_EventScript_Coal::
	lock
	faceplayer
	msgbox SuncloakDepths_B1F_EventScript_Coal_Text_0
	release
	return


SuncloakDepths_B1F_EventScript_Wally::
	lock
	faceplayer
	msgbox SuncloakDepths_B1F_EventScript_Wally_Text_0
	release
	return


SuncloakDepths_B1F_EventScript_Sci1::
	lock
	faceplayer
	msgbox SuncloakDepths_B1F_EventScript_Sci1_Text_0
	release
	return


SuncloakDepths_B1F_EventScript_Sci2::
	lock
	faceplayer
	msgbox SuncloakDepths_B1F_EventScript_Sci2_Text_0
	release
	return


SuncloakDepths_B1F_EventScript_Pikachu::
	lock
	faceplayer
	msgbox SuncloakDepths_B1F_EventScript_Pikachu_Text_0
	release
	return


SuncloakDepths_B1F_EventScript_Specimen::
	lock
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_0
	release
	return


SuncloakDepths_B1F_Trigger_TutorialPushRight::
	msgbox Tutorial_GoCheckOutRock
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TutorialPushRight
	return


SuncloakDepths_B1F_Trigger_TutorialPushLeft::
	msgbox Tutorial_GoCheckOutRock
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TutorialPushLeft
	return


TutorialPushRight:
	walk_fast_right
	step_end

TutorialPushLeft:
	walk_fast_left
	step_end

CoalSpeech_WalkLeft:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	face_down
	step_end

CoalSpeech_WalkRight:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	face_down
	step_end

CoalSpeech_WalkFromLeftToCenter:
	walk_slow_right
	walk_slow_right
	face_up
	jump_in_place_up
	step_end

CoalSpeech_WalkFromCenterToRight:
	walk_slow_right
	walk_slow_right
	face_down
	step_end

CoalSpeech_WalkOut:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	face_down
	step_end

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_0:
	.string "When Suncloak town was founded the\n"
	.string "residents discovered that the caves\l"
	.string "beneath had hundreds of fantastic\l"
	.string "crystals.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_1:
	.string "Over the last few hundred years they\n"
	.string "have been looted and sold.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_2:
	.string "Now only this single specimen remains.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_3:
	.string "We didn't think much of it until 4 days\n"
	.string "ago when a meteor landed North on Mt\l"
	.string "Pyre.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_4:
	.string "The meteor looked to be made of an\n"
	.string "incredibly similar material to these\l"
	.string "stones here.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_5:
	.string "I believe this rock is from space!$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_6:
	.string "Today, we're going to catalogue this\n"
	.string "specimen and identify the origins of\l"
	.string "these stones.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_7:
	.string "Come up and check it out for\n"
	.string "yourselves! {PLAYER}, you're up\l"
	.string "first!$"

SuncloakDepths_B1F_EventScript_Coal_Text_0:
	.string "Note the unique red color of the stone\n"
	.string "near the specimen. It is quite\l"
	.string "different from the brown of the rest\l"
	.string "of the cave. What could it mean?$"

SuncloakDepths_B1F_EventScript_Wally_Text_0:
	.string "This is an amazing opportunity! Our\n"
	.string "first day and already something\l"
	.string "exciting is happening!$"

SuncloakDepths_B1F_EventScript_Sci1_Text_0:
	.string "Is this safe? Should you be wearing\n"
	.string "gloves?$"

SuncloakDepths_B1F_EventScript_Sci2_Text_0:
	.string "I don't remember hearing about a meteor\n"
	.string "landing...$"

SuncloakDepths_B1F_EventScript_Pikachu_Text_0:
	.string "Pika pika!$"

SuncloakDepths_B1F_EventScript_Specimen_Text_0:
	.string "It certainly looks like a weird rock.\n"
	.string "Could it really be from space?$"

Tutorial_GoCheckOutRock::
	.string "Come on! Go check out the rock.$"
