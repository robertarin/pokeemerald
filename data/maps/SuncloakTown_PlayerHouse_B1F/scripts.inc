SuncloakTown_PlayerHouse_B1F_MapScripts::
	.byte 0


SuncloakTown_PlayerHouse_B1F_EventScript_Bed::
# 4 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	lock
# 5 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	msgbox SuncloakTown_PlayerHouse_B1F_EventScript_Bed_Text_0, MSGBOX_YESNO
# 6 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_PlayerHouse_B1F_EventScript_Bed_2
SuncloakTown_PlayerHouse_B1F_EventScript_Bed_1:
# 11 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	release
	return

SuncloakTown_PlayerHouse_B1F_EventScript_Bed_2:
# 7 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	closemessage
# 8 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 9 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	goto SuncloakTown_PlayerHouse_B1F_EventScript_Bed_1


SuncloakTown_PlayerHouse_B1F_EventScript_PC::
# 15 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	lockall
# 16 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 17 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	special DoPCTurnOnEffect
# 18 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	playse SE_PC_ON
# 19 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 20 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	special BedroomPC
# 21 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	waitstate
# 22 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	releaseall
	return


SuncloakTown_PlayerHouse_B1F_EventScript_Notebook::
# 26 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	lock
# 27 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	msgbox SuncloakTown_PlayerHouse_B1F_EventScript_Notebook_Text_0
# 28 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	release
	return


SuncloakTown_PlayerHouse_B1F_EventScript_Dresser::
# 32 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	lock
# 33 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	msgbox SuncloakTown_PlayerHouse_B1F_EventScript_Dresser_Text_0
# 34 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	release
	return


SuncloakTown_PlayerHouse_B1F_EventScript_WallClock::
# 38 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	lockall
# 39 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 40 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	special Special_ViewWallClock
# 42 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	waitstate
# 43 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	releaseall
	return


SuncloakTown_PlayerHouse_B1F_EventScript_Bed_Text_0:
# 5 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	.string "Take a rest?$"

SuncloakTown_PlayerHouse_B1F_EventScript_Notebook_Text_0:
# 27 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	.string "It's some notes!$"

SuncloakTown_PlayerHouse_B1F_EventScript_Dresser_Text_0:
# 33 "data/maps/SuncloakTown_PlayerHouse_B1F/scripts.pory"
	.string "If only I had some other clothes...$"
