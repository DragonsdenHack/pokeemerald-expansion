Azalea_Gym_MapScripts::
	.byte 0




AzaleaGym1::
end



AzaleaGym2::
end



AzaleaGym3::
end



AzaleaGym4::
end



AzaleaGym_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_MAUVILLE, AzaleaGym_Text_CazabichosIntro, AzaleaGym_Text_CazabichosDefeated
	msgbox AzaleaGym_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_WALLY_VR_2, AzaleaGym_Text_Cazabichos2Intro, AzaleaGym_Text_Cazabichos2Defeated
	msgbox AzaleaGym_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Sabio::
	trainerbattle_single TRAINER_WALLY_VR_3, AzaleaGym_Text_SabioIntro, AzaleaGym_Text_SabioDefeated
	msgbox AzaleaGym_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end


AzaleaGym_Combate_Cesar::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 130
goto_if_gt Azalea_Gym_Combate_Cesar_2
msgbox AzaleaGym_Combate_Cesar_Texto_1 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_2 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaGym_Combate_Cesar_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaGym_Combate_Cesar_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaGym_Combate_Cesar_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CESAR, AzaleaGym_Combate_Cesar_Texto_7
msgbox AzaleaGym_Combate_Cesar_Texto_8 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox AzaleaGym_Combate_Cesar_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_GRUBBIN, 25, ITEM_NONE
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox AzaleaGym_Combate_Cesar_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM82
msgbox AzaleaGym_Combate_Cesar_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_11.3 MSGBOX_NPC
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
setvar VAR_UNUSED_0x40F7, 131
release
end

AzaleaGym_Combate_Cesar_Texto_11.1:
.string "Ah, y una cosa más. Toma.$"

AzaleaGym_Combate_Cesar_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT82 ESTOICISMO\n"
	.string "de manos de CESAR!!$"

AzaleaGym_Combate_Cesar_Texto_11.3:
.string "No es muy potente, pero agotará el\n"
	.string "ATAQUE ESPECIAL del rival. Si sabes\l"
	.string "darle un buen uso te puede sacar de\l"
	.string "muchos apuros, ¡créeme!$"


Azalea_Gym_Combate_Cesar_2::
msgbox AzaleaGym_Combate_Cesar_Texto_12 MSGBOX_AUTOCLOSE
release
end

AzaleaGym_Combate_Cesar_Texto_1:
.string "CÉSAR: ¡{PLAYER}!\n"
	.string "¡Ya estás aquí!$"

AzaleaGym_Combate_Cesar_Texto_2:
.string "Debo de confesarte que estoy\n"
	.string "ansioso por combatir. A pesar de\l"
	.string "mi avanzada edad, aún sigo\l"
	.string "teniendo la ilusión de un niño en\l"
	.string "cuanto al combate POKÉMON se\l"
	.string "refiere.$"

AzaleaGym_Combate_Cesar_Texto_3:
.string "El problema es que, llegados a\n"
	.string "cierto nivel y después de todo lo\l"
	.string "que he visto y vivido, pocas cosas\l"
	.string "pueden llegar a sorprenderme ya, y\l"
	.string "encuentro mucha más satisfacción\l"
	.string "en pulir mi propia técnica que en\l"
	.string "luchar frente a rivales que son ya\l"
	.string "un libro abierto para mi y mi\l"
	.string "equipo.$"

AzaleaGym_Combate_Cesar_Texto_4:
.string "...$"

AzaleaGym_Combate_Cesar_Texto_5:
.string "MIRTO me ha demostrado que siempre\n"
	.string "queda algo extraordinario allá\l"
	.string "afuera por descubrir, incluso\l"
	.string "cuando crees haberlo visto todo.$"

AzaleaGym_Combate_Cesar_Texto_6:
.string "¿Serás tú, {PLAYER}, otra de esas\n"
	.string "singularidades capaces de volver a\l"
	.string "hacer vibrar en un combate a una\l"
	.string "vieja gloria de JOHTO?\l"
	.string "¡Veámoslo!$"

AzaleaGym_Combate_Cesar_Texto_7:
.string "Ah... Este combate sí.$"

AzaleaGym_Combate_Cesar_Texto_8:
.string "No recuerdo la última vez que\n"
	.string "alguien rompió el vínculo que me\l"
	.string "une con BUTTERFREE.$"

AzaleaGym_Combate_Cesar_Texto_9:
.string "Seas quien seas, no hay duda de\n"
	.string "que vas tras metas elevadas. El\l"
	.string "nivel de tu equipo no refleja otra\l"
	.string "cosa.\l"
	.string "Me gustaría que te quedaras con\l"
	.string "este POKÉMON, obtuve varios\l"
	.string "ejemplares hace ya tiempo, en uno\l"
	.string "de mis tantos viajes.$"

AzaleaGym_Combate_Cesar_Texto_10:
.string "¡¡OBTUVISTE UN GRUBBIN AL NV:25!!$"

AzaleaGym_Combate_Cesar_Texto_11:
.string "VIKAVOLT es uno de mis TIPO BICHO\n"
	.string "favoritos, su portentoso ATAQUE\l"
	.string "ESPECIAL es toda una rareza que\l"
	.string "puede abrir huecos en cualquier\l"
	.string "equipo.\l"
	.string "No lo parece, ¡pero sus descargas\l"
	.string "eléctricas son más potentes que\l"
	.string "las del mismísimo ZAPDOS!$"

AzaleaGym_Combate_Cesar_Texto_12:
.string "Ahora que lo pienso...\n"
	.string "No le pregunté a MIRTO de donde\l"
	.string "venía. Me gustaría tener al menos\l"
	.string "la forma normal de ese POKÉMON tan\l"
	.string "especial.\l"
	.string "Esa polilla es lo más\l"
	.string "extraordinario que he visto jamás,\l"
	.string "qué pena que las mejores flores\l"
	.string "acaben por marchitarse antes, pero\l"
	.string "nada podrá arrebatarles la luz que\l"
	.string "mostraron al mundo en ese periodo\l"
	.string "de tiempo.$"



AzaleaGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 130
goto_if_gt AzaleaGym_Gym_Dude_2
msgbox AzaleaGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

AzaleaGym_Gym_Dude_2::
msgbox AzaleaGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

AzaleaGym_Gym_Dude_Texto_1:
.string "No sé quien eres ni por qué estás\n"
	.string "aquí.\l"
	.string "¡Pero estoy encantado de tener\l"
	.string "un nuevo aspirante!\l"
	.string "Escucha, CÉSAR es un maestro del\l"
	.string "TIPO BICHO. Puedes usar el\l"
	.string "VOLADOR, FUEGO y ROCA contra él,\l"
	.string "pero te aconsejo usarlos\l"
	.string "sabiamente. Puede neutralizar a\l"
	.string "todos estos tipos. Varios de sus\l"
	.string "POKÉMON saben GIGADRENADO, para el\l"
	.string "VOLADOR cuenta con un\l"
	.string "BICHO/ELÉCTRICO que tira rayos\l"
	.string "como nadie. Lo mismo aplica para\l"
	.string "el FUEGO, cuenta con un TIPO AGUA\l"
	.string "dual muy resistente. Te recomiendo\l"
	.string "estar fino en los 1vs1, como sea\l"
	.string "él quien derrote a uno de los\l"
	.string "tuyos primero, te será muy difícil\l"
	.string "recuperar esa ventaja.\l"
	.string "¡Ánimo!$"

AzaleaGym_Gym_Dude_Texto_2:
.string "¡No puedo creerlo!\n"
	.string "¡La última vez que vi perder así a\l"
	.string "CÉSAR, PUEBLO AZALEA y el ENCINAR\l"
	.string "no estaban ni separados por el\l"
	.string "puesto de seguridad!\l"
	.string "¡Íncreíble!$"



AzaleaGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 130
goto_if_gt AzaleaGym_Estatua_2
msgbox AzaleaGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

AzaleaGym_Estatua_2::
msgbox AzaleaGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


AzaleaGym_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de PUEBLO AZALEA: CÉSAR\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "(¡Está vacío!)$"

AzaleaGym_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de PUEBLO AZALEA: CÉSAR\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "{PLAYER}$"
