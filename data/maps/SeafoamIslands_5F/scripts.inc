SeafoamIslands_5F_MapScripts::
	.byte 0

SeafoamIslands5F_5::
end



SeafoamIslands5F_6::
lock
msgbox SeafoamIslands5F_6_texto_1, MSGBOX_SIGN
release
end

SeafoamIslands5F_6_texto_1:
	.string "(Apparently this rock blocks the strong\n"
	.string "currents here).$"



SeafoamIslands5FDocumento_100::
msgbox SeafoamIslands5FDocumento_Text_100, MSGBOX_SIGN   
end

SeafoamIslands5FDocumento_Text_100:
.string "Hint: Boulders might change the\n"
    .string "flow of water.$"



SeafoamIslands5FDocumento_101::
msgbox SeafoamIslands5FDocumento_Text_101, MSGBOX_SIGN   
end

SeafoamIslands5FDocumento_Text_101:
.string "DANGER\n"
    .string "Fast current!$"


SeafoamIslands_5F_Combate_Articuno::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 68
goto_if_gt SeafoamIslands_5F_Combate_Articuno_Derrotado
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@msgbox SeafoamIslands_5F_Combate_Articuno_Texto_1 MSGBOX_DEFAULT
@closemessage
@playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
@waitmoncry
@@@@@@@@@@@@@@@@@@@@@@@@@@@@
waitse
playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
message SeafoamIslands_5F_Combate_Articuno_Texto_1
waitmessage
waitmoncry
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
waitbuttonpress
trainerbattle_no_intro TRAINER_ARTICUNO, SeafoamIslands_5F_Combate_Articuno_Texto_2
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_3 MSGBOX_DEFAULT
waitse
delay 20
playse SE_POKENAV_CALL
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_5F_Combate_Articuno_Move_1
waitmovement 0x0
delay 20
playse SE_POKENAV_HANG_UP
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_5F_Combate_Articuno_Move_1
waitmovement 0x0
waitse
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.4 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.5 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.6 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_839
playse SE_PC_OFF
waitse
delay 20
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
setvar VAR_UNUSED_0x40F7, 69
release
end

SeafoamIslands_5F_Combate_Articuno_Derrotado::
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_5 MSGBOX_AUTOCLOSE
release
end

SeafoamIslands_5F_Combate_Articuno_Texto_1:
.string "Artic!$"

SeafoamIslands_5F_Combate_Articuno_Texto_2:
.string "Artic…$"

SeafoamIslands_5F_Combate_Articuno_Texto_3:
	.string "You obtained a feather of the\n"
	.string "LEGENDARY ARTICUNO!$"

SeafoamIslands_5F_Combate_Articuno_Texto_4:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "{PAUSE 35}… {PAUSE 35}…{PAUSE 35}\l"
	.string "¿Acabas de batir a ARTICUNO?\l"
	.string "Perfecto, gran trabajo, {PLAYER}.\l"
	.string "AZUL acaba también de cumplir con\l"
	.string "éxito su misión con MOLTRES.$"

SeafoamIslands_5F_Combate_Articuno_Texto_4.1:
	.string "{PAUSE 35}… {PAUSE 35}…{PAUSE 35}$"

SeafoamIslands_5F_Combate_Articuno_Texto_4.2:
	.string "Te he llamado porque ANDRA\n"
	.string "está en problemas.$"
	
SeafoamIslands_5F_Combate_Articuno_Texto_4.3:
	.string "El plan de evasión para penetrar en\n"
	.string "la CENTRAL ENERGÍA ha fracasado, y\l"
	.string "ahora mismo está contra las cuerdas,\l"
	.string "rodeada por la policía.$"
	
SeafoamIslands_5F_Combate_Articuno_Texto_4.4:
	.string "Por sí solos no serán capaces de\n"
	.string "reducirla, pero es cuestión de tiempo\l"
	.string "para que avisen a un LÍDER de GIMNASIO\l"
	.string "o incluso miembro de la ÉLITE 4 para\l"
	.string "detenerla por la fuerza.$"
	
SeafoamIslands_5F_Combate_Articuno_Texto_4.5:
	.string "Quiero que formes parte del equipo de\n"
	.string "rescate, {PLAYER}. Si la cosa se\l"
	.string "complica, necesito de los mejores\l"
	.string "entrenadores para salir de allí.$"

SeafoamIslands_5F_Combate_Articuno_Texto_4.6:
	.string "El resto de integrantes te estarán\n"
	.string "esperando, ya dentro de la CENTRAL.\l"
	.string "No tardes, cada segundo es vital.$"

SeafoamIslands_5F_Combate_Articuno_Texto_5:
.string "-Parece que no le quedan fuerzas\n"
	.string "para combatir.-$"

SeafoamIslands_5F_Combate_Articuno_Move_1:
emote_exclamation_mark
step_end
