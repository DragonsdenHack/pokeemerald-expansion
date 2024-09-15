SsAnne_26F_MapScripts::
	.byte 0

SsAnne26F_1::
lock
faceplayer
msgbox SsAnne26F_1_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SsAnne26F_1_No
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox SsAnne26F_1_Texto_2 MSGBOX_AUTOCLOSE
end

SsAnne26F_1_No::
msgbox SsAnne26F_1_Texto_3 MSGBOX_AUTOCLOSE
release
end

SsAnne26F_1_Texto_1:
.string "You look tired.\n"
	.string "Would you like to rest for a bit?$"

SsAnne26F_1_Texto_2:
	.string "Oh, sorry to bother you. You reminded me\n"
	.string "so much of my little brother…$"

SsAnne26F_1_Texto_3:
.string "Oh, sorry for bothering you, you look a\n"
	.string "lot like my little brother…$"
