MtEmber_Entrance_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, MtEmber_Entrance_OnResume
	.byte 0

MtEmber_Entrance_OnResume:
	call MtEmber_Entrance_SetupEscapeWarp
	end

MtEmber_Entrance_SetupEscapeWarp::
	setescapewarp MAP_MT_EMBER_ENTRANCE, 28, 48
	return

MtEmberEntrance_1::
end



MtEmberEntrance_7::
end



MtEmberEntrance_10::
end



MtEmberEntrance_11::
end



MtEmberEntrance_12::
lock
msgbox MtEmberEntrance_12_Texto_1 MSGBOX_SIGN
release
end

MtEmberEntrance_12_Texto_1:
	.string "Well... TABITHA should be arriving soon\n"
	.string "with the necessary material to find the\l"
	.string "RUBY...$"



MtEmberEntrance_13::
end



MtEmberEntrance_19::
end



MtEmberEntrance_20::
end



MtEmberEntrance_EventScript_Chica::
	trainerbattle_single TRAINER_JONATHAN, MtEmberEntrance_Text_ChicaIntro, MtEmberEntrance_Text_ChicaDefeated
	msgbox MtEmberEntrance_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_EventScript_Chico::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, MtEmberEntrance_Text_ChicoIntro, MtEmberEntrance_Text_ChicoDefeated
	msgbox MtEmberEntrance_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_EventScript_Luchadora::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_MUDKIP, MtEmberEntrance_Text_LuchadoraIntro, MtEmberEntrance_Text_LuchadoraDefeated
	msgbox MtEmberEntrance_Text_LuchadoraPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_Encuentro_Magno_Arriba::
lock
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 2
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtEmberEntrance_Encuentro_Magno_Move_1
waitmovement 0x0
goto MtEmberEntrance_Encuentro_Magno

MtEmberEntrance_Encuentro_Magno_Abajo::
lock
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 2
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtEmberEntrance_Encuentro_Magno_Move_1.1
waitmovement 0x0
goto MtEmberEntrance_Encuentro_Magno

MtEmberEntrance_Encuentro_Magno::
msgbox MtEmberEntrance_Encuentro_Magno_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtEmberEntrance_Encuentro_Magno_Move_2
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_3
waitmovement 0x0
playse MUS_ENCOUNTER_MAGMA
msgbox MtEmberEntrance_Encuentro_Magno_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox MtEmberEntrance_Encuentro_Magno_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_4
msgbox MtEmberEntrance_Encuentro_Magno_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_5
msgbox MtEmberEntrance_Encuentro_Magno_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_7
waitmovement 0x0
msgbox MtEmberEntrance_Encuentro_Magno_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_8
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
removeobject 2
playse MUS_RG_MT_MOON
setvar VAR_ROUTE105_STATE, 4
release
end

MtEmberEntrance_Encuentro_Magno_Texto_1:
.string "????: Debe ser aquí.$"

MtEmberEntrance_Encuentro_Magno_Texto_2:
.string "Esta gran montaña resultó ser el\n"
	.string "hogar de un legendario como\l"
	.string "MOLTRES, alguien lo dejó bastante\l"
	.string "debilitado, listo para ser\l"
	.string "capturado y unirse a mi equipo.$"

MtEmberEntrance_Encuentro_Magno_Texto_3:
.string "...$"

MtEmberEntrance_Encuentro_Magno_Texto_4:
.string "Mentiría si dijera que no prefiero\n"
	.string "antes a un ENTEI, el auténtico\l"
	.string "espíritu de un volcán en erupción,\l"
	.string "antes que un MOLTRES, sin embargo,\l"
	.string "jamás rechazaría un POKÉMON de\l"
	.string "esas características cuando se\l"
	.string "presenta tan facilmente.$"

MtEmberEntrance_Encuentro_Magno_Texto_5:
.string "No obstante, no estoy aquí por\n"
	.string "MOLTRES, este lugar esconde algo\l"
	.string "mucho más valioso y poderoso en\l"
	.string "su interior de lo que jamás\l"
	.string "pudiéramos imaginar solo echando\l"
	.string "un simple vistazo a su superficie.$"

MtEmberEntrance_Encuentro_Magno_Texto_6:
.string "Te lo advierto chico, no te metas\n"
	.string "en asuntos más grandes que tu\l"
	.string "propia existencia, o serás\l"
	.string "reducido a cenizas por un poder\l"
	.string "que escapa a tu comprensión.$"

MtEmberEntrance_Encuentro_Magno_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

MtEmberEntrance_Encuentro_Magno_Move_1.1:
emote_exclamation_mark
walk_up
walk_in_place_left
step_end

MtEmberEntrance_Encuentro_Magno_Move_2:
face_left
step_end

MtEmberEntrance_Encuentro_Magno_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

MtEmberEntrance_Encuentro_Magno_Move_4:
face_down
step_end

MtEmberEntrance_Encuentro_Magno_Move_5:
walk_in_place_down
step_end

MtEmberEntrance_Encuentro_Magno_Move_6:
walk_right
walk_right
step_end

MtEmberEntrance_Encuentro_Magno_Move_7:
emote_exclamation_mark
step_end

MtEmberEntrance_Encuentro_Magno_Move_8:
walk_down
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


MtEmber_Entrance_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE103_STATE, 0
goto_if_gt MtEmber_Entrance_Entrenador_Especial_3
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtEmber_Entrance_Entrenador_Especial_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TERREMOTO, MtEmber_Entrance_Entrenador_Especial_Texto_5
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM83
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE103_STATE, 1
release
end

MtEmber_Entrance_Entrenador_Especial_No::
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end


MtEmber_Entrance_Entrenador_Especial_3::
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end


MtEmber_Entrance_Entrenador_Especial_Texto_1:
.string "Si este volcán entrara en\n"
	.string "erupción, probablemente la\l"
	.string "explosión se extendería hasta ISLA\l"
	.string "SECUNDA y TERA, afortunadamente al\l"
	.string "parecer está dormido y es muy\l"
	.string "improbable que algo así ocurra en\l"
	.string "los próximos siglos, pero pone de\l"
	.string "manifiesto la fuerza de una\l"
	.string "explosión, si quieres puedo\l"
	.string "mostrarte POKÉMON capaces de\l"
	.string "provocar y resistir explosiones de\l"
	.string "ese calibre.$"

MtEmber_Entrance_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste MT83 TERRATEMBLOR\n"
	.string "de manos de MONTAÑERO!$"

MtEmber_Entrance_Entrenador_Especial_Texto_2:
.string "Entonces, ¿aceptas el reto?$"

MtEmber_Entrance_Entrenador_Especial_Texto_3:
.string "Con TERRATEMBLOR no solo podrás\n"
	.string "golpear al rival, también le bajarás\l"
	.string "siempre la VELOCIDAD. Es como el TUMBA\l"
	.string "ROCAS que da ese BROCK en CIUDAD\l"
	.string "PLATEADA, ¡pero nunca falla!$"

MtEmber_Entrance_Entrenador_Especial_Texto_4:
.string "Bien, ¡te advierto que mis POKÉMON\n"
	.string "son duros como rocas!$"

MtEmber_Entrance_Entrenador_Especial_Texto_5:
.string "¡Has roto la coraza de mi\n"
	.string "equipo!$"

MtEmber_Entrance_Entrenador_Especial_Texto_6:
.string "No esperaba perder, no hay un\n"
	.string "MONTAÑERO de mi nivel por esta\l"
	.string "zona, acepta esto como regalo.$"

MtEmber_Entrance_Entrenador_Especial_Texto_7:
.string "Es duro enfrentar a POKÉMON que\n"
	.string "pueden explotar en cualquier\l"
	.string "momento, lo sé.$"
