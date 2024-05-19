NaoAbandonada_6_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, NaoAbandonada_6_OnFrame
	.byte 0

NaoAbandonada_6_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 237, NaoAbandonada_6_Primal_Kyogre
	.2byte 0

NaoAbandonada_6_Move_1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
step_end

NaoAbandonada_6_Move_2:
walk_in_place_left
step_end

NaoAbandonada_6_Move_3:
face_right
step_end

NaoAbandonada_6_Move_4:
walk_in_place_right
step_end

NaoAbandonada_6_Move_5:
face_up
step_end

NaoAbandonada_6_Move_6:
face_down
step_end

NaoAbandonada_6_Move_7:
delay_8
face_up
delay_16
walk_in_place_up
step_end

NaoAbandonada_6_Move_8:
face_left
step_end

NaoAbandonada_6_Move_9:
emote_exclamation_mark
step_end

NaoAbandonada_6_Primal_Kyogre::
lock
delay 15
addobject 3
addobject 1
call Script_SetGrayscaleTint
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NaoAbandonada_6_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, NaoAbandonada_6_Move_2
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, NaoAbandonada_6_Move_3
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, NaoAbandonada_6_Move_4
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_6_Move_5
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, NaoAbandonada_6_Move_6
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, NaoAbandonada_6_Move_7
waitmovement 0x0
playse SE_PC_ON
waitse
playse SE_PC_LOGIN
waitse
delay 20
playse SE_MUGSHOT
waitse
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_8 MSGBOX_AUTOCLOSE
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 8, 6, 0
waitfieldeffect FLDEFF_SPARKLE
closemessage
setvar VAR_RESULT, 2
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 400
special FadeOutOrbEffect
playmoncry SPECIES_KYOGRE_PRIMAL, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 3, NaoAbandonada_6_Move_8
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_10 MSGBOX_AUTOCLOSE
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playse SE_PIN
applymovement 1, NaoAbandonada_6_Move_9
applymovement 3, NaoAbandonada_6_Move_9
waitmovement 0x0
playmoncry SPECIES_KYOGRE_PRIMAL, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_INTRO_BLAST
waitse
playse SE_M_EXPLOSION
applymovement 1, NaoAbandonada_6_Move_10
applymovement 3, NaoAbandonada_6_Move_11
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_6_Move_9
applymovement 3, NaoAbandonada_6_Move_9
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_12 MSGBOX_AUTOCLOSE
playmoncry SPECIES_KYOGRE_PRIMAL, CRY_MODE_ENCOUNTER
waitmoncry
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, NaoAbandonada_6_Move_12
waitmovement 0x0
playse SE_PC_ON
waitse
playse SE_FAILURE
waitse
applymovement 3, NaoAbandonada_6_Move_10
waitmovement 0x0
delay 20
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_14 MSGBOX_AUTOCLOSE
delay 20
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
applymovement 1, NaoAbandonada_6_Move_13
applymovement 3, NaoAbandonada_6_Move_6
waitmovement 0x0
msgbox NaoAbandonada_6_Primal_Kyogre_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_6_Move_14
applymovement 3, NaoAbandonada_6_Move_14
waitmovement 0x0
removeobject 3
removeobject 1
setvar VAR_UNUSED_0x40F7, 238
call Script_RemoveTint
delay 20
warp MAP_NAO_ABANDONADA_6, 3, 13
release
end

NaoAbandonada_6_Move_14:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

NaoAbandonada_6_Move_13:
walk_in_place_up
step_end

NaoAbandonada_6_Move_12:
walk_fast_left
face_up
step_end

NaoAbandonada_6_Move_11:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

NaoAbandonada_6_Move_10:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

NaoAbandonada_6_Primal_Kyogre_Texto_1:
	.string "DR.RASMUS: Hoy es un gran día para\n"
	.string "DEVON. Después de innumerables\l"
	.string "pruebas, hemos logrado sintetizar\l"
	.string "nuestra propia ESFERA AZUL.$"

NaoAbandonada_6_Primal_Kyogre_Texto_2:
	.string "Esto supone un gran paso en nuestra\n"
	.string "búsqueda por descubrir las fuerzas más\l"
	.string "primitivas de HOENN.$"

NaoAbandonada_6_Primal_Kyogre_Texto_3:
	.string "ADM.ZAFIRO: Así es doctor. Primero\n"
	.string "logramos encontrar la ubicación de los\l"
	.string "REGIS y el TRÍO creador. Cada uno de los\l"
	.string "ADMIN de DEVON nos encargamos de\l"
	.string "estudiarlos meticulosamente.$"

NaoAbandonada_6_Primal_Kyogre_Texto_4:
	.string "Después, gracias a sus conocimientos,\n"
	.string "contamos con clones de cada uno de\l"
	.string "estos POKÉMON ancestrales.$"

NaoAbandonada_6_Primal_Kyogre_Texto_5:
	.string "DR.RASMUS: Mientras que regiones como\n"
	.string "la de KANTO y JOHTO están en plena\l"
	.string "guerra, nosotros hemos ido aún más\l"
	.string "allá: con esta ESFERA AZUL, podremos\l"
	.string "obtener la FORMA PRIMIGENIA de KYOGRE.$"

NaoAbandonada_6_Primal_Kyogre_Texto_6:
	.string "ADM.ZAFIRO: El clon de KYOGRE está\n"
	.string "listo para la prueba, doctor.$"

NaoAbandonada_6_Primal_Kyogre_Texto_7:
	.string "DR.RASMUS: ¡Magnífico! ¡Todo está\n"
	.string "dispuesto!$"

NaoAbandonada_6_Primal_Kyogre_Texto_8:
	.string "Iniciando contacto de KYOGRE con la\n"
	.string "ESFERA AZUL.$"

NaoAbandonada_6_Primal_Kyogre_Texto_9:
	.string "DR.RASMUS: Sí, ¡ha sido todo un éxito!$"

NaoAbandonada_6_Primal_Kyogre_Texto_10:
	.string "ADM.ZAFIRO: ¡Al fin, la verdadera forma\n"
	.string "de KY…!$"

NaoAbandonada_6_Primal_Kyogre_Texto_11:
	.string "¿Qué ocurre?$"

NaoAbandonada_6_Primal_Kyogre_Texto_12:
	.string "DR.RASMUS: ¡Está fuera de control, algo\n"
	.string "ha debido de fallar!$"

NaoAbandonada_6_Primal_Kyogre_Texto_13:
	.string "ADM.ZAFIRO: ¡No puede ser, a este paso\n"
	.string "va a hundirnos a todos!$"

NaoAbandonada_6_Primal_Kyogre_Texto_14:
	.string "DR.RASMUS: ¡Se ha desvinculado de la\n"
	.string "ESFERA AZUL, ya no podemos hacer nada!$"

NaoAbandonada_6_Primal_Kyogre_Texto_15:
	.string "ADM.ZAFIRO: ¡Salgamos de aquí, rápido!$"

NaoAbandonada_7_Move_1:
walk_in_place_up
step_end

NaoAbandonada_7_Move_2:
emote_exclamation_mark
step_end

NaoAbandonada_7_Move_3:
face_down
delay_16
walk_right
face_down
step_end

NaoAbandonada_7_Move_4:
walk_up
walk_left
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_up
step_end

NaoAbandonada_7_Move_5:
walk_in_place_down
step_end

NaoAbandonada_7_Move_6:
face_right
step_end

NaoAbandonada_7_Move_7:
face_up
step_end

NaoAbandonada_7_Move_8:
walk_slow_left
step_end

NaoAbandonada_7_Move_9:
face_left
step_end

NaoAbandonada_7_Move_10:
walk_slow_up
step_end

NaoAbandonada_7_Move_11:
walk_in_place_up
step_end

NaoAbandonada_7_Move_12:
face_right
step_end

NaoAbandonada_7_Move_13:
walk_in_place_right
step_end

NaoAbandonada_7_Move_14:
walk_up
walk_up
walk_up
face_left
delay_16
delay_8
walk_in_place_left
step_end

NaoAbandonada_7_Move_15:
face_down
step_end



NaoAbandonada_7_Encuentro_Zafiro::
lock
applymovement OBJ_EVENT_ID_PLAYER, NaoAbandonada_7_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NaoAbandonada_7_Move_2
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_1
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, NaoAbandonada_7_Move_3
applymovement 1, NaoAbandonada_7_Move_4
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NaoAbandonada_7_Move_5
waitmovement 0x0
delay 25
applymovement 1, NaoAbandonada_7_Move_6
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_7
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NaoAbandonada_7_Move_2
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NaoAbandonada_7_Move_9
applymovement 1, NaoAbandonada_7_Move_8
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_10
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_11
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_9 MSGBOX_AUTOCLOSE
delay 20
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_12
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, NaoAbandonada_7_Move_7
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_11
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_12
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_13
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_606, NaoAbandonada_7_Encuentro_Zafiro_Texto_18
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_20 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NaoAbandonada_7_Move_7
applymovement 1, NaoAbandonada_7_Move_14
waitmovement 0x0
setflag FLAG_HOENN_32
removeobject 2
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_21 MSGBOX_AUTOCLOSE
delay 20
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_15
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_24 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_8
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, NaoAbandonada_7_Move_15
waitmovement 0x0
msgbox NaoAbandonada_7_Encuentro_Zafiro_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_1
fadescreen 1
removeobject 1
playse SE_WARP_IN
waitse
fadescreen 0
setvar VAR_UNUSED_0x40F7, 239
release
end

NaoAbandonada_7_Encuentro_Zafiro_Texto_1:
	.string "ADM.ZAFIRO: Ni un paso más, {PLAYER}.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_2:
	.string "Ignoro cómo has llegado hasta aquí,\n"
	.string "pero ese objeto que hay en la mesa nos\l"
	.string "pertenece. No he venido hasta aquí\l"
	.string "para que alguien que siquiera sabe lo\l"
	.string "que es me lo arrebate en el último\l"
	.string "momento.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_3:
	.string "Así que sientes curiosidad.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_4:
	.string "Nadie creerá lo que voy a decirte, así\n"
	.string "que puedo contarte la verdadera\l"
	.string "historia de todos modos: esta nave no\l"
	.string "acabó así por un accidente, fue culpa\l"
	.string "nuestra, de DEVON.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_5:
	.string "Así es. Hace años, cuando investigábamos\n"
	.string "por primera vez las formas primigenias\l"
	.string "de KYOGRE y GROUDON. Fue aquí donde\l"
	.string "tuvimos la primera toma de contacto{PAUSE 5}…{PAUSE 5}$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_6:
	.string "Pero…aún estábamos muy verdes. Sí,\n"
	.string "logramos revertir un clon de KYOGRE a\l"
	.string "su FORMA PRIMIGENIA, pero se nos salió\l"
	.string "de control por completo.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_7:
	.string "Eso fue lo que provocó que esta nave se\n"
	.string "hundiera.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_8:
	.string "Poco después, cuando logramos\n"
	.string "capturarlo, hicimos muchas pruebas\l"
	.string "para ver lo que había pasado. Aunque el\l"
	.string "doctor hizo un trabajo perfecto\l"
	.string "sintetizando las esferas, vimos que\l"
	.string "precisamente ese era el problema.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_9:
	.string "Aunque estas cumplían su función a la\n"
	.string "perfección, el POKÉMON, aún siendo un\l"
	.string "clon… de algún modo sabía en su\l"
	.string "subconsciente más primitivo que esa no\l"
	.string "era la auténtica, la única ESFERA AZUL.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_10:
	.string "Como si de un sistema de seguridad de la\n"
	.string "naturaleza se tratara, esta parecía\l"
	.string "estar diciéndonos que dejáramos de\l"
	.string "hacer trampas para obtener poderes con\l"
	.string "los que no deberíamos jugar: no\l"
	.string "bastaba con hacer una copia para que\l"
	.string "fuera lo mismo.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_11:
	.string "Es eso a lo que vosotros llamáis\n"
	.string "esencia, ¿no?$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_12:
	.string "Pero, como dice el doctor, todo se trata\n"
	.string "de perfilar variables, y ahondar más y\l"
	.string "más en las sucesiones de causas y\l"
	.string "efectos, a nivel atómico si es\l"
	.string "necesario. Y al final, todo se reduce a\l"
	.string "eso.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_13:
	.string "Hubo que hacer muchos ajustes y\n"
	.string "pruebas, pero con el tiempo pudimos\l"
	.string "también sintetizar esa 'esencia'\l"
	.string "necesaria para que KYOGRE y GROUDON\l"
	.string "reviertan a su FORMA PRIMIGENIA sin\l"
	.string "causar ningún conflicto.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_14:
	.string "Ahora, como sospecharás, controlamos a\n"
	.string "la perfección ambas formas.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_15:
	.string "Aún recuerdo nuestra batalla en el LAGO\n"
	.string "FURIA. En esa ocasión solo fuí con un\l"
	.string "clon normal de KYOGRE, y POKÉMON\l"
	.string "únicamente entrenados por mí.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_16:
	.string "Pero ahora, has dejado claras tus\n"
	.string "intenciones. Esta vez vas a presenciar\l"
	.string "algunos de nuestros avances\l"
	.string "tecnológicos, pero sobre todo…{PAUSE 5}$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_17:
	.string "¡Vas a ver el verdadero poder que\n"
	.string "destruyó esta nave!$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_18:
	.string "¡¿Derrotaste a KYOGRE PRIMIGENIO?!$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_19:
	.string "Hmmm… al final, todo ese malgasto de\n"
	.string "stats en ese inútil ATAQUE FÍSICO sí\l"
	.string "que pasa factura. El poder desbordante\l"
	.string "sin control pierde mucha eficiencia.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_20:
	.string "Que eras un gran ENTRENADOR ya lo\n"
	.string "sabíamos, pero nuestra misión aquí no\l"
	.string "era derrotarte en un combate.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_21:
	.string "ADMIN.ZAFIRO recuperó el ESCÁNER.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_22:
	.string "Desde que escuchamos que ese\n"
	.string "CAP.BABOR quería realizar una\l"
	.string "expedición a la NAO para recuperar\l"
	.string "objetos perdidos, nos vimos obligados\l"
	.string "a actuar rápido.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_23:
	.string "Este ESCÁNER fue el que nos ayudó a\n"
	.string "localizar las esferas ROJA y AZUL. No\l"
	.string "obstante, haciéndole unos ajustes,\l"
	.string "podremos también localizar un objeto\l"
	.string "aún más antiguo{PAUSE 5}…{PAUSE 5}$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_24:
	.string "Sería una lástima que el verdadero\n"
	.string "ÉSCANER callese en las manos de esos\l"
	.string "inútiles, ¿no crees?$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_25:
	.string "El doctor y tu antiguo aliado se han\n"
	.string "encargado de borrar todas las pruebas\l"
	.string "que puedan inculpar a DEVON. Solo queda\l"
	.string "tu palabra contra la nuestra, en HOENN\l"
	.string "eso es igual a nada.$"

NaoAbandonada_7_Encuentro_Zafiro_Texto_26:
	.string "Y ahora, tendrás que disculparme. El\n"
	.string "ADM.AMATISTA estará ansioso por ver\l"
	.string "este ESCÁNER de vuelta.$"
