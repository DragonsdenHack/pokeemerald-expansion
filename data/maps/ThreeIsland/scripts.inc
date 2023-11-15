ThreeIsland_MapScripts::
	.byte 0

ThreeIsland1::
end


ThreeIsland2::
end


ThreeIsland3::
end


ThreeIsland4::
lock     
faceplayer     
msgbox ThreeIsland_Text_4, MSGBOX_DEFAULT
release     
end

ThreeIsland_Text_4:
.string "I'm going to train my DODUO in the\n"
    .string "BERRY FOREST.\p"
    .string "When it evolves, I'm going to play\n"
    .string "a game on TWO ISLAND.$"


ThreeIsland5::
lock     
faceplayer     
msgbox ThreeIsland_Text_5, MSGBOX_DEFAULT
release     
end

ThreeIsland_Text_5:
.string "THREE ISLAND is actually the most\n"
    .string "populous of the islands here.\p"
    .string "Still, it could be less sleepy.\p"
    .string "But I wouldn't want to see goons\n"
    .string "like those BIKERS here again.$"


ThreeIslandDocumento_101::
msgbox ThreeIslandDocumento_Text_101, MSGBOX_SIGN   
end

ThreeIslandDocumento_Text_101:
.string "THREE ISLAND\n"
    .string "Kin Island of Family Bonding$"

ThreeIsland_Secundaria_Recreativos::
lock
compare VAR_UNUSED_0x404E, 2
goto_if_gt ThreeIsland_Secundaria_Recreativos_3
compare VAR_UNUSED_0x404E, 1
goto_if_gt ThreeIsland_Secundaria_Recreativos_1
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_1
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_2
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_4
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_4
waitmovement 0x0
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_5
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, ThreeIsland_Secundaria_Recreativos_Move_6
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_3 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox ThreeIsland_Secundaria_Recreativos_Texto_5 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_UNUSED_0x404E, 2
msgbox ThreeIsland_Secundaria_Recreativos_Texto_5.1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ThreeIsland_Secundaria_Recreativos_No
goto ThreeIsland_Secundaria_Recreativos_2

ThreeIsland_Secundaria_Recreativos_1::
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_2
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_2
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_5.2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ThreeIsland_Secundaria_Recreativos_No
goto ThreeIsland_Secundaria_Recreativos_2

ThreeIsland_Secundaria_Recreativos_Texto_5.2:
.string "¿Has cambiado de opinión?\n"
	.string "¿Nos ayudarías a recuperar los\l"
	.string "RECREATIVOS?$"

ThreeIsland_Secundaria_Recreativos_3::
faceplayer
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_2
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_2
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_13 MSGBOX_AUTOCLOSE
release
end


ThreeIsland_Secundaria_Recreativos_2::
playse SE_PIN
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_4
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_4
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_5
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_9
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_9 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_10 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_11 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x404E, 3
release
end

ThreeIsland_Secundaria_Recreativos_No::
msgbox ThreeIsland_Secundaria_Recreativos_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_7
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_8
waitmovement 0x0
release
end

ThreeIsland_Secundaria_Recreativos_Move_9:
delay_8
face_up
delay_8
face_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_8:
face_down
step_end

ThreeIsland_Secundaria_Recreativos_Move_7:
face_up
step_end

ThreeIsland_Secundaria_Recreativos_Move_6:
walk_in_place_left
step_end

ThreeIsland_Secundaria_Recreativos_Move_5:
walk_in_place_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_4:
emote_exclamation_mark
step_end

ThreeIsland_Secundaria_Recreativos_Move_3:
delay_8
delay_8
face_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_2:
face_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_1:
walk_in_place_down
step_end


ThreeIsland_Secundaria_Recreativos_Texto_1:
.string "No podemos hacer nada, los RECREATIVOS\n"
	.string "son suyos.$"

ThreeIsland_Secundaria_Recreativos_Texto_2:
.string "¡Eh, espera! ¡Eres uno de ellos!$"

ThreeIsland_Secundaria_Recreativos_Texto_3:
.string "Ah… ¿no?$"

ThreeIsland_Secundaria_Recreativos_Texto_4:
.string "Creí que eras uno de esos tipos de\n"
	.string "KANTO, por su culpa tendremos que\l"
	.string "dejar el negocio en ISLA SECUNDA.$"

ThreeIsland_Secundaria_Recreativos_Texto_5:
.string "… …$"

ThreeIsland_Secundaria_Recreativos_Texto_5.1:
.string "¿Tú nos ayudarías a recuperarlo?$"

ThreeIsland_Secundaria_Recreativos_Texto_6:
.string "Es comprensible, un solo ENTRENADOR\n"
	.string "poco puede hacer.$"

ThreeIsland_Secundaria_Recreativos_Texto_7:
.string "Tienes agallas, debes ser un gran\n"
	.string "ENTRENADOR, pero ni con esas tienes el\l"
	.string "éxito garantizado. Escucha.$"

ThreeIsland_Secundaria_Recreativos_Texto_8:
.string "Hace ya un tiempo vinieron de KANTO\n"
	.string "unos tipos. Estaban muy interesados en\l"
	.string "los RECREATIVOS y en cómo este\l"
	.string "negocio podía prosperar en unas islas\l"
	.string "alejadas de la urbe.$"

ThreeIsland_Secundaria_Recreativos_Texto_9:
.string "No tardaron en proponernos vendérselo\n"
	.string "a ellos. Pero… cuando nos negamos, nos\l"
	.string "obligaron por la fuerza, y empezaron a\l"
	.string "construir su propio negocio.$"

ThreeIsland_Secundaria_Recreativos_Texto_10:
.string "Ahora ni siquiera nos han pagado, y los\n"
	.string "RECREATIVOS se han llenado de chusma.\l"
	.string "No podemos ni acercarnos a ISLA\l"
	.string "SECUNDA sin que manden sus POKÉMON\l"
	.string "contra nosotros.$"

ThreeIsland_Secundaria_Recreativos_Texto_11:
.string "Si todo sigue así, pronto abrirán y no\n"
	.string "podremos hacer nada para evitar que\l"
	.string "todos olviden nuestro antiguo negocio.$"

ThreeIsland_Secundaria_Recreativos_Texto_12:
.string "Solo queda entrar ahí y echarlos por la\n"
	.string "fuerza, igual que hicieron ellos con\l"
	.string "nosotros. ¿Podrás hacerlo?$"

ThreeIsland_Secundaria_Recreativos_Texto_13:
.string "¿Lograste encontrarlos? Nuestros\n"
	.string "RECREATIVOS están en ISLA SECUNDA, es\l"
	.string "un lugar pequeño, no tiene pérdida.$"

