SuncloakTown_MapScripts::
	.byte 0


SuncloakTown_EventScript_Camper::
# 4 "data/maps/SuncloakTown/scripts.pory"
	lock
# 5 "data/maps/SuncloakTown/scripts.pory"
	faceplayer
# 6 "data/maps/SuncloakTown/scripts.pory"
	msgbox SuncloakTown_EventScript_Camper_Text_0
# 8 "data/maps/SuncloakTown/scripts.pory"
	release
	return


SuncloakTown_EventScript_Woman::
# 12 "data/maps/SuncloakTown/scripts.pory"
	lock
# 13 "data/maps/SuncloakTown/scripts.pory"
	faceplayer
# 14 "data/maps/SuncloakTown/scripts.pory"
	msgbox SuncloakTown_EventScript_Woman_Text_0
# 15 "data/maps/SuncloakTown/scripts.pory"
	release
	return


SuncloakTown_EventScript_DepthsSign::
# 19 "data/maps/SuncloakTown/scripts.pory"
	lock
# 20 "data/maps/SuncloakTown/scripts.pory"
	msgbox SuncloakTown_EventScript_DepthsSign_Text_0
# 22 "data/maps/SuncloakTown/scripts.pory"
	release
	return


SuncloakTown_EventScript_TownSign::
# 26 "data/maps/SuncloakTown/scripts.pory"
	lock
# 27 "data/maps/SuncloakTown/scripts.pory"
	msgbox SuncloakTown_EventScript_TownSign_Text_0
# 29 "data/maps/SuncloakTown/scripts.pory"
	release
	return


SuncloakTown_EventScript_LabSign::
# 33 "data/maps/SuncloakTown/scripts.pory"
	lock
# 34 "data/maps/SuncloakTown/scripts.pory"
	msgbox SuncloakTown_EventScript_LabSign_Text_0
# 35 "data/maps/SuncloakTown/scripts.pory"
	release
	return


SuncloakTown_EventScript_Camper_Text_0:
# 6 "data/maps/SuncloakTown/scripts.pory"
	.string "Be careful out at Route 201!\p"
	.string "If you're heading out there you should\n"
	.string "catch as many Pokemon as you can\l"
	.string "carry!$"

SuncloakTown_EventScript_Woman_Text_0:
# 14 "data/maps/SuncloakTown/scripts.pory"
	.string "I'm speculating that the value of my\n"
	.string "waterfront property will rise\l"
	.string "dramatically in the next 10 years!$"

SuncloakTown_EventScript_DepthsSign_Text_0:
# 20 "data/maps/SuncloakTown/scripts.pory"
	.string "Suncloak Depths -\p"
	.string "Admittance to HRI members only.$"

SuncloakTown_EventScript_TownSign_Text_0:
# 27 "data/maps/SuncloakTown/scripts.pory"
	.string "Suncloak Town -\p"
	.string "Route 201 {RIGHT_ARROW}$"

SuncloakTown_EventScript_LabSign_Text_0:
# 34 "data/maps/SuncloakTown/scripts.pory"
	.string "Hoenn Research Institute Lab$"
