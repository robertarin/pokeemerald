SuncloakTown_House2_MapScripts::
	.byte 0


SuncloakTown_House2_EventScript_OldWoman::
	lock
	faceplayer
	msgbox SuncloakTown_House2_EventScript_OldWoman_Text_0
	release
	return


SuncloakTown_House2_EventScript_OldWoman_Text_0:
	.string "I havn't seen you around here before!\n"
	.string "Did you move in recently?$"
