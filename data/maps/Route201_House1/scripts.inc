Route201_House1_MapScripts::
	.byte 0


Route201_House1_OldMan::
# 6 "data/maps/Route201_House1/scripts.pory"
	lock
# 7 "data/maps/Route201_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 8 "data/maps/Route201_House1/scripts.pory"
	msgbox Route201_House1_OldMan_Text_0
# 9 "data/maps/Route201_House1/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 10 "data/maps/Route201_House1/scripts.pory"
	waitmovement 1
# 11 "data/maps/Route201_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 12 "data/maps/Route201_House1/scripts.pory"
	waitmovement 1
# 13 "data/maps/Route201_House1/scripts.pory"
	msgbox Route201_House1_OldMan_Text_1
# 14 "data/maps/Route201_House1/scripts.pory"
	release
	return


Route201_House1_OldMan_Text_0:
# 8 "data/maps/Route201_House1/scripts.pory"
	.string "I already told you that you can\n"
	.string "threaten me all you want and I'll still\l"
	.string "never work for you!$"

Route201_House1_OldMan_Text_1:
# 13 "data/maps/Route201_House1/scripts.pory"
	.string "Wait, you're not one of those thugs...\n"
	.string "Who are you?$"
