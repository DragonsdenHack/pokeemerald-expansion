Route51_MapScripts::
	.byte 0

Route51_1::
end



Route51_2::
lock     
faceplayer     
msgbox Route51_Text_2, MSGBOX_DEFAULT
release     
end

Route51_Text_2:
.string "Siento que ya estuve antes en este\n"
.string "lugar…en un sueño…$"



Route51_3::
end



Route51_4::
end



Route51_EventScript_Pescador::
	trainerbattle_single TRAINER_BRAWLY_2, Route51_Text_PescadorIntro, Route51_Text_PescadorDefeated
	msgbox Route51_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route51_EventScript_Pescador2::
	trainerbattle_single TRAINER_BRAWLY_3, Route51_Text_Pescador2Intro, Route51_Text_Pescador2Defeated
	msgbox Route51_Text_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end

Route51_Combate_Chica::
lock
faceplayer
goto_if_set FLAG_NUEVA_863, Route51_Combate_Chica_2
msgbox Route51_Combate_Chica_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route51_Combate_Chica_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51_Combate_Chica_No
msgbox Route51_Combate_Chica_Texto_4 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51_Combate_Chica_No_2
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Route51_Combate_Chica_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, Route51_Combate_Chica_Texto_7
msgbox Route51_Combate_Chica_Texto_8 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHOICE_BAND
msgbox Route51_Combate_Chica_Texto_8.1 MSGBOX_DEFAULT
waitfanfare
msgbox Route51_Combate_Chica_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_863
release
end

Route51_Combate_Chica_Texto_8.1:
.string "¡Obtuviste STARMIETITA de manos\n"
	.string "de CHICA!$"

Route51_Combate_Chica_2::
msgbox Route51_Combate_Chica_Texto_3 MSGBOX_AUTOCLOSE
release
end

Route51_Combate_Chica_No::
msgbox Route51_Combate_Chica_Texto_5 MSGBOX_AUTOCLOSE
release
end

Route51_Combate_Chica_No_2::
msgbox Route51_Combate_Chica_Texto_10 MSGBOX_AUTOCLOSE
release
end


Route51_Combate_Chica_Texto_1:
.string "Cada POKÉMON guarda dentro de sí\n"
	.string "un potencial infinito, cuando\l"
	.string "crees haber captado ese potencial,\l"
	.string "la realidad te golpea\l"
	.string "instantáneamente, haciéndote\l"
	.string "olvidar ese pequeño chasquido de\l"
	.string "pleno potencial, y todos vuelven a\l"
	.string "estar sujetos a las leyes físicas.$"

Route51_Combate_Chica_Texto_2:
.string "Dime, ¿crees que un POKÉMON fuerte\n"
	.string "puede provenir de cualquier lugar\l"
	.string "o especie?$"

Route51_Combate_Chica_Texto_3:
.string "¡Oh, no!\n"
	.string "¿Aplicar las mismas reglas que\l"
	.string "viste en mis POKÉMON con\l"
	.string "LEGENDARIOS o POKÉMON con mayor\l"
	.string "poder BASE?\l"
	.string "¡Eso no es posible!\l"
	.string "Parten de una base diferente,\l"
	.string "¡pero el proceso también es\l"
	.string "diferente, y si lo haces bien,\l"
	.string "todos acaban llegando a un punto\l"
	.string "similar!$"

Route51_Combate_Chica_Texto_4:
.string "¿Y estarías dispuesto a llevar esa\n"
	.string "creencia al terreno de un combate?$"

Route51_Combate_Chica_Texto_5:
.string "En ese caso, nada puedo enseñarte,\n"
	.string "que tengas un buen día.$"

Route51_Combate_Chica_Texto_6:
.string "¡Genial!\n"
	.string "En honor a este lugar...\l"
	.string "¡Cruzaremos la sinuosa frontera\l"
	.string "entre lo sagrado y lo profano!$"

Route51_Combate_Chica_Texto_7:
.string "Sí...\n"
	.string "Eso es...$"

Route51_Combate_Chica_Texto_8:
.string "Así es, no existe ingrediente\n"
	.string "secreto, todo lo que necesitas ya\l"
	.string "lo tienes, eres alguien que conoce\l"
	.string "cúal es el camino a seguir, quiero\l"
	.string "que tengas esto.$"

Route51_Combate_Chica_Texto_9:
.string "Lo encontré en uno de mis largos\n"
	.string "paseos por la playa, seguro que a\l"
	.string "ti te sirve más que a mí.$"

Route51_Combate_Chica_Texto_10:
.string "Lo entiendo, traspasar los límites\n"
	.string "de la realidad no es para todos.$"
