UnionCave_MapScripts::
	.byte 0

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
msgbox UnionCave_Combate_Elm_Texto_1 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_2 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_3 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_4 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_5 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_6 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_7 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_8 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_9 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_10 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_11 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_12 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_13 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_14 MSGBOX_AUTOCLOSE
release
end

UnionCave_Combate_Elm_Texto_1:
.string "Tal y como pensaba, decepcionante.$"

UnionCave_Combate_Elm_Texto_2:
.string "... ...$"

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
	.string "activa por mecanismos similares...$"

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
.string "Mmmm...\n"
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
