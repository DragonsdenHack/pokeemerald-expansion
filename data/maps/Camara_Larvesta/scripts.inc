Camara_Larvesta_MapScripts::
	.byte 0


Camara_Larvesta_Ball::
playfanfare MUS_OBTAIN_TMHM
msgbox Camara_Larvesta_Ball_Texto_3, MSGBOX_DEFAULT
givemon SPECIES_LARVESTA, 50, ITEM_NONE
waitfanfare
setflag FLAG_NUEVA_855
removeobject 1
release
end

Camara_Larvesta_Ball_Texto_3:
.string "{PLAYER} obtained a LARVESTA!$"
