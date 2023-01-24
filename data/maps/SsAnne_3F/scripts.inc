SsAnne_3F_MapScripts::
	.byte 0

SsAnne3F_1::
end



SsAnne3F_2::
lock     
faceplayer     
msgbox SsAnne3F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne3F_Text_2:
.string "¡Vamos, relájate, estás aquí para\n"
.string "pasarlo bien!\l"
.string "¡Ni que estuvieras de infiltrado\l"
.string "en una misión de alto secreto!$"



SsAnne3F_3::
lock          
msgbox SsAnne3F_Text_3, MSGBOX_SIGN
release     
end

SsAnne3F_Text_3:
.string "¡Así!\n"
	.string "¡Enséñale a ese joven imberbe de\l"
	.string "KANTO cómo nos las gastamos aquí!$"



SsAnne3F_4::
lock          
msgbox SsAnne3F_Text_4, MSGBOX_SIGN
release     
end

SsAnne3F_Text_4:
.string "¡Vamos, POLIWHIRL!\n"
	.string "¡Mantén alto el nombre de\l"
	.string "nuestra flota!$"



SsAnne3F_5::
lock          
msgbox SsAnne3F_Text_5, MSGBOX_SIGN
playmoncry SPECIES_POLIWHIRL, CRY_MODE_ENCOUNTER
msgbox SsAnne3F_Text_5_2, MSGBOX_SIGN
release     
end

SsAnne3F_Text_5:
.string "¡POLIWHIRL!\n"
	.string "¡RAYO BURBUJA!$"

SsAnne3F_Text_5_2:
.string "¡Whirl!$"



SsAnne3F_7::
lock          
msgbox SsAnne3F_Text_7, MSGBOX_SIGN
release     
end

SsAnne3F_Text_7:
.string "¡Aficionados!\n"
	.string "¡Si saco a mi PINSIR este combate\l"
	.string "se acaba ahora mismo!$"

SsAnne3F_Andra::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, SsAnne3F_Andra_move_1
applymovement 1, SsAnne3F_Andra_move_2
waitmovement 0x0
msgbox SsAnne3F_Andra_Text_1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne3F_Andra_move_3
applymovement 1, SsAnne3F_Andra_move_4
waitmovement 0x0
release
end

SsAnne3F_Andra_Text_1:
.string "ANDRA: Al parecer este es el\n"
	.string "camarote del CAPITÁN.\l"
	.string "PETREL me ha pedido que esperemos\l"
	.string "un poco antes de darnos unas\l"
	.string "últimas indicaciones, aprovecha si\l"
	.string "quieres mientras para darte una\l"
	.string "vuelta por el barco y entrenar un\l"
	.string "poco más.$"

SsAnne3F_Andra_move_1:
walk_in_place_up
step_end

SsAnne3F_Andra_move_2:
face_down
step_end

SsAnne3F_Andra_move_3:
walk_down
step_end

SsAnne3F_Andra_move_4:
face_up
step_end

SsAnne3F_Andra_lista::
lock
faceplayer
msgbox SsAnne3F_Andra_lista_Text_1, MSGBOX_AUTOCLOSE
applymovement 1, SsAnne3F_Andra_lista_move1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
removeobject 1
release
end

SsAnne3F_Andra_lista_Text_1:
.string "¡{PLAYER}!\n"
	.string "¡Ya está todo listo para entrar!\l"
	.string "¡Vamos a enseñarle a ese CAPITÁN\l"
	.string "cómo se las gastan los ROCKET\l"
	.string "aquí en KANTO!$"

SsAnne3F_Andra_lista_move1:
walk_up
walk_up
face_right
step_end
