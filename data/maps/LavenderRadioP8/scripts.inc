LavenderRadioP8_MapScripts::
	.byte 0

LavenderRadioP8_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_183, LavenderRadioP8_Text_PoliciaIntro, LavenderRadioP8_Text_PoliciaDefeated
	msgbox LavenderRadioP8_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

LavenderRadioP8_Primer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Primer_Cientifico_Texto_1:
.string "El P8 se eleva más alto de lo que\n"
	.string "jamás se elevó la ya otrora TORRE\l"
	.string "POKÉMON.\l"
	.string "Esto es, ahora mismo vemos PUEBLO\l"
	.string "LAVANDA desde una altura que jamás\l"
	.string "vieron sus habitantes.$"

LavenderRadioP8_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Segundo_Cientifico_Texto_1:
	.string "Si uno desconoce las causas de su\n"
	.string "éxito, es cuestión de tiempo que la\l"
	.string "esperanza matemática deshaga lo que\l"
	.string "por mera casualidad produjo.$"

LavenderRadioP8Documento_100::
msgbox LavenderRadioP8Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP8Documento_Text_100:
.string "8vo Stats Base$"

LavenderRadioP8Documento_101::
msgbox LavenderRadioP8Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP8Documento_Text_101:
.string "-La posibilidad engendra cada vez más y\n"
	.string "más posibilidad-.$"

LavenderRadioP8_Tercer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Tercer_Cientifico_Texto_1:
.string "En este piso ya se tratan temas muy\n"
	.string "serios, he tenido oportunidad de\l"
	.string "trabajar en ellos de primera mano.\l"
	.string "Para mi sorpresa, no sentí alegría ni\l"
	.string "satisfacción al ver los resultados,\l"
	.string "más bien miedo y... mucho vértigo por\l"
	.string "todo lo que pueda suponer.$"

LavenderRadioP8_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Cuarto_Cientifico_Texto_1:
.string "Fuera de estas instalaciones aún\n"
	.string "siguen usando POKÉMON de KANTO, y\l"
	.string "ahora un poco más de JOHTO también.\l"
	.string "Pero aquí es común ver a gente con\l"
	.string "POKÉMON de regiones exóticas, el\l"
	.string "mercado interno que hemos creado es\l"
	.string "increíble.$"

LavenderRadioP8_Encuentro_Devon::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP8_Encuentro_Devon_Move_1
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_2
waitmovement 0x0
delay 15
msgbox LavenderRadioP8_Encuentro_Devon_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_3
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_4
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP8_Encuentro_Devon_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, LavenderRadioP8_Encuentro_Devon_Move_2
waitmovement 0x0
msgbox LavenderRadioP8_Encuentro_Devon_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_838
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_MAUVILLE_CITY_STATE, 9
release
end

LavenderRadioP8_Encuentro_Devon_Move_4:
face_down
step_end

LavenderRadioP8_Encuentro_Devon_Move_3:
walk_in_place_right
step_end

LavenderRadioP8_Encuentro_Devon_Move_2:
face_right
step_end

LavenderRadioP8_Encuentro_Devon_Move_1:
delay_8
face_left
delay_8
step_end

LavenderRadioP8_Encuentro_Devon_Texto_1:
.string "????: Curiosa tecnología, todo apunta\n"
	.string "a que será uno de los principales\l"
	.string "motores de cambio en los próximos años.$"

LavenderRadioP8_Encuentro_Devon_Texto_2:
.string "Una pena, ¿no?$"

LavenderRadioP8_Encuentro_Devon_Texto_3:
.string "Antaño, los entrenadores desarrollaban\n"
	.string "habilidad, talento y vínculo con sus\l"
	.string "POKÉMON para alcanzar la victoria\l"
	.string "sobre otros iguales. Los antiguos\l"
	.string "campeones lo eran por haber llevado al\l"
	.string "extremo estas virtudes.$"

LavenderRadioP8_Encuentro_Devon_Texto_4:
.string "Ahora, tenemos acceso a una infinidad\n"
	.string "de valores con los que manipular el\l"
	.string "rendimiento de un POKÉMON, y\l"
	.string "convertirlo en algo que jamás hubiera\l"
	.string "sido posible en el pasado.$"

LavenderRadioP8_Encuentro_Devon_Texto_5:
.string "Incluso el más hábil de los campeones\n"
	.string "de antaño sucumbiría ante un\l"
	.string "entrenador mediocre actual, si la\l"
	.string "diferencia de poder bruto entre sus\l"
	.string "POKÉMON es la suficiente.$"

LavenderRadioP8_Encuentro_Devon_Texto_6:
.string "Hoy en día, aquellos que no añadan esta\n"
	.string "nueva variable a la ecuación, están\l"
	.string "condenados sin importar lo mucho que\l"
	.string "perfeccionen las virtudes clásicas.$"
