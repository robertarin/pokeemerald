SuncloakTown_MapScripts::
	.byte 0


SuncloakTown_EventScript_Camper::
	lock
	faceplayer
	msgbox SuncloakTown_EventScript_Camper_Text_0
	release
	return


SuncloakTown_EventScript_Woman::
	lock
	faceplayer
	msgbox SuncloakTown_EventScript_Woman_Text_0
	release
	return


SuncloakTown_EventScript_DepthsSign::
	lock
	msgbox SuncloakTown_EventScript_DepthsSign_Text_0
	release
	return


SuncloakTown_EventScript_TownSign::
	lock
	msgbox SuncloakTown_EventScript_TownSign_Text_0
	release
	return


SuncloakTown_EventScript_LabSign::
	lock
	msgbox SuncloakTown_EventScript_LabSign_Text_0
	release
	return


SuncloakTown_EventScript_Camper_Text_0:
	.string "Be careful out at Route 201!\p"
	.string "If you're heading out there you should\n"
	.string "catch as many Pokemon as you can\l"
	.string "carry!$"

SuncloakTown_EventScript_Woman_Text_0:
	.string "Suncloak is currently a backwater town,\n"
	.string "but I'm speculating that the value of\l"
	.string "my waterfront property will rise\l"
	.string "dramatically in the next 10 years!$"

SuncloakTown_EventScript_DepthsSign_Text_0:
	.string "Suncloak Depths -\p"
	.string "Admittance to HRI members only.$"

SuncloakTown_EventScript_TownSign_Text_0:
	.string "Suncloak Town -\p"
	.string "Route 201 {RIGHT_ARROW}$"

SuncloakTown_EventScript_LabSign_Text_0:
	.string "Hoenn Research Institute Lab$"
