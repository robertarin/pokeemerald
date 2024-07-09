Route201_House1_MapScripts::
	.byte 0


Route201_House1_OldMan::
	lock
	applymovement 1, Common_Movement_ExclamationMark
	msgbox Route201_House1_OldMan_Text_0
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 1
	applymovement 1, Common_Movement_FaceDown
	waitmovement 1
	msgbox Route201_House1_OldMan_Text_1
	release
	return


Route201_House1_OldMan_Text_0:
	.string "I already told you that you can\n"
	.string "threaten me all you want and I'll still\l"
	.string "never work for you!$"

Route201_House1_OldMan_Text_1:
	.string "Wait, you're not one of those thugs...\n"
	.string "Who are you?$"
