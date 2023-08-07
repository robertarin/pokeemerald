SuncloakTown_PlayerHouse_B1F_MapScripts::
	.byte 0


SuncloakTown_PlayerHouse_B1F_EventScript_Bed::
	lock
	msgbox SuncloakTown_PlayerHouse_B1F_EventScript_Bed_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SuncloakTown_PlayerHouse_B1F_EventScript_Bed_2
SuncloakTown_PlayerHouse_B1F_EventScript_Bed_1:
	release
	return

SuncloakTown_PlayerHouse_B1F_EventScript_Bed_2:
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	goto SuncloakTown_PlayerHouse_B1F_EventScript_Bed_1


SuncloakTown_PlayerHouse_B1F_EventScript_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	return


SuncloakTown_PlayerHouse_B1F_EventScript_Notebook::
	lock
	msgbox SuncloakTown_PlayerHouse_B1F_EventScript_Notebook_Text_0
	release
	return


SuncloakTown_PlayerHouse_B1F_EventScript_Dresser::
	lock
	msgbox SuncloakTown_PlayerHouse_B1F_EventScript_Dresser_Text_0
	release
	return


SuncloakTown_PlayerHouse_B1F_EventScript_WallClock::
	lockall
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	return


SuncloakTown_PlayerHouse_B1F_EventScript_Bed_Text_0:
	.string "Take a rest?$"

SuncloakTown_PlayerHouse_B1F_EventScript_Notebook_Text_0:
	.string "It's some notes!$"

SuncloakTown_PlayerHouse_B1F_EventScript_Dresser_Text_0:
	.string "If only I had some other clothes...$"
