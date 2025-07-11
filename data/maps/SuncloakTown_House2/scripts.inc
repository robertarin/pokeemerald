SuncloakTown_House2_MapScripts::
	.byte 0


SuncloakTown_House2_EventScript_OldWoman::
# 4 "data/maps/SuncloakTown_House2/scripts.pory"
	lock
# 5 "data/maps/SuncloakTown_House2/scripts.pory"
	faceplayer
# 6 "data/maps/SuncloakTown_House2/scripts.pory"
	msgbox SuncloakTown_House2_EventScript_OldWoman_Text_0
# 7 "data/maps/SuncloakTown_House2/scripts.pory"
	release
	return


SuncloakTown_House2_EventScript_OldWoman_Text_0:
# 6 "data/maps/SuncloakTown_House2/scripts.pory"
	.string "I havn't seen you around here before!\n"
	.string "Did you move in recently?$"
