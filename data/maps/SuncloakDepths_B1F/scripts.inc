SuncloakDepths_B1F_MapScripts::
# 16 "data/maps/SuncloakDepths_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SuncloakDepths_B1F_OnTransition
# 23 "data/maps/SuncloakDepths_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SuncloakDepths_B1F_OnLoad
# 17 "data/maps/SuncloakDepths_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 20 "data/maps/SuncloakDepths_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 18 "data/maps/SuncloakDepths_B1F/scripts.pory"
	map_script_2 VAR_SUNCLOAK_TUTORIAL_STATE, 1, SuncloakDepths_B1F_OnWarp_SetPlayerForIntro
	.2byte 0

SuncloakDepths_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/SuncloakDepths_B1F/scripts.pory"
	map_script_2 VAR_SUNCLOAK_TUTORIAL_STATE, 1, SuncloakDepths_B1F_OnFrame_IntroCoalSpeech
	.2byte 0


SuncloakDepths_B1F_OnTransition::
# 27 "data/maps/SuncloakDepths_B1F/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 9
	goto_if_lt SuncloakDepths_B1F_OnTransition_1
	return

SuncloakDepths_B1F_OnTransition_1:
# 28 "data/maps/SuncloakDepths_B1F/scripts.pory"
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_COAL
# 29 "data/maps/SuncloakDepths_B1F/scripts.pory"
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_PEERS
# 30 "data/maps/SuncloakDepths_B1F/scripts.pory"
	clearflag FLAG_SUNCLOAK_DEPTHS_HIDE_WALLY
# 31 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setflashlevel 1
	return


SuncloakDepths_B1F_OnLoad::
# 36 "data/maps/SuncloakDepths_B1F/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 3
	goto_if_ge SuncloakDepths_B1F_OnLoad_1
	return

SuncloakDepths_B1F_OnLoad_1:
# 37 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setmetatile 22, 3, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
	return


SuncloakDepths_B1F_OnWarp_SetPlayerForIntro::
# 42 "data/maps/SuncloakDepths_B1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


SuncloakDepths_B1F_OnFrame_IntroCoalSpeech::
# 46 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 47 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkLeft
# 48 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_0
# 50 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 51 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkRight
# 52 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_1
# 53 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 54 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkLeft
# 55 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_2
# 56 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 57 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkRight
# 58 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_3
# 59 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 60 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkLeft
# 61 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_4
# 62 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 63 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkFromLeftToCenter
# 64 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_5
# 65 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 66 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkFromCenterToRight
# 67 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_6
# 68 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 69 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalSpeech_WalkOut
# 70 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 71 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_7
# 72 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setobjectxyperm 1, 21, 6
# 73 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 2
# 74 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return


SuncloakDepths_B1F_EventScript_Coal::
# 78 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 79 "data/maps/SuncloakDepths_B1F/scripts.pory"
	faceplayer
# 80 "data/maps/SuncloakDepths_B1F/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 4
	goto_if_lt SuncloakDepths_B1F_EventScript_Coal_2
# 86 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Coal_Text_1
SuncloakDepths_B1F_EventScript_Coal_1:
# 89 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return

SuncloakDepths_B1F_EventScript_Coal_2:
# 81 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Coal_Text_0
	goto SuncloakDepths_B1F_EventScript_Coal_1


SuncloakDepths_B1F_EventScript_Wally::
# 93 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 94 "data/maps/SuncloakDepths_B1F/scripts.pory"
	faceplayer
# 95 "data/maps/SuncloakDepths_B1F/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 4
	goto_if_lt SuncloakDepths_B1F_EventScript_Wally_2
# 99 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Wally_Text_1
SuncloakDepths_B1F_EventScript_Wally_1:
# 101 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return

SuncloakDepths_B1F_EventScript_Wally_2:
# 96 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Wally_Text_0
	goto SuncloakDepths_B1F_EventScript_Wally_1


SuncloakDepths_B1F_EventScript_Sci1::
# 105 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 106 "data/maps/SuncloakDepths_B1F/scripts.pory"
	faceplayer
# 107 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Sci1_Text_0
# 108 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return


SuncloakDepths_B1F_EventScript_Sci2::
# 112 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 113 "data/maps/SuncloakDepths_B1F/scripts.pory"
	faceplayer
# 114 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Sci2_Text_0
# 115 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return


SuncloakDepths_B1F_EventScript_Pikachu::
# 119 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 120 "data/maps/SuncloakDepths_B1F/scripts.pory"
	faceplayer
# 121 "data/maps/SuncloakDepths_B1F/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 122 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Pikachu_Text_0
# 123 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return


SuncloakDepths_B1F_EventScript_Specimen::
# 127 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 128 "data/maps/SuncloakDepths_B1F/scripts.pory"
	compare VAR_SUNCLOAK_TUTORIAL_STATE, 2
	goto_if_eq SuncloakDepths_B1F_EventScript_Specimen_2
# 146 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_3
SuncloakDepths_B1F_EventScript_Specimen_1:
# 149 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return

SuncloakDepths_B1F_EventScript_Specimen_2:
# 129 "data/maps/SuncloakDepths_B1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SuncloakDepths_B1F_EventScript_Specimen_6
SuncloakDepths_B1F_EventScript_Specimen_5:
# 133 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_1, MSGBOX_YESNO
# 134 "data/maps/SuncloakDepths_B1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SuncloakDepths_B1F_EventScript_Specimen_8
	goto SuncloakDepths_B1F_EventScript_Specimen_1

SuncloakDepths_B1F_EventScript_Specimen_6:
# 130 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_0
# 131 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto SuncloakDepths_B1F_EventScript_Specimen_5

SuncloakDepths_B1F_EventScript_Specimen_8:
# 135 "data/maps/SuncloakDepths_B1F/scripts.pory"
	playse SE_CLICK
# 136 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 3
# 137 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setmetatile 22, 3, METATILE_Cave_ShoalCave_BlueStone_Small, TRUE
# 138 "data/maps/SuncloakDepths_B1F/scripts.pory"
	special DrawWholeMapView
# 139 "data/maps/SuncloakDepths_B1F/scripts.pory"
	delay 10
# 140 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_EventScript_Specimen_Text_2
# 142 "data/maps/SuncloakDepths_B1F/scripts.pory"
	giveitem ITEM_SUNCLOAK_DEPTHS_SAMPLE
	goto SuncloakDepths_B1F_EventScript_Specimen_1


SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample::
# 153 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 154 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalFaceRight
# 155 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_0
# 157 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalExamineBlueRock
# 158 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayerBack
# 159 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 160 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_1
# 161 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalMoveFromRock
# 162 "data/maps/SuncloakDepths_B1F/scripts.pory"
	waitmovement 1
# 163 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_2
# 168 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 4
# 169 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return


SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo::
# 173 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock
# 174 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_0
# 175 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, CoalRunToTellAboutSupplies
# 176 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_1
# 181 "data/maps/SuncloakDepths_B1F/scripts.pory"
	setvar VAR_SUNCLOAK_TUTORIAL_STATE, 5
# 182 "data/maps/SuncloakDepths_B1F/scripts.pory"
	release
	return


SuncloakDepths_B1F_Trigger_TutorialPushRight::
# 186 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, JumpInPlaceDown
# 187 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox Tutorial_GoCheckOutRock
# 188 "data/maps/SuncloakDepths_B1F/scripts.pory"
	closemessage
# 189 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TutorialPushRight
	return


SuncloakDepths_B1F_Trigger_TutorialPushLeft::
# 193 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement 1, JumpInPlaceDown
# 194 "data/maps/SuncloakDepths_B1F/scripts.pory"
	msgbox Tutorial_GoCheckOutRock
# 195 "data/maps/SuncloakDepths_B1F/scripts.pory"
	closemessage
# 196 "data/maps/SuncloakDepths_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TutorialPushLeft
	return


# 203 "data/maps/SuncloakDepths_B1F/scripts.pory"
JumpInPlaceDown:
# 204 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_down
	step_end

# 207 "data/maps/SuncloakDepths_B1F/scripts.pory"
PushPlayerBack:
# 208 "data/maps/SuncloakDepths_B1F/scripts.pory"
	lock_facing_direction
# 209 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
# 210 "data/maps/SuncloakDepths_B1F/scripts.pory"
	unlock_facing_direction
# 211 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_left
	step_end

# 214 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalMoveFromRock:
# 215 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_down
# 215 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_down
# 216 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_left
# 217 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_down
	step_end

# 220 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalExamineBlueRock:
# 221 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
# 222 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_up
# 222 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_up
# 223 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_up
# 223 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_up
# 223 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_up
	step_end

# 226 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalRunToTellAboutSupplies:
# 227 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_right
# 228 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
# 228 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
# 228 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
# 228 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
# 228 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
# 229 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_up
	step_end

# 232 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalFaceRight:
# 233 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_right
# 234 "data/maps/SuncloakDepths_B1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 237 "data/maps/SuncloakDepths_B1F/scripts.pory"
TutorialPushRight:
# 238 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_right
	step_end

# 241 "data/maps/SuncloakDepths_B1F/scripts.pory"
TutorialPushLeft:
# 242 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_fast_left
	step_end

# 245 "data/maps/SuncloakDepths_B1F/scripts.pory"
PlayerJumpInPlaceRockSmashed:
# 246 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_up
	step_end

# 249 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalSpeech_WalkLeft:
# 250 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_left
# 250 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_left
# 250 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_left
# 250 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_left
# 251 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_down
	step_end

# 254 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalSpeech_WalkRight:
# 255 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 255 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 255 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 255 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 256 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_down
	step_end

# 259 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalSpeech_WalkFromLeftToCenter:
# 260 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 260 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 261 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_up
# 262 "data/maps/SuncloakDepths_B1F/scripts.pory"
	jump_in_place_up
	step_end

# 265 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalSpeech_WalkFromCenterToRight:
# 266 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 266 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_slow_right
# 267 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_down
	step_end

# 270 "data/maps/SuncloakDepths_B1F/scripts.pory"
CoalSpeech_WalkOut:
# 271 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_left
# 271 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_left
# 272 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_down
# 272 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_down
# 273 "data/maps/SuncloakDepths_B1F/scripts.pory"
	walk_left
# 274 "data/maps/SuncloakDepths_B1F/scripts.pory"
	face_down
	step_end

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_0:
# 48 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "When Suncloak town was founded the\n"
	.string "residents discovered that the caves\l"
	.string "beneath had hundreds of fantastic\l"
	.string "crystals.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_1:
# 52 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Over the last few hundred years they\n"
	.string "have been looted and sold.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_2:
# 55 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Now only this single specimen remains.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_3:
# 58 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "We didn't think much of it until 4 days\n"
	.string "ago when a meteor landed up by Mt Grey.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_4:
# 61 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "The meteor looked to be made of an\n"
	.string "incredibly similar material to these\l"
	.string "stones here.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_5:
# 64 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "I believe this rock is from space!$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_6:
# 67 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Today, we're going to catalogue this\n"
	.string "specimen and identify the origins of\l"
	.string "these stones.$"

SuncloakDepths_B1F_OnFrame_IntroCoalSpeech_Text_7:
# 71 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Come up and check it out for\n"
	.string "yourselves! {PLAYER}, you're up first!$"

SuncloakDepths_B1F_EventScript_Coal_Text_0:
# 81 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Note the unique red color of the stone\n"
	.string "near the specimen. It is quite\l"
	.string "different from the brown of the rest of\l"
	.string "the cave. What could it mean?$"

SuncloakDepths_B1F_EventScript_Coal_Text_1:
# 86 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Take that sample over to Dr. Fitzgerald\n"
	.string "on Route 201! Just leave Eastbound out\l"
	.string "of Suncloak Town.$"

SuncloakDepths_B1F_EventScript_Wally_Text_0:
# 96 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "This is an amazing opportunity! Our\n"
	.string "first day and already something\l"
	.string "exciting is happening!$"

SuncloakDepths_B1F_EventScript_Wally_Text_1:
# 99 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "I guess I'll stay here and look at rocks\n"
	.string "with the professor.$"

SuncloakDepths_B1F_EventScript_Sci1_Text_0:
# 107 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Is this safe? Should you be wearing\n"
	.string "gloves?$"

SuncloakDepths_B1F_EventScript_Sci2_Text_0:
# 114 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "I don't remember hearing about a meteor\n"
	.string "landing...$"

SuncloakDepths_B1F_EventScript_Pikachu_Text_0:
# 122 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Pika pika!$"

SuncloakDepths_B1F_EventScript_Specimen_Text_0:
# 130 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "You peer down at a cool blue stone.$"

SuncloakDepths_B1F_EventScript_Specimen_Text_1:
# 133 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Take a sample?$"

SuncloakDepths_B1F_EventScript_Specimen_Text_2:
# 140 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "You take a sample of the blue stone.\n"
	.string "The stone glimmers slightly less now.$"

SuncloakDepths_B1F_EventScript_Specimen_Text_3:
# 146 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "The last remaining blue stone from\n"
	.string "Suncloak Depths. Now with a little less\l"
	.string "blue.$"

SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_0:
# 155 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Ooof!\p"
	.string "Did you just crack open that entire\n"
	.string "thing!?$"

SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_1:
# 160 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "That is ... not entirely what I meant.$"

SuncloakDepths_B1F_Trigger_AfterPlayerTakesSample_Text_2:
# 163 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "{PLAYER}, since you have our entire\n"
	.string "sample now, would you please take that\l"
	.string "over to Dr. Fitzgerald at our lab? Let's\l"
	.string "see what they have to think.\p"
	.string "Please try to keep that sample intact.$"

SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_0:
# 174 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Wait! I almost forgot!$"

SuncloakDepths_B1F_Trigger_TutorialSuppliesInfo_Text_1:
# 176 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Stop by the lab at the south side of\n"
	.string "town for supplies before you go.\p"
	.string "Route 201 is known to have a few\n"
	.string "trainers who are looking to battle as\l"
	.string "well as some wild pokemon.\p"
	.string "Check with my assistant.$"

Tutorial_GoCheckOutRock::
# 199 "data/maps/SuncloakDepths_B1F/scripts.pory"
	.string "Come on! Go check out the rock.$"
