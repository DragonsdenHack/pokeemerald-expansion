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
.string "Pareces cansado.\n"
	.string "¿Te gustaría descansar un poco?$"

SsAnne26F_1_Texto_2:
.string "Me alegra ver que ahora te\n"
	.string "encuentras más fresco y activo.$"

SsAnne26F_1_Texto_3:
.string "Oh, perdona por molestarte, me has\n"
	.string "recordado tanto a mi hermano\l"
	.string "pequeño...$"
