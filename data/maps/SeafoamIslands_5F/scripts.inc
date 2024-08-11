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
.string "(Parece que esta roca bloquea las\n"
	.string "fuertes corrientes aquí).$"



SeafoamIslands5FDocumento_100::
msgbox SeafoamIslands5FDocumento_Text_100, MSGBOX_SIGN   
end

SeafoamIslands5FDocumento_Text_100:
.string "¡Las ROCAS pueden cambiar\n"
	.string "el flujo del agua!$"



SeafoamIslands5FDocumento_101::
msgbox SeafoamIslands5FDocumento_Text_101, MSGBOX_SIGN   
end

SeafoamIslands5FDocumento_Text_101:
.string "¡PELIGRO!\n"
	.string "¡Rápidos!$"


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
setflag FLAG_NUEVA_839
playse SE_POKENAV_OFF
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
setvar VAR_UNUSED_0x40F7, 69
release
end

SeafoamIslands_5F_Combate_Articuno_Derrotado::
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_5 MSGBOX_AUTOCLOSE
release
end

SeafoamIslands_5F_Combate_Articuno_Texto_1:
.string "¡Artic!$"

SeafoamIslands_5F_Combate_Articuno_Texto_2:
.string "Artic{PAUSE 25}…{PAUSE 25}$"

SeafoamIslands_5F_Combate_Articuno_Texto_3:
.string "¡Obtuviste una pluma del\n"
	.string "LEGENDARIO ARTICUNO!$"

SeafoamIslands_5F_Combate_Articuno_Texto_4:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "{PAUSE 35}… {PAUSE 35}…{PAUSE 35}\l"
	.string "¿Acabas de batir a ARTICUNO?\l"
	.string "Perfecto, gran trabajo {PLAYER},\l"
	.string "AZUL acaba también de cumplir con\l"
	.string "éxito su misión con MOLTRES, te he\l"
	.string "llamado porque ANDRA está en\l"
	.string "problemas, el plan de evasión para\l"
	.string "penetrar en la CENTRAL ENERGÍA ha\l"
	.string "fracasado y ahora mismo está\l"
	.string "contra las cuerdas rodeada por la\l"
	.string "policía, obviamente por sí solos\l"
	.string "no son capaces de reducirla pero\l"
	.string "es cuestión de tiempo que avisen a\l"
	.string "algún LÍDER DE GIMNASIO o incluso\l"
	.string "miembro de la ÉLITE 4 para\l"
	.string "detenerla por la fuerza, quiero\l"
	.string "que formes parte del equipo de\l"
	.string "rescate {PLAYER}, si la cosa se\l"
	.string "complica necesito de los mejores\l"
	.string "entrenadores para salir de allí,\l"
	.string "el resto de integrantes te estarán\l"
	.string "esperando a las afueras de CENTRAL\l"
	.string "ENERGÍA en RUTA 10, no tardes,\l"
	.string "cada segundo es vital.$"

SeafoamIslands_5F_Combate_Articuno_Texto_5:
.string "(Parece que no le quedan fuerzas\n"
	.string "para combatir).$"

SeafoamIslands_5F_Combate_Articuno_Move_1:
emote_exclamation_mark
step_end
