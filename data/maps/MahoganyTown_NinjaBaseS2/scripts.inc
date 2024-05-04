MahoganyTown_NinjaBaseS2_MapScripts::
	.byte 0

NinjaBaseS2_1::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_1:
.string "Tanto desde aquí como desde la\n"
.string "TORRE RADIO de TRIGAL y LAVANDA,\l"
.string "estudiaremos a fondo la influencia\l"
.string "de las ondas magnéticas en los\l"
.string "POKÉMON.$"



NinjaBaseS2_2::
end



NinjaBaseS2_3::
end



NinjaBaseS2_4::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_4, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_4:
.string "Me gustaría entrenar un STANTLER,\n"
.string "son tan bonitos y característicos\l"
.string "de JOHTO…\l"
.string "Aunque no sé si es un POKÉMON\l"
.string "adecuado para una ROCKET{PAUSE 5}…{PAUSE 5}$"



NinjaBaseS2_5::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_5, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_5:
.string "¿Has oído hablar de los POKÉMON\n"
.string "VARIOCOLOR?\l"
.string "¡Pues mejor!\l"
.string "¡No tienen nada de especial salvo\l"
.string "un color diferente al que\l"
.string "deberían!\l"
.string "¡No es más que una chorrada para hacer\l"
.string "perder el tiempo a los que quieren\l"
.string "fardar de su rareza!\l"
.string "¡Lo único importante en un POKÉMON\l"
.string "es su potencial genético!$"



NinjaBaseS2_6::
end



NinjaBaseS2_7::
end



NinjaBaseS2_8::
end



NinjaBaseS2_9::
end



NinjaBaseS2_10::
end



NinjaBaseS2_11::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_11, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_11:
.string "Nuestras estimaciones apuntan a\n"
.string "que las ondas de radio pueden\l"
.string "elevar en más de 100 STATS BASE el\l"
.string "poder de un POKÉMON convencional.$"



NinjaBaseS2_12::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_12, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_12:
.string "BASE RUTA 5, BASE CIUDAD VERDE,\n"
.string "BASE AZULONA, ALMACÉN ISLA INTA,\l"
.string "BASE CAOBA Y BASE RUTA 45.\l"
.string "¡Somos omnipresentes!$"



NinjaBaseS2_13::
end



NinjaBaseS2_14::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS2_Text_14, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS2_Text_14:
.string "¡Con esta ya son 6 las bases que\n"
.string "tenemos esparcidas entre KANTO,\l"
.string "JOHTO e ISLAS SETE!\l"
.string "¡TEAM ROCKET al poder!$"



NinjaBaseS2_EventScript_Ninja::
	trainerbattle_single TRAINER_TONY_4, NinjaBaseS2_Text_NinjaIntro, NinjaBaseS2_Text_NinjaDefeated
	msgbox NinjaBaseS2_Text_NinjaPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Ladron::
	trainerbattle_single TRAINER_COLE, NinjaBaseS2_Text_LadronIntro, NinjaBaseS2_Text_LadronDefeated
	msgbox NinjaBaseS2_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Ladron2::
	trainerbattle_single TRAINER_LARRY, NinjaBaseS2_Text_Ladron2Intro, NinjaBaseS2_Text_Ladron2Defeated
	msgbox NinjaBaseS2_Text_Ladron2PostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Ninja2::
	trainerbattle_single TRAINER_TONY_3, NinjaBaseS2_Text_Ninja2Intro, NinjaBaseS2_Text_Ninja2Defeated
	msgbox NinjaBaseS2_Text_Ninja2PostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS2_EventScript_Calvo::
	trainerbattle_single TRAINER_PAT, NinjaBaseS2_Text_CalvoIntro, NinjaBaseS2_Text_CalvoDefeated
	msgbox NinjaBaseS2_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end

NinjaBaseS2_Charizardita_X::
lock
faceplayer
checkitem ITEM_CHARIZARDITE_X
goto_if_eq VAR_RESULT, FALSE, NinjaBaseS2_Charizardita_X_2
msgbox NinjaBaseS2_Charizardita_X_Texto_3 MSGBOX_AUTOCLOSE
release
end

NinjaBaseS2_Charizardita_X_2::
msgbox NinjaBaseS2_Charizardita_X_Texto_1 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHARIZARDITE_X
msgbox NinjaBaseS2_Charizardita_X_Texto_2 MSGBOX_DEFAULT
waitfanfare
release
end

NinjaBaseS2_Charizardita_X_Texto_1:
.string "Como ya sabes, estamos trabajando\n"
	.string "en la creación de varias\l"
	.string "MEGAPIEDRAS artificiales para\l"
	.string "distintos POKÉMON. Con ello, hemos\l"
	.string "logrado crear una variante\l"
	.string "ofensiva física de CHARIZARD. Aquí\l"
	.string "tienes su MEGAPIEDRA.$"

NinjaBaseS2_Charizardita_X_Texto_3:
.string "La CHARIZARDITA-X cumple el sueño\n"
	.string "de muchos: ver a CHARIZARD\l"
	.string "convertido en dragón. No hay nada\l"
	.string "que los científicos del TEAM\l"
	.string "ROCKET no puedan lograr.$"

NinjaBaseS2_Charizardita_X_Texto_2:
.string "¡¡Obtuviste CHARIZARDITA-X de\n"
	.string "manos de CIENTÍFICO ROCKET!!$"

