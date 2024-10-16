Goldenrod_RadioTowerP8_MapScripts::
	.byte 0

Goldenrod_RadioTowerP8_NPC2::
lock
msgbox Goldenrod_RadioTowerP8_NPC2_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC2_Texto_1:
	.string "La gente solía llevar ropa normal entre\n"
	.string "semana y atuendo formal los domingos.\l"
	.string "Hoy sucede exactamente lo contrario.$"

Goldenrod_RadioTowerP8_NPC3::
lock
msgbox Goldenrod_RadioTowerP8_NPC3_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC3_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC3_Texto_1:
	.string "Reté a esa chica pelirroja; me\n"
	.string "sorprendió ver que alguien tan joven\l"
	.string "formaba parte de los de arriba.$"

Goldenrod_RadioTowerP8_NPC3_Texto_2:
	.string "Al pelear con ella lo comprendí, se me\n"
	.string "han quitado las ganas de retar a nadie\l"
	.string "más…$"
