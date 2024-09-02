MahoganyTown_NinjaBase_MapScripts::
	.byte 0

NinjaBase1::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_1:
.string "Behind that poster is the button\n"
.string "that opens the secret entrance, sir.$"



NinjaBase2::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_2:
	.string "You've arrived at just the right moment,\n"
	.string "sir. I heard GIOVANNI was going to\l"
	.string "notify the other CHIEF ADMINS., but\l"
	.string "with you here, it won't be necessary.$"



NinjaBase3::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_3:
	.string "Those RAGE CANDIES don't look bad, to\n"
	.string "be honest…$"



NinjaBase4::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_4, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_4:
.string "Those ninjas…\n"
.string "With the traps that they had set,\l"
.string "it is impossible to enter into the BASE…$"

Ninja_Base_Poster::
msgbox Ninja_Base_Poster_Texto_1 MSGBOX_AUTOCLOSE
msgbox Ninja_Base_Poster_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 8, 2, 0x163, TRUE
setmetatile 9, 2, 0x163, TRUE
setmetatile 8, 3, 0x29E, TRUE
setmetatile 9, 3, 0x29F, TRUE
setmetatile 7, 3, 0x2F9, FALSE
special DrawWholeMapView
delay 60
release
end

Ninja_Base_Poster_Texto_1:
 	.string "Behind this poster…\n"
	.string "There is a button$"

Ninja_Base_Poster_Text_YesNo:
.string "Do you want to push it?$"
