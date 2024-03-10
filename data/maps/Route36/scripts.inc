Route36_MapScripts::
	.byte 0

Route36_1::
end



Route36_2::
end



Route36_3::
end



Route36_4::
end



Route36_5::
lock     
faceplayer     
msgbox Route36_Text_5, MSGBOX_DEFAULT
release     
end

Route36_Text_5:
.string "A mi NIDORINO le encanta pasear\n"
.string "por estas rutas, a veces vamos al\l"
.string "ENCINAR a relajarnos.$"



Route36_6::
end



Route36_7::
lock     
faceplayer     
msgbox Route36_Text_7, MSGBOX_DEFAULT
release     
end

Route36_Text_7:
.string "Al parecer hay varios POKÉMON, de\n"
.string "los que se pensaba que no podían\l"
.string "evolucionar, que sí lo hacen, como\l"
.string "GLIGAR o AIPOM.\l"
.string "¿Qué más POKÉMON podrán\l"
.string "evolucionar sin saberlo la\l"
.string "mayoría?$"



Route36_8::
lock     
faceplayer     
msgbox Route36_Text_8, MSGBOX_DEFAULT
release     
end

Route36_Text_8:
.string "Me encanta PINSIR. A diferencia de\n"
.string "SCYTHER o HERACROSS, es un BICHO\l"
.string "puro de verdad, rápido, con un\l"
.string "gran ATAQUE y sólida DEFENSA. Lo\l"
.string "único que le falla es la\l"
.string "DEF.ESPECIAL…$"



Route36_9::
end



Route36_10::
end



Route36_11::
end



Route36_EventScript_Chica::
	trainerbattle_single TRAINER_MEL_AND_PAUL, Route36_Text_ChicaIntro, Route36_Text_ChicaDefeated
	msgbox Route36_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route36_EventScript_Sabio::
	trainerbattle_single TRAINER_JOHN_AND_JAY_3, Route36_Text_SabioIntro, Route36_Text_SabioDefeated
	msgbox Route36_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route36Documento_100::
msgbox Route36Documento_Text_100, MSGBOX_SIGN   
end

Route36Documento_Text_100:
	.string "¡SCYTHER y PINSIR son las mejores\n"
	.string "piezas que puedes atrapar en el\l"
	.string "PARQUE NACIONAL!$"



Route36_SudowoodoRest::
msgbox Route36_SudowoodoRest_Text, MSGBOX_NPC   
end

Route36_SudowoodoRest_Text:
	.string "…\n"
	.string "…\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"



Route36Documento_101::
msgbox Route36Documento_Text_101, MSGBOX_SIGN   
end

Route36Documento_Text_101:
	.string "RUTA 36\n"
	.string "Al este CIUDAD MALVA$"



Route36_EventScript_Pareja1::
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, Route36_Text_Pareja1Intro, Route36_Text_Pareja1Defeated
	msgbox Route36_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route36_EventScript_Pareja2::
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, Route36_Text_Pareja2Intro, Route36_Text_Pareja2Defeated
	msgbox Route36_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route36_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
waitse
playse SE_PIN
msgbox Route36_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route36_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 138
release
end

Route36_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: Gran trabajo, {PLAYER}, el\n"
	.string "equilibrio y total de 650 de BASE\l"
	.string "de ese KINGDRA está sorprendiendo\l"
	.string "a nuestros científicos. ¿Sabías\l"
	.string "que 5 de sus 6 STATS tienen 115 de\l"
	.string "base?\l"
	.string "Las bestias de JOHTO que\l"
	.string "enfrentaste únicamente contaban\l"
	.string "con dos 115 de BASE como mejores\l"
	.string "STATS.$"

Route36_Llamada_Giovanni_Texto_2:
.string "Ahora que has visto CIUDAD TRIGAL,\n"
	.string "supongo que CIUDAD IRIS es tu\l"
	.string "próximo destino. Podrías\l"
	.string "aprovechar para investigar sobre\l"
	.string "el legendario HO-OH. Mientras\l"
	.string "tanto, la gran reunión en la TORRE\l"
	.string "RADIO es ya una realidad, la\l"
	.string "cuestión es cuando se celebrará.\l"
	.string "Como uno de los pilares del TEAM\l"
	.string "ROCKET, tendrás el honor de\l"
	.string "asistir. Se requerirá pues de tu\l"
	.string "presencia en la TORRE RADIO a su\l"
	.string "debido tiempo…$"
