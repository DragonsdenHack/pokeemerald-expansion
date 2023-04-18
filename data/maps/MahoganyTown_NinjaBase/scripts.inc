MahoganyTown_NinjaBase_MapScripts::
	.byte 0

NinjaBase1::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_1:
.string "Detrás de ese póster está el botón\n"
.string "que abre la entrada secreta, señor.$"



NinjaBase2::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_2:
.string "Llega en el momento justo, señor.\n"
.string "He oído que GIOVANNI iba a avisar\l"
.string "a los otros ADMIN.JEFE, pero con\l"
.string "usted aquí no será necesario.$"



NinjaBase3::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_3:
.string "Pues esos CARAMELOSFURIA no tienen\n"
.string "mala pinta, la verdad…$"



NinjaBase4::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBase_Text_4, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBase_Text_4:
.string "Esos ninjas…\n"
.string "Con las trampas que han puesto, es\l"
.string "imposible adentrarse en la BASE…$"

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
.string "Detrás de este póster...\n"
	.string "¡Hay un botón!$"

Ninja_Base_Poster_Text_YesNo:
.string "¿Quieres pulsarlo?$"
