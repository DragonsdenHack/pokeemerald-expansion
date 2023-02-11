ViridianCity_MapScripts::
	.byte 0

ViridianCity2::
end


ViridianCity3::
lock     
faceplayer     
msgbox ViridianCity_Text3, MSGBOX_DEFAULT
release     
end


ViridianCity_Text3:
.string "Nadie sabe la identidad del LÍDER\n"
.string "DE GIMNASIO de esta ciudad, pero\l"
.string "espero que vuelva para daros una\l"
.string "buena lección.$"


ViridianCity4::
end


ViridianCity5::
lock     
faceplayer     
msgbox ViridianCity_Text5, MSGBOX_DEFAULT
release     
end

ViridianCity_Text5:
.string "¿Cómo?\n"
.string "¿Enseñarte a atrapar POKÉMON?\l"
.string "¡Para así aprender a robarlos más\l"
.string "rápido, eh!\l"
.string "¡Jamás, ROCKET!$"


ViridianCity6::
lock     
faceplayer     
msgbox ViridianCity_Text6, MSGBOX_DEFAULT
release     
end

ViridianCity_Text6:
.string "Esas POKE BALL de tu cinturón…\n"
.string "¡Seguro que las has robado!$"


ViridianCity9::
lock     
faceplayer     
msgbox ViridianCity_Text9, MSGBOX_DEFAULT
release     
end

ViridianCity_Text9:
.string "¡Espero que nuestro LÍDER\n"
.string "misterioso vuelva pronto y os eche\l"
.string "a patadas de la ciudad!$"


ViridianCityDocumento_100::
msgbox ViridianCityDocumento_Text_100, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_100:
.string "Consejos de entrenador:\n"
	.string "La cantidad de veces que un\l"
	.string "Pokémon puede ejecutar un\l"
	.string "movimiento está limitada por los\l"
	.string "PPs, para restaurarlos acude al\l"
	.string "Centro Pokémon.$"



ViridianCityDocumento_101::
msgbox ViridianCityDocumento_Text_101, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_101:
	.string "CIUDAD VERDE\n"
	.string "El eterno paraíso verde.$"



ViridianCityDocumento_102::
msgbox ViridianCityDocumento_Text_102, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_102:
	.string "PISTAS ENTRENADOR\p"
	.string "¡Atrapa los POKéMON y amplía\n"
	.string "tu colección!\p"
	.string "¡Cuantos más tengas, más fácil\n"
	.string "te será luchar!$"



ViridianCityDocumento_103::
msgbox ViridianCityDocumento_Text_103, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_103:
	.string "Gimnasio de CIUDAD VERDE$"



ViridianCity_7::
lock
faceplayer
msgbox ViridianCity_7_Text_7YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViridianCity_7No
msgbox ViridianCity_7_Text_7Yes, MSGBOX_DEFAULT
release
end



ViridianCity_7_Text_7YesNo:
    .string "¿Te gustaría conocer acerca de los\n"
	.string "dos Pokémon insecto?$"


ViridianCity_7No::
msgbox ViridianCity_7_Text_7No, MSGBOX_DEFAULT
release
end


ViridianCity_7_Text_7Yes:
    .string "CATERPIE no tiene veneno, pero\n"
	.string "WEEDLE si.\l"
	.string "Pon cuidado a que tus Pokémon no\l"
	.string "sean envenenados por su Picotazo\l"
	.string "Venenoso.$"



ViridianCity_7_Text_7No:
	.string "Oh, vale.$"

ViridianCity_Escena_5::
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Escena_5_Move_1
warpsilent MAP_ROCKET_HIDEOUT_4F, 16, 0
waitmovement 0x0
release
end

ViridianCity_Escena_5_Move_1:
walk_in_place_down
step_end
