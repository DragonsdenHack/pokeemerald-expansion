MtMoon_3F_MapScripts::
	.byte 0

MtMoon3F_2::
end



MtMoon3F_3::
end



MtMoon3F_4::
end



MtMoon3F_5::
lock     
faceplayer     
msgbox MtMoon3F_Text_5, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_5:
.string "¡Nada por aquí camarada!$"



MtMoon3F_6::
lock     
faceplayer     
msgbox MtMoon3F_Text_6, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_6:
.string "ANDRA: Parece que aquí no hay nada\n"
.string "importante, tal vez en las\l"
.string "escaleras que llevan a otra\l"
.string "entrada…$"



MtMoon3F_7::
end



MtMoon3F_9::
end



MtMoon3F_10::
end



MtMoon3F_11::
end

MtMoon_3F_Azul::
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
release
end

MtMoon_3F_Azul_Text_1:
.string "????: Vaya, parece que este\n"
	.string "tampoco es un ÁMBAR VIEJO, voy a\l"
	.string "tener que conformarme solo con los\l"
	.string "FÓSILES DOMO Y HELIX. Qué pena,\l"
	.string "AERODACTYL no sería mal POKÉMON\l"
	.string "para mi equipo.$"

MtMoon_3F_Azul_Text_2:
.string "¿Otro ROCKET más?\n"
	.string "Parece que salís de las\l"
	.string "alcantarillas, no quiero perder\l"
	.string "más el tiempo derrotándote a ti\l"
	.string "también. Con vuestro nivel no\l"
	.string "tengo ni para empezar.$"

MtMoon_3F_Azul_Text_3:
.string "Hoy estás de suerte, ya tengo un\n"
	.string "ejemplar del FÓSIL DOMO que ves\l"
	.string "aquí y no voy a ocupar más espacio\l"
	.string "en mi mochila con otro igual.\l"
	.string "Cógelo si así lo deseas, además,\l"
	.string "quién quiere un OMASTAR o un\l"
	.string "KABUTOPS pudiendo tener un\l"
	.string "BLASTOISE.$"

MtMoon_3F_Azul_Text_4:
.string "¿Cómo?\n"
	.string "¿Soy un arrogante y peco de exceso\l"
	.string "de confianza por dejar viva a la\l"
	.string "competencia?$"

MtMoon_3F_Azul_Text_5:
.string "A mí no me importa el dinero que\n"
	.string "puedas hacer con esos FÓSILES\l"
	.string "ROCKET, lo único importante es\l"
	.string "contar con un equipo fuerte,\l"
	.string "balanceado y poderoso. Eso no\l"
	.string "tiene precio.$"

MtMoon_3F_Azul_move1:
walk_in_place_right
step_end

MtMoon_3F_Azul_move2:
face_left
emote_exclamation_mark
step_end

MtMoon_3F_Azul_move3:
walk_in_place_right
walk_in_place_left
step_end

MtMoon_3F_Azul_move4:
walk_left
walk_down
walk_down
walk_down
step_end

MtMoon_3F_Azul_move5:
emote_exclamation_mark
walk_in_place_down
face_up
step_end

MtMoon_3F_Azul_move6:
face_down
step_end

MtMoon_3F_Azul_move7:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end
