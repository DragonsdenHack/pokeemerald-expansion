UnionCave_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UnionCave_OnResume
	.byte 0

UnionCave_OnResume:
	call UnionCave_SetupEscapeWarp
	end

UnionCave_SetupEscapeWarp::
	setescapewarp MAP_ROUTE32, 9, 106
	return

UnionCave1::
end



UnionCave2::
end



UnionCave3::
end



UnionCave4::
end



UnionCave5::
lock     
faceplayer     
msgbox UnionCave_Text_5, MSGBOX_DEFAULT
release     
end

UnionCave_Text_5:
.string "El otro día decidí meterme en lo\n"
.string "más profundo de la cueva, y\l"
.string "encontré a un tipo que enseñaba un\l"
.string "movimiento muy potente a\l"
.string "cualquiera que pudiera aprenderlo.\l"
.string "¡Pero pedía 10000 POKÉS!$"



UnionCave7::
end



UnionCave8::
end



UnionCave9::
end



UnionCave_EventScript_Montanero::
	trainerbattle_single TRAINER_JOHANNA, UnionCave_Text_MontaneroIntro, UnionCave_Text_MontaneroDefeated
	msgbox UnionCave_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Necio::
	trainerbattle_single TRAINER_KIRA_AND_DAN_4, UnionCave_Text_NecioIntro, UnionCave_Text_NecioDefeated
	msgbox UnionCave_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Karateka::
	trainerbattle_single TRAINER_GERALD, UnionCave_Text_KaratekaIntro, UnionCave_Text_KaratekaDefeated
	msgbox UnionCave_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Necio2::
	trainerbattle_single TRAINER_KIRA_AND_DAN_5, UnionCave_Text_Necio2Intro, UnionCave_Text_Necio2Defeated
	msgbox UnionCave_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end

UnionCave_Combate_Elm::
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Combate_Elm_Move_1
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox UnionCave_Combate_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 6, UnionCave_Combate_Elm_Move_2
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Combate_Elm_Move_3
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_4
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox UnionCave_Combate_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 6, UnionCave_Combate_Elm_Move_2
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_5
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_7 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_6
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_7
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ELM, UnionCave_Combate_Elm_Texto_11
msgbox UnionCave_Combate_Elm_Texto_12 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_7
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Combate_Elm_Move_8
applymovement 6, UnionCave_Combate_Elm_Move_9
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_10
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_110_BIRCH
removeobject 6
setvar VAR_UNUSED_0x40F7, 127
release
end

UnionCave_Combate_Elm_Texto_1:
.string "Tal y como pensaba, decepcionante.$"

UnionCave_Combate_Elm_Texto_2:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

UnionCave_Combate_Elm_Texto_3:
.string "ELM: Ah, {PLAYER}.\n"
	.string "¿También explorando la CUEVA\l"
	.string "UNIÓN?$"

UnionCave_Combate_Elm_Texto_4:
.string "Quería hacer una pequeña\n"
	.string "investigación acerca del POKÉMON\l"
	.string "que duerme en lo más profundo de\l"
	.string "esta cueva.$"

UnionCave_Combate_Elm_Texto_5:
.string "Resultó ser un LAPRAS. No me\n"
	.string "malinterpretes, es un buen\l"
	.string "POKÉMON, pero mis expectativas\l"
	.string "eran mucho mayores.$"

UnionCave_Combate_Elm_Texto_6:
.string "¿¡De verdad!?\n"
	.string "¡¿Luchaste contra PEGASO padre\l"
	.string "en persona?!$"

UnionCave_Combate_Elm_Texto_7:
.string "Vaya, así que contigo sí accedió a\n"
	.string "combatir.$"

UnionCave_Combate_Elm_Texto_8:
.string "Un ENTRENADOR fascinante, sin\n"
	.string "duda. Quise investigar los\l"
	.string "mecanismos por los que su PIDGEOT\l"
	.string "podía MEGAEVOLUCIONAR sin hacer\l"
	.string "uso de mi tecnología, pero todos\l"
	.string "los de su generación son iguales:\l"
	.string "viven como anacoretas, ajenos a\l"
	.string "todo cuanto sucede en el mundo.\l"
	.string "quizás ahí esté su poder, al igual\l"
	.string "que el fenómeno del FUERTE\l"
	.string "VÍNCULO, su MEGAEVOLUCIÓN se\l"
	.string "activa por mecanismos similares…{PAUSE 5}$"

UnionCave_Combate_Elm_Texto_9:
.string "Tengo curiosidad.\n"
	.string "No solo luchaste contra él, sino\l"
	.string "que incluso pudiste derrotarlo.\l"
	.string "Tal vez tenga delante de mi un\l"
	.string "objeto de estudio aún más\l"
	.string "interesante que esos viejos\l"
	.string "LÍDERES, que pronto quedarán\l"
	.string "obsoletos en JOHTO.$"

UnionCave_Combate_Elm_Texto_10:
.string "¡Muéstrame tus POKÉMON,\n"
	.string "ADMINISTRADOR JEFE ROCKET!$"

UnionCave_Combate_Elm_Texto_11:
.string "Mmmm…\n"
	.string "Muy interesante, tomo nota.$"

UnionCave_Combate_Elm_Texto_12:
.string "Ya veo por qué eres uno de los\n"
	.string "ROCKET más influyentes y\l"
	.string "poderosos. Espero que nos sigas\l"
	.string "aportando valiosa información\l"
	.string "acerca de esos POKÉMON singulares.$"

UnionCave_Combate_Elm_Texto_13:
.string "Me retiro {PLAYER}, gracias por el\n"
	.string "combate.$"

UnionCave_Combate_Elm_Texto_14:
.string "Ah, y una cosa, pronto habrá un\n"
	.string "evento, un evento importante aquí\l"
	.string "en JOHTO. Seguramente GIOVANNI te\l"
	.string "informe pronto de ello. Después de\l"
	.string "lo que he visto en esta cueva,\l"
	.string "entiendo por qué siempre te\l"
	.string "tiene en cuenta para los asuntos\l"
	.string "más importantes.$"

UnionCave_Combate_Elm_Move_1:
walk_in_place_down
step_end

UnionCave_Combate_Elm_Move_2:
emote_exclamation_mark
walk_in_place_left
step_end

UnionCave_Combate_Elm_Move_3:
walk_down
walk_down
walk_right
step_end

UnionCave_Combate_Elm_Move_4:
walk_in_place_right
step_end

UnionCave_Combate_Elm_Move_5:
face_right
step_end

UnionCave_Combate_Elm_Move_6:
face_left
step_end

UnionCave_Combate_Elm_Move_7:
walk_in_place_left
step_end

UnionCave_Combate_Elm_Move_8:
face_up
step_end

UnionCave_Combate_Elm_Move_9:
walk_up
walk_up
delay_1
delay_2
walk_in_place_down
step_end

UnionCave_Combate_Elm_Move_10:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

UnionCave_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox UnionCave_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 126
release
end

UnionCave_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "Hemos recibido los datos del\l"
	.string "RAPIDASH FUERTE VÍNCULO de PEGASO.\l"
	.string "Debió de ser un duro oponente, ha\l"
	.string "logrado compensar su debilidad x4\l"
	.string "a ROCA con la HABILIDAD PELAJE\l"
	.string "RECIO. Muy impresionante, más con\l"
	.string "ese ATAQUE y VELOCIDAD de 130-135\l"
	.string "de BASE también.\l"
	.string "Ya sabes que puedes pasarte por la\l"
	.string "sala de la BASE PROFUNDA donde\l"
	.string "estudiaremos e iremos actualizando\l"
	.string "toda la información sobre esta\l"
	.string "clase de POKÉMON.\l"
	.string "Y una cosa más, ¿has visitado las\l"
	.string "RUINAS ALFA?\l"
	.string "Así es, no hemos hallado nada\l"
	.string "aún, pero no te preocupes, {PLAYER},\l"
	.string "por el momento céntrate en\l"
	.string "capturar los datos de los POKÉMON\l"
	.string "FUERTE VÍNCULO. Tenemos todo el\l"
	.string "tiempo del mundo para averiguar el\l"
	.string "misterio de las RUINAS. Los\l"
	.string "LÍDERES DE GIMNASIO{PAUSE 25}…{PAUSE 25} No sabemos\l"
	.string "cuanto pueden durar en esta JOHTO\l"
	.string "tan cambiante.$"
