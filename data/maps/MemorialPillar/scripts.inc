MemorialPillar_MapScripts::
	.byte 0

MemorialPillar1::
end


MemorialPillar2::
end


MemorialPillar3::
end


MemorialPillar4::
end


MemorialPillar5::
end

MemorialPillar_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, MemorialPillar_Text_MarcIntro, MemorialPillar_Text_MarcDefeated
	msgbox MemorialPillar_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, MemorialPillar_Text_BrendenIntro, MemorialPillar_Text_BrendenDefeated
	msgbox MemorialPillar_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end



MemorialPillar_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, MemorialPillar_Text_LilithIntro, MemorialPillar_Text_LilithDefeated
	msgbox MemorialPillar_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Onyx::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MemorialPillar_Move_1
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 1, MemorialPillar_Move_1
msgbox MemorialPillar_Text_Onyx, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_2, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_3, MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_3
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 1
release
end

MemorialPillar_Text_Onyx:
.string "Aunque debieras vivir 3000 años, y\n"
	.string "aún 10 veces otros tantos,\l"
	.string "acuérdate siempre que no se pierde\l"
	.string "otra vida que la que se vive y que\l"
	.string "solo se vive la que se pierde.$"

MemorialPillar_Text_Onyx_Texto_2:
	.string "Así, la más larga vida y la más\n"
	.string "corta vienen a reducirse a lo\l"
	.string "mismo, el momento presente que se\l"
	.string "vive es igual para todos, el que\l"
	.string "se pierde también, y este que se\l"
	.string "pierde llega a parecernos\l"
	.string "indivisible.$"

MemorialPillar_Text_Onyx_Texto_3:
	.string "Y es que no se pierde ni el pasado\n"
	.string "ni el futuro, puesto que lo que no\l"
	.string "poseemos cómo podría\l"
	.string "arrebatársenos.$"


MemorialPillar_Move_1:
walk_in_place_up
step_end


MemorialPillar_Move_2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

MemorialPillar_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

MemorialPillar_ChicoOnix::
lock
faceplayer
compare VAR_ROUTE119_STATE, 1
goto_if_eq MemorialPillar_ChicoOnix_Pregunta
compare VAR_ROUTE119_STATE, 2
goto_if_eq MemorialPillar_ChicoOnix_Mision
compare VAR_ROUTE119_STATE, 3
goto_if_eq MemorialPillar_ChicoOnix_Post
compare VAR_ROUTE119_STATE, 4
goto_if_eq MemorialPillar_ChicoOnix_Final
msgbox MemorialPillar_ChicoOnix_Texto_1 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_1 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_2 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_1
waitmovement 0x0
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_3 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_4 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_5 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_2
waitmovement 0x0
delay 10
setvar VAR_ROUTE119_STATE, 1
msgbox MemorialPillar_ChicoOnix_Despues_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MemorialPillar_ChicoOnix_No
setvar VAR_ROUTE119_STATE, 2
msgbox MemorialPillar_ChicoOnix_Despues_Texto_7 MSGBOX_NPC
msgbox MemorialPillar_ChicoOnix_Despues_Texto_8 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Pregunta::
msgbox MemorialPillar_ChicoOnix_Despues_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MemorialPillar_ChicoOnix_No
setvar VAR_ROUTE119_STATE, 2
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
msgbox MemorialPillar_ChicoOnix_Despues_Texto_7 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_8 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Mision::
faceplayer
msgbox MemorialPillar_ChicoOnix_Despues_Texto_9 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_No::
lock
msgbox MemorialPillar_ChicoOnix_No_Texto_1 MSGBOX_AUTOCLOSE
release
end

MemorialPillar_ChicoOnix_No_Texto_1:
	.string "Mmm, entiendo. No parece alguien muy\n"
	.string "amigable, la verdad.$"

MemorialPillar_ChicoOnix_Move_3:
emote_exclamation_mark
step_end

MemorialPillar_ChicoOnix_Move_2:
walk_in_place_up
delay_8
face_player
step_end

MemorialPillar_ChicoOnix_Move_1:
face_up
delay_16
delay_8
face_player
step_end

MemorialPillar_ChicoOnix_Texto_1:
.string "Aquí yace mi ONIX, llamado TECTONIX.\n"
	.string "Levanté este lugar en su honor, para\l"
	.string "que todos recuerden su nombre.$"


MemorialPillar_ChicoOnix_Post::
lock
faceplayer
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_BADGE
msgbox MemorialPillar_ChicoOnix_Despues_Texto_10 MSGBOX_DEFAULT
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_11 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_12 MSGBOX_NPC
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
msgbox MemorialPillar_ChicoOnix_Despues_Texto_13 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_1
waitmovement 0x0
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_14 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox MemorialPillar_ChicoOnix_Despues_Texto_15 MSGBOX_DEFAULT
givemon SPECIES_PHANPY, 8, ITEM_METEORITE
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_16 MSGBOX_NPC
msgbox MemorialPillar_ChicoOnix_Despues_Texto_17 MSGBOX_NPC
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_LEMONADE, 6
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_19 MSGBOX_NPC
setvar VAR_ROUTE119_STATE, 4
release
end

MemorialPillar_ChicoOnix_Final::
msgbox MemorialPillar_ChicoOnix_Despues_Texto_20 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Despues_Texto_1:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

MemorialPillar_ChicoOnix_Despues_Texto_2:
	.string "A TECTONIX le encantaban las limonadas,\n"
	.string "me gustaría poder colocar algunas como\l"
	.string "homenaje.$"

MemorialPillar_ChicoOnix_Despues_Texto_3:
	.string "Pero hace tiempo que dejaron de\n"
	.string "venderse en ARCHI7.$"

MemorialPillar_ChicoOnix_Despues_Texto_4:
	.string "Aunque hay un cocinero… suele pasar\n"
	.string "por el CENTRO PKMN de la isla.$"

MemorialPillar_ChicoOnix_Despues_Texto_5:
	.string "Él sí que tiene limonadas, el problema\n"
	.string "es que solo las emplea para sus ricos\l"
	.string "clientes, que se la compran a precio de\l"
	.string "oro junto con el resto de sus menús.$"

MemorialPillar_ChicoOnix_Despues_Texto_6:
	.string "Dime, ¿tú podrías convencerle para que\n"
	.string "me vendiera algunas?$"

MemorialPillar_ChicoOnix_Despues_Texto_7:
	.string "¡Oh! ¿De verdad? Eso sería genial.$"

MemorialPillar_ChicoOnix_Despues_Texto_8:
	.string "Si lo logras, te estaré muy agradecido, y\n"
	.string "te daré algo muy especial.$"

MemorialPillar_ChicoOnix_Despues_Texto_9:
	.string "Dime, ¿lograste convencerlo? Suele\n"
	.string "parar en el CENTRO PKMN de ISLA INTA a\l"
	.string "descansar.$"

MemorialPillar_ChicoOnix_Despues_Texto_10:
	.string "¡¡{PLAYER} le entregó la caja de\n"
	.string "limonadas al ENTRENADOR!!$"

MemorialPillar_ChicoOnix_Despues_Texto_11:
	.string "¡Guau! ¿De verdad pudiste convencerlo?\n"
	.string "Te han debido de costar una fortuna.$"

MemorialPillar_ChicoOnix_Despues_Texto_12:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

MemorialPillar_ChicoOnix_Despues_Texto_13:
	.string "¡Oh! ¿Entonces ha sido un regalo? No\n"
	.string "sabía que fuera alguien tan generoso,\l"
	.string "está claro que las apariencias engañan.$"

MemorialPillar_ChicoOnix_Despues_Texto_14:
	.string "Yo no seré menos. Ahora mi ONIX tiene su\n"
	.string "merecido tributo, y este POKÉMON es\l"
	.string "para ti.$"

MemorialPillar_ChicoOnix_Despues_Texto_15:
	.string "¡¡OBTUVISTE UN PHANPY AL NV.8!!$"

MemorialPillar_ChicoOnix_Despues_Texto_16:
	.string "Viene con un raro objeto, que encontré\n"
	.string "paseando por CUEVA CAMBIANTE.$"

MemorialPillar_ChicoOnix_Despues_Texto_17:
	.string "Toma esto también.$"

MemorialPillar_ChicoOnix_Despues_Texto_18:
	.string "¡¡{PLAYER} obtuvo 6 limonadas!!$"

MemorialPillar_ChicoOnix_Despues_Texto_19:
	.string "Con el resto de la caja tengo de sobra.\p"
	.string "¡Espero ver también al cocinero para\n"
	.string "darle las gracias!$"

MemorialPillar_ChicoOnix_Despues_Texto_20:
	.string "Si algo aprendí de TECTONIX, es que la\n"
	.string "enfermedad es un impedimento del\l"
	.string "cuerpo, pero no del albedrío, a menos\l"
	.string "que él lo consienta.$"

