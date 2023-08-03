SuncloakDepths_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SuncloakDepths_B1F_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, SuncloakDepths_B1F_OnLoad
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
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 8
	goto_if_lt SuncloakDepths_B1F_OnTransition_1
	return

SuncloakDepths_B1F_OnTransition_1:
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_COAL
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_PEERS
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_WALLY
	setflashlevel 1
	return


SuncloakDepths_B1F_OnLoad::
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 3
	goto_if_ge SuncloakDepths_B1F_OnLoad_1
	return

SuncloakDepths_B1F_OnLoad_1:
	setmetatile 22, 3, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
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
	setobjectxyperm 1, 21, 6
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 2
	release
	return


SuncloakDepths_B1F_EventScript_Coal::
	lock
	faceplayer
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 4
	goto_if_lt SuncloakDepths_B1F_EventScript_Coal_2
	msgbox SuncloakDepths_B1F_EventScript_Coal_Text_1
SuncloakDepths_B1F_EventScript_Coal_1:
	release
	return

SuncloakDepths_B1F_EventScript_Coal_2:
	msgbox SuncloakDepths_B1F_EventScript_Coal_Text_0
	goto SuncloakDepths_B1F_EventScript_Coal_1


SuncloakDepths_B1F_EventScript_Wally::
	lock
	faceplayer
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 4
	goto_if_lt SuncloakDepths_B1F_EventScript_Wally_2
	msgbox SuncloakDepths_B1F_EventScript_Wally_Text_1
SuncloakDepths_B1F_EventScript_Wally_1:
	release
	return

SuncloakDepths_B1F_EventScript_Wally_2:
	msgbox SuncloakDepths_B1F_EventScript_Wally_Text_0
	goto SuncloakDepths_B1F_EventScript_Wally_1


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
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox SuncloakDepths_B1F_EventScript_Pikachu_Text_0
	release
	return


SuncloakDepths_B1F_EventScript_Specimen::
	lock
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 2
	goto_if_eq SuncloakDepths_B1F_EventScript_Specimen_2
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_3
SuncloakDepths_B1F_EventScript_Specimen_1:
	release
	return

SuncloakDepths_B1F_EventScript_Specimen_2:
	goto_if_unset FLAG_TEMP_1, SuncloakDepths_B1F_EventScript_Specimen_6
SuncloakDepths_B1F_EventScript_Specimen_5:
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SuncloakDepths_B1F_EventScript_Specimen_8
	goto SuncloakDepths_B1F_EventScript_Specimen_1

SuncloakDepths_B1F_EventScript_Specimen_6:
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_0
	setflag FLAG_TEMP_1
	goto SuncloakDepths_B1F_EventScript_Specimen_5

SuncloakDepths_B1F_EventScript_Specimen_8:
	playse SE_CLICK
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 3
	setmetatile 22, 3, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	special DrawWholeMapView
	delay 10
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_2
	giveitem ITEM_SUNCLOAK_DEPTHS_SAMPLE
	goto SuncloakDepths_B1F_EventScript_Specimen_1


SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample::
	lock
	applymovement 1, CoalFaceRight
	msgbox SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_0
	applymovement 1, CoalExamineBlueRock
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayerBack
	waitmovement 1
	msgbox SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_1
	applymovement 1, CoalMoveFromRock
	waitmovement 1
	msgbox SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_2
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 4
	release
	return


SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo::
	lock
	msgbox SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_0
	applymovement 1, CoalRunToTellAboutSupplies
	msgbox SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_1
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 5
	release
	return


SuncloakDepths_B1F_Trigger_TutorialPushRight::
	applymovement 1, JumpInPlaceDown
	msgbox Tutorial_GoCheckOutRock
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TutorialPushRight
	return


SuncloakDepths_B1F_Trigger_TutorialPushLeft::
	applymovement 1, JumpInPlaceDown
	msgbox Tutorial_GoCheckOutRock
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TutorialPushLeft
	return


JumpInPlaceDown:
	jump_in_place_down
	step_end

PushPlayerBack:
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	face_left
	step_end

CoalMoveFromRock:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	face_down
	step_end

CoalExamineBlueRock:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	jump_in_place_up
	jump_in_place_up
	jump_in_place_up
	step_end

CoalRunToTellAboutSupplies:
	jump_in_place_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_up
	step_end

CoalFaceRight:
	jump_in_place_right
	emote_exclamation_mark
	step_end

TutorialPushRight:
	walk_fast_right
	step_end

TutorialPushLeft:
	walk_fast_left
	step_end

PlayerJumpInPlaceRockSmashed:
	jump_in_place_up
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
	.string "crystals.\p"
	.string "$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_1:
	.string "Over the last few hundred years they\n"
	.string "have been looted and sold.\p"
	.string "$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_2:
	.string "Now only this single specimen remains.\p"
	.string "$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_3:
	.string "We didn't think much of it until 4 days\n"
	.string "ago when a meteor landed up by Mt Mntn.\p"
	.string "$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_4:
	.string "The meteor looked to be made of an\n"
	.string "incredibly similar material to these\l"
	.string "stones here.\p"
	.string "$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_5:
	.string "I believe this rock is from space!$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_6:
	.string "Today, we're going to catalogue this\n"
	.string "specimen and identify the origins of\l"
	.string "these stones.\p"
	.string "$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_7:
	.string "Come up and check it out for\n"
	.string "yourselves! {PLAYER}, you're up\l"
	.string "first!\p"
	.string "$"

SuncloakDepths_B1F_EventScript_Coal_Text_0:
	.string "Note the unique red color of the stone\n"
	.string "near the specimen. It is quite\l"
	.string "different from the brown of the rest\l"
	.string "of the cave. What could it mean?$"

SuncloakDepths_B1F_EventScript_Coal_Text_1:
	.string "Take that sample over to the lab on\n"
	.string "Route 201! Just leave Eastbound out\l"
	.string "of Suncloak Town.$"

SuncloakDepths_B1F_EventScript_Wally_Text_0:
	.string "This is an amazing opportunity! Our\n"
	.string "first day and already something\l"
	.string "exciting is happening!$"

SuncloakDepths_B1F_EventScript_Wally_Text_1:
	.string "I guess I'll stay here and look at rocks\n"
	.string "with the professor.$"

SuncloakDepths_B1F_EventScript_Sci1_Text_0:
	.string "Is this safe? Should you be wearing\n"
	.string "gloves?$"

SuncloakDepths_B1F_EventScript_Sci2_Text_0:
	.string "I don't remember hearing about a meteor\n"
	.string "landing...$"

SuncloakDepths_B1F_EventScript_Pikachu_Text_0:
	.string "Pika pika!$"

SuncloakDepths_B1F_EventScript_Specimen_Text_0:
	.string "You peer down at a cool blue stone.$"

SuncloakDepths_B1F_EventScript_Specimen_Text_1:
	.string "Take a sample?$"

SuncloakDepths_B1F_EventScript_Specimen_Text_2:
	.string "You take a sample of the blue stone.\n"
	.string "The stone glimmers slightly less now.$"

SuncloakDepths_B1F_EventScript_Specimen_Text_3:
	.string "The last remaining blue stone from\n"
	.string "Suncloak Depths. Now with a little less\l"
	.string "blue.$"

SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_0:
	.string "Ooof!\p"
	.string "Did you just crack open that entire\n"
	.string "thing!?$"

SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_1:
	.string "That is ... not entirely what I meant.$"

SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_2:
	.string "{PLAYER}, since you have our entire\n"
	.string "sample now, would you please take that\l"
	.string "over to Dr. DoctorName at our lab?\l"
	.string "Let's see what they have to think.\p"
	.string "Please try to keep that sample intact.$"

SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_0:
	.string "Wait! I almost forgot!$"

SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_1:
	.string "Stop by the lab at the south side of\n"
	.string "town for supplies before you go.\p"
	.string "Route 201 is known to have a few\n"
	.string "trainers who are looking to battle as\l"
	.string "well as some wild pokemon.\p"
	.string "Check with my assistant.$"

Tutorial_GoCheckOutRock::
	.string "Come on! Go check out the rock.$"
