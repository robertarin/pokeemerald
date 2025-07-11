SuncloakTown_PlayerHouse_MapScripts::
	.byte 0


SuncloakTown_PlayerHouse_EventScript_OldMan::
# 4 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	lock
# 5 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	faceplayer
# 6 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	goto_if_set FLAG_SUNCLOAK_TOWN_PLAYER_HOUSE_UNVISITED, SuncloakTown_PlayerHouse_EventScript_OldMan_2
SuncloakTown_PlayerHouse_EventScript_OldMan_1:
# 10 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	msgbox SuncloakTown_PlayerHouse_EventScript_OldMan_Text_1
# 11 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	release
	return

SuncloakTown_PlayerHouse_EventScript_OldMan_2:
# 7 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	msgbox SuncloakTown_PlayerHouse_EventScript_OldMan_Text_0
# 8 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	clearflag FLAG_SUNCLOAK_TOWN_PLAYER_HOUSE_UNVISITED
	goto SuncloakTown_PlayerHouse_EventScript_OldMan_1


SuncloakTown_PlayerHouse_EventScript_Pooch::
# 15 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	lock
# 16 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	faceplayer
# 17 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 18 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	msgbox SuncloakTown_PlayerHouse_EventScript_Pooch_Text_0
# 19 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	release
	return


SuncloakTown_PlayerHouse_EventScript_OldMan_Text_0:
# 7 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	.string "Hey {PLAYER}, your newfangled PC was\n"
	.string "just delivered to your room downstairs!$"

SuncloakTown_PlayerHouse_EventScript_OldMan_Text_1:
# 10 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	.string "Don't you forget that rent is due at\n"
	.string "the end of the week!$"

SuncloakTown_PlayerHouse_EventScript_Pooch_Text_0:
# 18 "data/maps/SuncloakTown_PlayerHouse/scripts.pory"
	.string "Woof!$"
