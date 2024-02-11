BlackthornCity_DragonsdenS4_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BlackthornCity_DragonsdenS4_OnWarp
	.byte 0

BlackthornCity_DragonsdenS4_OnWarp:
map_script_2 VAR_UNUSED_0x40F7, 174, DragonsdenS4_1
	.2byte 0

DragonsdenS4_1::
setobjectsubpriority 2, MAP_BLACKTHORN_CITY_DRAGONSDEN_S4, 4 
end



DragonsdenS4_3::
end



DragonsdenS4_5::
end



DragonsdenS4_8::
end



DragonsdenS4_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAVIS, DragonsdenS4_Text_SabioIntro, DragonsdenS4_Text_SabioDefeated
	msgbox DragonsdenS4_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_2
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_4 MSGBOX_AUTOCLOSE
playse 414
delay 40
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_2
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SALAZAR, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_7
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_8 MSGBOX_AUTOCLOSE
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_DREEPY, 25, ITEM_NONE
waitfanfare
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_4
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
addobject 2
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_5
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_6
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_7
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_15 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_8
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_4
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_18 MSGBOX_AUTOCLOSE
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_9
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_21 MSGBOX_AUTOCLOSE
delay 20
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_22 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
waitmovement 0x0
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_10
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_10
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_11
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_12
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_25 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
fadescreen 1
delay 20
removeobject 2
fadescreen 0
delay 15
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_26 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_13
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_14
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_27 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1.1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM99
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
delay 10
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1.1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_28 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
setflag FLAG_SYS_CAVE_SHIP
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 174
release
end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT99 PULSO\n"
	.string "DRAGON de manos de M.DRAGON!!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.1:
.string "Iba a darte esto, antes de que ese loco\n"
	.string "nos interrumpiera.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_1:
.string "M.DRAGÓN: ¡{PLAYER}!\n"
	.string "¡Has venido!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_2:
.string "Estás en la verdadera GUARIDA\n"
	.string "DRAGÓN, un santuario donde\l"
	.string "rendimos culto a este sagrado\l"
	.string "tipo.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_3:
.string "DRAGONITE fue considerado por\n"
	.string "muchos el POKÉMON más poderoso de\l"
	.string "KANTO, un NO LEGENDARIO con mayor\l"
	.string "poder que el resto. Sin embargo,\l"
	.string "el mundo es mucho más amplio de lo\l"
	.string "que parece a simple vista, tú lo\l"
	.string "sabes bien, y lo cierto es que hay\l"
	.string "dragones que dejarían a DRAGONITE\l"
	.string "en pañales...$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_4:
.string "...$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_5:
.string "Si no me equivoco, has logrado\n"
	.string "derrotar a 7 LÍDERES DE JOHTO, a\l"
	.string "pesar de la caótica situación de\l"
	.string "los GIMNASIOS. Veo buenas\l"
	.string "intenciones en ti, {PLAYER}, aún\l"
	.string "con las duras decisiones que\l"
	.string "GIOVANNI planteó en TRIGAL, sé que\l"
	.string "quieres el bien de KANTO y JOHTO.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_6:
.string "El relevo generacional es\n"
	.string "inminente, lamentablemente la\l"
	.string "tecnología está degradando el\l"
	.string "verdadero arte de entrenar\l"
	.string "POKÉMON. Tú eres una excepción, no\l"
	.string "te has dejado influenciar por los\l"
	.string "tiempos que corren a pesar de tu\l"
	.string "posición. Es por eso que...\l"
	.string "¡Debo asegurarme de que estás a la\l"
	.string "altura!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_7:
.string "Magnífico, ha sido como volver a\n"
	.string "la vieja JOHTO.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_8:
.string "Un ENTRENADOR así solo aparece una\n"
	.string "vez cada tantas décadas, eso es lo\l"
	.string "que llevaba sin ver a mi singular\l"
	.string "DRAGONITE en apuros. La forma en\l"
	.string "la que has ido mejorando y\l"
	.string "construyendo tu equipo es\l"
	.string "admirable.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9:
	.string "Me honra entregar nuestra insignia al\n"
	.string "paladín de la nueva generación.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.1:
	.string "Toma, aquí tienes la\n"
	.string "MEDALLA DRAGÓN.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.2:
.string "Ten este POKÉMON, es uno de\n"
	.string "nuestros dragones mejor guardados.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_10:
.string "¡¡OBTUVISTE UN DREEPY AL Nv.25!!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11:
.string "DRAGAPULT es un PSEUDOLEGENDARIO\n"
	.string "en toda regla, el de mayor\l"
	.string "VELOCIDAD. Solo los monjes y\l"
	.string "pensadores más expertos de JOHTO\l"
	.string "cuentan con uno.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_12:
.string "????: ¿DRAGAPULT?\n"
	.string "¿Crees que {PLAYER} tendría alguna\l"
	.string "oportunidad con eso?$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_13:
.string "ZEUS: Aunque entiendo que es lo\n"
	.string "máximo a lo que mortales como\l"
	.string "vosotros podéis aspirar.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_14:
.string "M.DRAGÓN: Fuiste tú quién atrapó a\n"
	.string "HO-OH a sangre fría, debería darte\l"
	.string "vergüenza encerrar así algo tan\l"
	.string "puro, aprovechando el gran combate\l"
	.string "que el M.IRIS y {PLAYER} tuvieron.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_15:
.string "ZEUS: Lo importante es que HO-OH\n"
	.string "ahora me pertenece, también LUGIA,\l"
	.string "qué importa la forma. Y ahora...\l"
	.string "Al fin...\l"
	.string "KYUREM también...$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_16:
.string "(ZEUS le quitó el KYUREM al\n"
	.string "M.DRAGÓN).$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_17:
.string "M.DRAGÓN: ¡¿Q...Qué?!\n"
	.string "¿¡Qúe vas a hacer con ese\l"
	.string "POKÉMON!?$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_18:
.string "ZEUS: No te hagas el tonto,\n"
	.string "anciano, sabes todo sobre el TIPO\l"
	.string "DRAGÓN, seguro que conoces también\l"
	.string "la leyenda del DRAGÓN ORIGINAL.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_19:
.string "M.DRAGÓN: No es una leyenda, ese\n"
	.string "POKÉMON existió, fue real.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_20:
.string "ZEUS: Así es, RAYQUAZA PRIMIGENIO\n"
	.string "es considerado el DRAGÓN más\l"
	.string "poderoso, pero...\l"
	.string "Nada que ver con ese POKÉMON, ese\l"
	.string "POKÉMON... es el verdadero creador\l"
	.string "de todo, tan poderoso que no vale\l"
	.string "la pena compararlo con el resto.\l"
	.string "No entra en el debate del mejor\l"
	.string "POKÉMON porque el DRAGÓN ORIGINAL\l"
	.string "lo es todo, su alcance no es\l"
	.string "medible.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_21:
.string "M.DRAGÓN: El DRAGÓN ORIGINAL\n"
	.string "representa el punto de equilibrio,\l"
	.string "la perfección, nunca\l"
	.string "podrás convocarlo, necesitas\l"
	.string "a los otros dos dragones, KYUREM\l"
	.string "es solo la cáscara vacía que\l"
	.string "antaño me asignaron proteger por\l"
	.string "si alguien como tú llegaba tan\l"
	.string "lejos.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_22:
.string "ZEUS: ...\n"
	.string "...\l"
	.string "RESHIRAM y ZEKROM también me\l"
	.string "pertencen.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_23:
.string "M.DRAGÓN: ¡No es posible!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_24:
.string "ZEUS: HO-OH y LUGIA permiten la\n"
	.string "entrada...\l"
	.string "Después, solo necesito las piezas\l"
	.string "correctas, y todo en la última\l"
	.string "sala obtendrá su forma original.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_25:
.string "ZEUS: Lo siento {PLAYER}, esta vez\n"
	.string "no habrá combate. Como\l"
	.string "comprenderás, tengo cosas más\l"
	.string "importantes que hacer. Me temo que\l"
	.string "aquí acaba nuestra rivalidad.\l"
	.string "Después de unir los 3 dragones, la\l"
	.string "palabra competir perderá todo su\l"
	.string "significado ante mi equipo\l"
	.string "POKÉMON.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_26:
.string "M.DRAGÓN: Esto...\n"
	.string "Esto...\l"
	.string "Es imposible, ese descerebrado no\l"
	.string "sabe lo que quiere despertar.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_27:
.string "¡{PLAYER}!\n"
	.string "¡RUINAS ALFA!\l"
	.string "Ha hablado de LUGIA y HO-OH, lo\l"
	.string "sabía todo desde el principio,\l"
	.string "sabe que necesitaba de esos dos\l"
	.string "LEGENDARIOS para entrar en lo\l"
	.string "profundo de RUINAS ALFA. Es el\l"
	.string "único lugar donde puede unir a los\l"
	.string "3 dragones.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_28:
.string "No hay tiempo, {PLAYER}, debemos\n"
	.string "curar a nuestro equipo POKÉMON e\l"
	.string "ir allí lo antes posible. Si toda\l"
	.string "tu organización se presenta,\l"
	.string "mejor, hay que detenerle a todo\l"
	.string "costo.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1.1:
walk_in_place_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1:
face_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_2:
walk_in_place_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3:
emote_exclamation_mark
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_4:
face_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_5:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_6:
walk_right
walk_in_place_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_7:
walk_slow_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_8:
walk_in_place_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_9:
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_10:
walk_fast_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_11:
walk_down
walk_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_12:
face_right
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_13:
face_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_14:
walk_fast_down
walk_in_place_right
step_end
