MooFarm_MapScripts::
	.byte 0

MooFarm1::
end



MooFarm2::
end



MooFarm3::
end



MooFarm4::
end



MooFarm5::
lock     
faceplayer     
msgbox MooFarm_Text_5, MSGBOX_DEFAULT
release     
end

MooFarm_Text_5:
.string "Nuestros TAUROS tienen fama de ser\n"
.string "los más bravos de JOHTO, ¡lo\l"
.string "necesitan para poder estar a la\l"
.string "altura de los MILTANK que aquí\l"
.string "criamos!$"



MooFarm6::
end



MooFarm7::
lock     
faceplayer     
msgbox MooFarm_Text_7, MSGBOX_DEFAULT
release     
end

MooFarm_Text_7:
.string "De aquí sale la mayor parte de\n"
.string "LECHE MU-MU que venden en JOHTO y\l"
.string "KANTO. Debes saber que es el mejor\l"
.string "recuperador de PS en relación\l"
.string "calidad-precio, pero si nos\l"
.string "compras directamente a nosotros,\l"
.string "¡podrás obtener LECHE MU-MU aún\l"
.string "más barata!$"



MooFarm8::
end


MooFarm_Combate_Scizorita::
lock
faceplayer
checkitem ITEM_SCIZORITE
goto_if_eq VAR_RESULT, FALSE, MooFarm_Combate_Scizorita_2
msgbox MooFarm_Combate_Scizorita_Texto_3 MSGBOX_AUTOCLOSE
release
end

MooFarm_Combate_Scizorita_2::
msgbox MooFarm_Combate_Scizorita_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, MooFarm_Combate_Scizorita_Move_1
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MooFarm_Combate_Scizorita_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox MooFarm_Combate_Scizorita_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GRANJERO_1, MooFarm_Combate_Scizorita_Texto_5
applymovement 2, MooFarm_Combate_Scizorita_Move_2
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox MooFarm_Combate_Scizorita_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GRANJERO_2, MooFarm_Combate_Scizorita_Texto_7
playse SE_PIN
applymovement 8, MooFarm_Combate_Scizorita_Move_3
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, MooFarm_Combate_Scizorita_Move_4
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_9 MSGBOX_AUTOCLOSE
applymovement 8, MooFarm_Combate_Scizorita_Move_1
waitmovement 0x0
msgbox MooFarm_Combate_Scizorita_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SCIZORITE
msgbox MooFarm_Combate_Scizorita_Texto_10.1 MSGBOX_DEFAULT
waitfanfare
msgbox MooFarm_Combate_Scizorita_Texto_11 MSGBOX_AUTOCLOSE
release
end

MooFarm_Combate_Scizorita_No::
msgbox MooFarm_Combate_Scizorita_Texto_12 MSGBOX_AUTOCLOSE
release
end

MooFarm_Combate_Scizorita_Texto_10.1:
.string "¡¡Obtuviste SCIZORITA de\n"
	.string "manos de GRANJEROS!!$"

MooFarm_Combate_Scizorita_Move_1:
walk_in_place_right
face_player
step_end

MooFarm_Combate_Scizorita_Move_2:
face_player
step_end

MooFarm_Combate_Scizorita_Move_3:
emote_exclamation_mark
step_end

MooFarm_Combate_Scizorita_Move_4:
walk_in_place_left
face_player
step_end

MooFarm_Combate_Scizorita_Texto_1:
.string "Aquí nos encargamos de los TAUROS\n"
	.string "y MILTANK que se ponen enfermos.\l"
	.string "Tenemos a una docena que está ya\l"
	.string "casi recuperada, lo único que les\l"
	.string "hace falta es volver a estirar las\l"
	.string "patas en un buen combate.$"

MooFarm_Combate_Scizorita_Texto_2:
.string "¿Nos harías el favor de volver a\n"
	.string "poner en forma a nuestros POKÉMON?$"

MooFarm_Combate_Scizorita_Texto_3:
.string "¡Recuerda que puedes comprar\n"
	.string "LECHE MU-MU tirada de precio en la\l"
	.string "caseta de al lado!$"

MooFarm_Combate_Scizorita_Texto_4:
.string "¡Muy bien!\n"
	.string "¡Espero que puedas aguantar las\l"
	.string "embestidas!$"

MooFarm_Combate_Scizorita_Texto_5:
.string "Frenado en seco.$"

MooFarm_Combate_Scizorita_Texto_6:
.string "Ahora me toca el turno a mi,\n"
	.string "MILTANK no embiste con tanta\l"
	.string "fuerza, ¡pero te costará más\l"
	.string "tumbarlo!$"

MooFarm_Combate_Scizorita_Texto_7:
.string "¡Menudo entrenamiento!$"

MooFarm_Combate_Scizorita_Texto_8:
.string "¡Eh!\n"
	.string "¡Tampoco te pases!\l"
	.string "¡Queríamos que recuperaran la\l"
	.string "forma poco a poco, no que fueran\l"
	.string "directos a la enfermería de nuevo!$"

MooFarm_Combate_Scizorita_Texto_9:
.string "No le hagas caso, era broma. Nos\n"
	.string "has impresionado, los entrenadores\l"
	.string "suelen huir despavoridos con uno\l"
	.string "solo de nuestros TAUROS, pero tú{PAUSE 25}…{PAUSE 25}\l"
	.string "¡Has podido con una docena de\l"
	.string "TAUROS y MILTANK!$"

MooFarm_Combate_Scizorita_Texto_10:
.string "Tu hazaña merece ser premiada, uno\n"
	.string "de nuestros MILTANK se perdió por\l"
	.string "el prado y regresó con esto. No\l"
	.string "sabemos qué es, pero tiene pinta de\l"
	.string "tener mucho valor.$"

MooFarm_Combate_Scizorita_Texto_11:
.string "Seguro que tú le das un buen uso.\n"
	.string "¡Recuerda que puedes comprar LECHE\l"
	.string "MU-MU tirada de precio en la\l"
	.string "caseta de al lado!$"

MooFarm_Combate_Scizorita_Texto_12:
.string "Entiendo, las embestidas de un\n"
	.string "TAUROS dan mucho respeto.$"

Johto_MuMu_Mercado_EventScript_Clerk::
lock
showmoneybox 0, 0
msgbox Johto_MuMu_Mercado_EventScript_Clerk_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Johto_MuMu_Mercado_EventScript_Clerk_No
delay 10
playse SE_SHOP
removemoney 5000 0
updatemoneybox
additem ITEM_MOOMOO_MILK, 12
delay 40
hidemoneybox
delay 40
msgbox Johto_MuMu_Mercado_EventScript_Clerk_Texto_2 MSGBOX_AUTOCLOSE
release
end

Johto_MuMu_Mercado_EventScript_Clerk_No::
hidemoneybox
msgbox Johto_MuMu_Mercado_EventScript_Clerk_Texto_2 MSGBOX_AUTOCLOSE
release
end

Johto_MuMu_Mercado_EventScript_Clerk_Texto_1:
.string "Vendemos una docena de LECHE MU-MU\n"
	.string "por 5000¥, ahorras 1000¥\l"
	.string "respecto a cualquier otro lugar.\l"
	.string "¿Compras?$"

Johto_MuMu_Mercado_EventScript_Clerk_Texto_2:
.string "Vuelve cuando quieras.$"

