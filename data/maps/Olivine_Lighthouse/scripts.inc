Olivine_Lighthouse_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Olivine_Lighthouse_OnResume
	.byte 0

Olivine_Lighthouse_OnResume:
	call Olivine_Lighthouse_SetupEscapeWarp
	end

Olivine_Lighthouse_SetupEscapeWarp::
	setescapewarp MAP_OLIVINE_CITY, 41, 33
	return

OliivineLighthouse1::
end



OliivineLighthouse2::
end



OliivineLighthouse3::
end



OliivineLighthouse4::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_4:
.string "Los CHINCHOU fueron los primeros\n"
.string "POKÉMON en servir como guía a los\l"
.string "marineros. Este FARO se construyó\l"
.string "en honor a ellos.$"



OliivineLighthouse5::
end



OliivineLighthouse6::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_6, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_6:
.string "NOCTOWL es un POKÉMON común entre\n"
.string "los marineros de JOHTO, su gran\l"
.string "sentido de la orientación y visión\l"
.string "nocturna nos es de gran ayuda.$"



OliivineLighthouse7::
end



OliivineLighthouse8::
end



OliivineLighthouse9::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_9, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_9:
.string "Me encantaría poder ver en persona\n"
.string "al poderoso POKÉMON que ilumina el\l"
.string "FARO, pero no sé cómo subir hasta\l"
.string "arriba…$"



OliivineLighthouse10::
end



OliivineLighthouse11::
lock
msgbox OliivineLighthouse11_Texto_1 MSGBOX_AUTOCLOSE
release
end

OliivineLighthouse11_Texto_1:
.string "...$"



OliivineLighthouse12::
end



OliivineLighthouse13::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_13, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_13:
.string "La ruta marítima OLIVO-TRIGAL\n"
.string "está llena de rocas, lo que\l"
.string "la hace innavegable. Si no, hace\l"
.string "tiempo que TRIGAL hubiera\l"
.string "dispuesto un enorme puerto para\l"
.string "ampliar aún más sus\l"
.string "conexiones.$"



OliivineLighthouse14::
end



OliivineLighthouse15::
end



OliivineLighthouse16::
end



OliivineLighthouse17::
end



OliivineLighthouse18::
end



OliivineLighthouse19::
end



OliivineLighthouse20::
end



OliivineLighthouse_EventScript_Marinero::
	trainerbattle_single TRAINER_CHANDLER, OliivineLighthouse_Text_MarineroIntro, OliivineLighthouse_Text_MarineroDefeated
	msgbox OliivineLighthouse_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero::
	trainerbattle_single TRAINER_KALEB, OliivineLighthouse_Text_CaballeroIntro, OliivineLighthouse_Text_CaballeroDefeated
	msgbox OliivineLighthouse_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Chico::
	trainerbattle_single TRAINER_JOSEPH, OliivineLighthouse_Text_ChicoIntro, OliivineLighthouse_Text_ChicoDefeated
	msgbox OliivineLighthouse_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero2::
	trainerbattle_single TRAINER_ALYSSA, OliivineLighthouse_Text_Caballero2Intro, OliivineLighthouse_Text_Caballero2Defeated
	msgbox OliivineLighthouse_Text_Caballero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero2::
	trainerbattle_single TRAINER_MARCOS, OliivineLighthouse_Text_Marinero2Intro, OliivineLighthouse_Text_Marinero2Defeated
	msgbox OliivineLighthouse_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Necio::
	trainerbattle_single TRAINER_RHETT, OliivineLighthouse_Text_NecioIntro, OliivineLighthouse_Text_NecioDefeated
	msgbox OliivineLighthouse_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero3::
	trainerbattle_single TRAINER_TYRON, OliivineLighthouse_Text_Marinero3Intro, OliivineLighthouse_Text_Marinero3Defeated
	msgbox OliivineLighthouse_Text_Marinero3PostBattle, MSGBOX_AUTOCLOSE
	end

Olivine_Lighthouse_Combate_Farero_Izq::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_1
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_2
waitmovement 0x0
delay 10
msgbox Olivine_Lighthouse_Combate_Farero_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_3
waitmovement 0x0
goto Olivine_Lighthouse_Combate_Farero

Olivine_Lighthouse_Combate_Farero_Der::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_1
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_2
waitmovement 0x0
delay 10
msgbox Olivine_Lighthouse_Combate_Farero_Texto_2 MSGBOX_AUTOCLOSE
goto Olivine_Lighthouse_Combate_Farero


Olivine_Lighthouse_Combate_Farero::
delay 20
msgbox Olivine_Lighthouse_Combate_Farero_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_4
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_5
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_6
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_6 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_7 MSGBOX_AUTOCLOSE
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_7
waitmovement 0x0
delay 20
msgbox Olivine_Lighthouse_Combate_Farero_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_8
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_9 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_9
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_10 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_11 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_8
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_1
waitmovement 0x0
delay 10
msgbox Olivine_Lighthouse_Combate_Farero_Texto_13 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_6
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_14 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_FARERO, Olivine_Lighthouse_Combate_Farero_Texto_15
msgbox Olivine_Lighthouse_Combate_Farero_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
fadescreen 1
delay 20
removeobject 18
removeobject 17
fadescreen 0
delay 10
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_11
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
fadescreen 1
delay 20
removeobject 11
fadescreen 0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
setvar VAR_UNUSED_0x40F7, 142
release
end

Olivine_Lighthouse_Combate_Farero_Texto_1:
.string "????: La ampliación del PUERTO a\n"
	.string "otras regiones será todo un éxito,\l"
	.string "ya lo verás.$"

Olivine_Lighthouse_Combate_Farero_Texto_2:
.string "????: ¿Puedo ayudarte?$"

Olivine_Lighthouse_Combate_Farero_Texto_3:
.string "????: Ah, así que retar al LÍDER\n"
	.string "de OLIVO. Yo soy el FARERO.$"

Olivine_Lighthouse_Combate_Farero_Texto_4:
.string "FARERO: Al LÍDER lo tienes justo\n"
	.string "ahí, estábamos debatiendo el\l"
	.string "futuro de CIUDAD OLIVO, su PUERTO,\l"
	.string "su FARO, su GIMNASIO...$"

Olivine_Lighthouse_Combate_Farero_Texto_5:
.string "CROM: Pronto vendrán muchos\n"
	.string "cambios, esperemos que para bien.\l"
	.string "Mi viejo amigo y yo intentaremos\l"
	.string "dejar esta ciudad en las mejores\l"
	.string "condiciones posibles antes de\l"
	.string "partir.$"

Olivine_Lighthouse_Combate_Farero_Texto_6:
.string "Hace tiempo que no acepto ningún\n"
	.string "reto de forma oficial. Lo siento\l"
	.string "chico, pero cuando todo este\l"
	.string "periodo de transición acabe,\l"
	.string "podrás retar a la nueva LÍDER que\l"
	.string "he escogido: YASMINA.\l"
	.string "Si logra evolucionar de una vez a\l"
	.string "su ONIX, claro.$"

Olivine_Lighthouse_Combate_Farero_Texto_7:
.string "Le queda mucho camino por\n"
	.string "recorrer, si eres experimentado me\l"
	.string "temo que no tendrás problema en\l"
	.string "derrotarla. Aún sigue usando a\l"
	.string "MAGNEMITE, así que imaginate.$"

Olivine_Lighthouse_Combate_Farero_Texto_8:
.string "Aunque...$"

Olivine_Lighthouse_Combate_Farero_Texto_9:
.string "Me agrada la idea de un último\n"
	.string "gran combate antes de partir,\l"
	.string "sería la guinda sobre el pastel a\l"
	.string "mi estancia en CIUDAD OLIVO.\l"
	.string "La cuestión es...\l"
	.string "¿Estarías tú a la altura de ese\l"
	.string "último gran combate?$"

Olivine_Lighthouse_Combate_Farero_Texto_10:
.string "FARERO: Eso podemos comprobarlo\n"
	.string "aquí y ahora.$"

Olivine_Lighthouse_Combate_Farero_Texto_11:
.string "CROM: Desde luego.$"

Olivine_Lighthouse_Combate_Farero_Texto_12:
.string "No conozco mejor vara de medir por\n"
	.string "los alrededores que mi viejo amigo\l"
	.string "y dueño actual de este FARO. Es tú\l"
	.string "único tren para combatir conmigo.\l"
	.string "O lo tomas ahora o lo pierdes para\l"
	.string "siempre.$"

Olivine_Lighthouse_Combate_Farero_Texto_13:
.string "Muy bien, no se hable más.$"

Olivine_Lighthouse_Combate_Farero_Texto_14:
.string "FARERO: Usaré toda la energía de\n"
	.string "mis POKÉMON, es lo menos que puedo\l"
	.string "hacer si combatir a CROM es lo que\l"
	.string "está en juego.\l"
	.string "¡Prepárate!$"

Olivine_Lighthouse_Combate_Farero_Texto_15:
.string "¿La cola de mi AMPHAROS se apagó?$"

Olivine_Lighthouse_Combate_Farero_Texto_16:
.string "FARERO: Disculpad, debo ir al\n"
	.string "CENTRO POKÉMON cuanto antes, no\l"
	.string "esperaba que debilitaras a todos\l"
	.string "mis POKÉMON, y lo último que\l"
	.string "queremos en este FARO es tener un\l"
	.string "AMPHAROS sin energía.$"

Olivine_Lighthouse_Combate_Farero_Texto_17:
.string "CROM: ¡Jah!\n"
	.string "¡Magnífico chico, magnífico!\l"
	.string "¡Nos has dejado en shock!\l"
	.string "ENTRENADORES como tú escasean cada\l"
	.string "vez más hoy en día, estaré\l"
	.string "esperándote en el GIMNASIO para\l"
	.string "nuestro combate.\l"
	.string "¡La suerte está echada!$"

Olivine_Lighthouse_Combate_Farero_Move_1:
walk_in_place_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_2:
emote_exclamation_mark
face_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_3:
walk_right
walk_up
walk_in_place_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_4:
walk_in_place_right
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_5:
walk_left
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_6:
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_7:
face_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_8:
face_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_9:
face_right
step_end

Olivine_Lighthouse_Combate_Farero_Move_10:
walk_up
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_11:
walk_left
walk_down
step_end

Olivine_Lighthouse_Ampharosita::
lock
faceplayer
checkitem ITEM_AMPHAROSITE
goto_if_eq VAR_RESULT, FALSE, Olivine_Lighthouse_Ampharosita_2
msgbox Olivine_Lighthouse_Ampharosita_Texto_3 MSGBOX_AUTOCLOSE
release
end

Olivine_Lighthouse_Ampharosita_2::
msgbox Olivine_Lighthouse_Ampharosita_Texto_1 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_AMPHAROSITE
msgbox Olivine_Lighthouse_Ampharosita_Texto_2 MSGBOX_DEFAULT
waitfanfare
release
end

Olivine_Lighthouse_Ampharosita_Texto_1:
.string "FARERO: ¡Ah!\n"
	.string "¡{PLAYER}!\l"
	.string "¡Has vuelto!\l"
	.string "CROM me puso al tanto de vuestro\l"
	.string "combate, no puedo creer que al\l"
	.string "final acabaras derrotándolo, no\l"
	.string "sabes las veces que mis POKÉMON\l"
	.string "ELÉCTRICOS han mordido el polvo\l"
	.string "con ese SKARMORY inmune a sus\l"
	.string "ataques.\l"
	.string "Nos has devuelto la ilusión y las\l"
	.string "ganas por volver a combatir, por\l"
	.string "ello quiero que aceptes esto.$"

Olivine_Lighthouse_Ampharosita_Texto_2:
.string "¡¡Obtuviste AMPHAROSITA de\n"
	.string "manos de FARERO!!$"

Olivine_Lighthouse_Ampharosita_Texto_3:
.string "Gran POKÉMON, AMPHAROS, ¿no crees?\n"
	.string "De los pocos capaces de pegar duro\l"
	.string "y aguantar bien los golpes al\l"
	.string "mismo tiempo, aunque esa VELOCIDAD\l"
	.string "a veces le condene...$"



Faro_Voltiocambio::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_807, Faro_Voltiocambio_Despues
msgbox Faro_Voltiocambio_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM78
msgbox Faro_Voltiocambio_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_807
release     
end

Faro_Voltiocambio_Despues::
msgbox Faro_Voltiocambio_Texto_2, MSGBOX_NPC
release
end

Faro_Voltiocambio_Texto_1.1:
.string "¡{PLAYER} obtuvo la MT78 VOLTIOCAMBIO\n"
	.string "de manos de mecánico!$"

Faro_Voltiocambio_Texto_1:
	.string "Llevo trabajando aquí desde que el\n"
	.string "FARO se inauguró, sé perfectamente\l"
	.string "cómo funcionan todas las\l"
	.string "conexiones eléctricas del lugar.$"

Faro_Voltiocambio_Texto_2:
.string "Si usas las GAFAS ELEGIDAS no solo\n"
	.string "marearás al rival con los cambios,\l"
	.string "también potenciarás el daño\l"
	.string "causado. ¡Pero cuidado con quedar\l"
	.string "atrapado por el TIPO TIERRA o la\l"
	.string "HABILIDAD ABSORBER.ELÉC!$"
