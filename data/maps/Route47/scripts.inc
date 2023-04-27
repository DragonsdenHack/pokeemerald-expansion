Route47_MapScripts::
	.byte 0

Route47_4::
lock     
faceplayer     
msgbox Route47_Text_4, MSGBOX_DEFAULT
release     
end

Route47_Text_4:
.string "El arte es una conversación unilateral\n"
.string "con lo no observado.$"



Route47_EventScript_Montanero::
	trainerbattle_single TRAINER_FERNANDO_5, Route47_Text_MontaneroIntro, Route47_Text_MontaneroDefeated
	msgbox Route47_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Montanero2::
	trainerbattle_single TRAINER_SAWYER_2, Route47_Text_Montanero2Intro, Route47_Text_Montanero2Defeated
	msgbox Route47_Text_Montanero2PostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Sabio::
	trainerbattle_single TRAINER_SAWYER_3, Route47_Text_SabioIntro, Route47_Text_SabioDefeated
	msgbox Route47_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route47_5::
lock
faceplayer
msgbox Route47_5_Text_5YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route47_5No
msgbox Route47_5_Text_5Yes, MSGBOX_DEFAULT
release
end



Route47_5_Text_5YesNo:
    .string "Dime, ¿crees ya haber visto todo cuanto\n"
	.string "este mundo tiene por ofrecer?$"



Route47_5No::
msgbox Route47_5_Text_5No, MSGBOX_DEFAULT
release
end


Route47_5_Text_5Yes:
    .string "Mmm, te entiendo, crees que nada puede\n"
	.string "superar lo que has vivido. No obstante,\l"
	.string "siempre hay lugar para la sorpresa, el\l"
	.string "poder bruto y absurdo puede ser\l"
	.string "rebasado por la calidad y la\l"
	.string "experiencia.$"



Route47_5_Text_5No:
    .string "¡Eso es! ¡Mantén viva esa ilusión del\n"
	.string "principiante que inicia su aventura!\l"
	.string "¡Es el camino a la sabiduría!$"


Route47_Encuentro_Andra_Arriba::
lock
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_2
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
addobject 9
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_4
applymovement 9, Route47_Encuentro_Andra_Move_3
waitmovement 0x0
goto Route47_Encuentro_Andra


Route47_Encuentro_Andra_Abajo::
lock
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_2
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
addobject 9
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_1
waitmovement 0x0
applymovement 9, Route47_Encuentro_Andra_Move_3
waitmovement 0x0
goto Route47_Encuentro_Andra


Route47_Encuentro_Andra::
msgbox Route47_Encuentro_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_5
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_1.1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_6
applymovement 9, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox Route47_Encuentro_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
delay 30
msgbox Route47_Encuentro_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_7
applymovement 9, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Route47_Encuentro_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
delay 15
msgbox Route47_Encuentro_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_2
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_10
applymovement 9, Route47_Encuentro_Andra_Move_9
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
removeobject 9
setvar VAR_VERDANTURF_TOWN_STATE, 5
release
end

Route47_Encuentro_Andra_Move_10:
delay_4
delay_4
face_up
delay_4
delay_4
face_left
step_end

Route47_Encuentro_Andra_Move_9:
walk_up
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
step_end

Route47_Encuentro_Andra_Move_8:
face_left
step_end

Route47_Encuentro_Andra_Move_7:
face_right
step_end

Route47_Encuentro_Andra_Move_6:
face_down
step_end

Route47_Encuentro_Andra_Move_5:
walk_left
walk_left
walk_left
walk_left
step_end

Route47_Encuentro_Andra_Move_4:
walk_down
walk_in_place_right
step_end

Route47_Encuentro_Andra_Move_3:
walk_down
walk_down
walk_left
step_end

Route47_Encuentro_Andra_Move_2:
walk_in_place_left
step_end

Route47_Encuentro_Andra_Move_1:
emote_exclamation_mark
face_right
step_end

Route47_Encuentro_Andra_Texto_1:
.string "¿Tú también por aquí, {PLAYER}?$"


Route47_Encuentro_Andra_Texto_1.1:
.string "JOHTO no deja de sorprenderme, esta\n"
	.string "región es mucho más de lo que a simple\l"
	.string "vista aparenta. Mira.$"

Route47_Encuentro_Andra_Texto_2:
.string "ANDRA: Este lugar es precioso, parece\n"
	.string "que GIOVANNI no quiso privarnos a\l"
	.string "ninguno de los 2 de apreciarlo. Ambos\l"
	.string "teníamos esta misión asignada.$"

Route47_Encuentro_Andra_Texto_2.1:
	.string "… …$"

Route47_Encuentro_Andra_Texto_3:
.string "¿Tú también lo has notado? Desde que\n"
	.string "derrotaste al POKÉMON ESENCIA, es\l"
	.string "como si los límites a los que un\l"
	.string "POKÉMON puede llegar hubieran\l"
	.string "cambiado.$"

Route47_Encuentro_Andra_Texto_4:
.string "Un ENTRENADOR normal no notaría el\n"
	.string "cambio, incluso ROJO, LANCE o el ALTO\l"
	.string "MANDO que enfrentamos en KANTO, no\l"
	.string "notarían la diferencia.$"

Route47_Encuentro_Andra_Texto_5:
.string "Pero aquellos que se han acercado, o\n"
	.string "incluso llegado al límite, habrán\l"
	.string "notado que el margen de mejora de sus\l"
	.string "POKÉMON es mayor, te permite un último\l"
	.string "plus cuando crees haber llegado al\l"
	.string "techo.$"

Route47_Encuentro_Andra_Texto_6:
.string "Desde que iniciamos este viaje en ISLA\n"
	.string "INTA, siempre nos la hemos arreglado\l"
	.string "para superarnos, a pesar de todas las\l"
	.string "experiencias vividas, cada encuentro\l"
	.string "nuestro ha logrado superar a la versión\l"
	.string "anterior, ¿hasta cuándo crees que\l"
	.string "seguirá así?$"

Route47_Encuentro_Andra_Texto_7:
.string "Tal vez estas rutas nos den\n"
	.string "respuestas, diría que hay cosas muy\l"
	.string "interesantes esperando más al oeste.$"

Route47_Encuentro_Andra_Texto_8:
.string "Nos vemos {PLAYER}, ¡mantén en forma\n"
	.string "a los tuyos!$"


Route47_Encuentro_Maestro_Anciano::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
applymovement 10, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
playse SE_PIN
applymovement 10, CianwoodEusineHouse_Combate_Move_2
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route47_Encuentro_Maestro_Anciano_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Maestro_Anciano_Move_1
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 6
release
end

Route47_Encuentro_Maestro_Anciano_Move_2:
walk_in_place_right
step_end

Route47_Encuentro_Maestro_Anciano_Move_1:
walk_slow_left
step_end

Route47_Encuentro_Maestro_Anciano_Texto_1:
.string "Dichosos sean mis ojos. ¡{PLAYER}!\n"
	.string "¡Tus acciones han cambiado el rumbo de\l"
	.string "la historia!$"

Route47_Encuentro_Maestro_Anciano_Texto_2:
.string "Después de lo de RUINAS ALFA, ¿qué más\n"
	.string "te queda por hacer? Bueno, como dice el\l"
	.string "dicho, en JOHTO siempre queda algo por\l"
	.string "hacer, si sabes adónde ir.$"

Route47_Encuentro_Maestro_Anciano_Texto_3:
.string "Veo que sigues buscando retos, ¿eh? Lo\n"
	.string "cierto es que estás en el lugar\l"
	.string "correcto, más al oeste está uno de los\l"
	.string "lugares más antiguos de JOHTO. Llevaba\l"
	.string "décadas sin venir aquí, creí que el\l"
	.string "MAESTRO de CIUDAD IRIS había viajado\l"
	.string "hasta aquí, tenía esperanzas de\l"
	.string "conversar una última vez con él pero...\l"
	.string "parece que HO-OH estimó que su hora\l"
	.string "había llegado.$"

Route47_Encuentro_Maestro_Anciano_Texto_4:
.string "Pero no hay de qué lamentarse, no hay\n"
	.string "mejor relevo que el que tengo delante.\l"
	.string "Te daré un consejo: dirígete más al\l"
	.string "oeste, ahí... tal vez incluso alguien de\l"
	.string "tu nivel encuentre lo que necesita,\l"
	.string "para mejorar aún más.$"

Route47_Encuentro_Maestro_Anciano_Texto_5:
.string "Permaneceré en esta RUTA un poco más.\n"
	.string "Si lograras superar el reto que hay más\l"
	.string "al oeste, vuelve aquí, me gustaría\l"
	.string "obsequiarte con algo.$"


Route47_Barrera::
compare VAR_VERDANTURF_TOWN_STATE, 6
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox Route47_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

Route47_Barrera_Texto_1:
.string "(Debería hacer caso al M.DRAGON e ir más\n"
	.string "al oeste).$"

Route47_Dialogo_Maestro_Anciano::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 10
goto_if_gt Route47_Dialogo_Maestro_Anciano_2
msgbox Route47_Encuentro_Maestro_Anciano_Texto_5 MSGBOX_AUTOCLOSE
release
end

Route47_Dialogo_Maestro_Anciano_2::
checkmoncatch SPECIES_REGIDRAGO
goto_if_eq VAR_RESULT, FALSE, Route47_Dialogo_Maestro_Anciano_3 
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_5 MSGBOX_AUTOCLOSE
release
end


Route47_Dialogo_Maestro_Anciano_3::
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_2 MSGBOX_AUTOCLOSE
 playfanfare MUS_OBTAIN_TMHM
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGIDRAGO, 90, ITEM_NONE
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route47_Dialogo_Maestro_Anciano_2_Texto_1:
.string "¡Veo que lo has logrado! Acabas de\n"
	.string "derrotar al tal vez maestro de JOHTO\l"
	.string "más poderoso aún con vida, ¡ya nada me\l"
	.string "sorprende contigo!$"

Route47_Dialogo_Maestro_Anciano_2_Texto_2:
.string "Ten este POKÉMON, te lo has ganado.$"

Route47_Dialogo_Maestro_Anciano_2_Texto_3:
.string "¡¡OBTUVISTE UN REGIDRAGO AL NV:90!!$"

Route47_Dialogo_Maestro_Anciano_2_Texto_4:
.string "Uno de mis POKÉMON más fieles, tal vez\n"
	.string "contigo pueda seguir viviendo grandes\l"
	.string "aventuras. ¡Con este viejo carcamal ya\l"
	.string "esta difícil que eso suceda jo, jo, jo!$"

Route47_Dialogo_Maestro_Anciano_2_Texto_5:
.string "La ilusión despierta el empeño y\n"
	.string "solamente la paciencia lo termina.\l"
	.string "¿Podrás continuar el viaje cuando\l"
	.string "flaqueen tus fuerzas?$"

