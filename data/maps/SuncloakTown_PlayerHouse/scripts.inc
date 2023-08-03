SuncloakTown_PlayerHouse_MapScripts::
	.byte 0


SuncloakTown_PlayerHouse_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_SUNCLOAK_TOWN_PLAYER_HOUSE_UNVISITED, SuncloakTown_PlayerHouse_EventScript_OldMan_2
SuncloakTown_PlayerHouse_EventScript_OldMan_1:
	msgbox SuncloakTown_PlayerHouse_EventScript_OldMan_Text_1
	release
	return

SuncloakTown_PlayerHouse_EventScript_OldMan_2:
	msgbox SuncloakTown_PlayerHouse_EventScript_OldMan_Text_0
	clearflag FLAG_SUNCLOAK_TOWN_PLAYER_HOUSE_UNVISITED
	goto SuncloakTown_PlayerHouse_EventScript_OldMan_1


SuncloakTown_PlayerHouse_EventScript_Pooch::
	lock
	faceplayer
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox SuncloakTown_PlayerHouse_EventScript_Pooch_Text_0
	release
	return


SuncloakTown_PlayerHouse_EventScript_OldMan_Text_0:
	.string "Hey {PLAYER}, your newfangled PC was\n"
	.string "just delivered to your room\l"
	.string "downstairs!$"

SuncloakTown_PlayerHouse_EventScript_OldMan_Text_1:
	.string "How did your meeting go with that fancy\n"
	.string "professor? Don't you forget that rent\l"
	.string "is due at the end of the week!$"

SuncloakTown_PlayerHouse_EventScript_Pooch_Text_0:
	.string "Woof!$"
