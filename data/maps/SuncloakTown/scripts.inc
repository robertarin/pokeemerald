SuncloakTown_MapScripts::
	.byte 0


SuncloakTown_EventScript_Camper::
	lock
	faceplayer
	msgbox SuncloakTown_EventScript_Camper_Text_0
	special PokestusRefill
	release
	return


SuncloakTown_EventScript_Camper_Text_0:
	.string "Restored pokestus.$"
