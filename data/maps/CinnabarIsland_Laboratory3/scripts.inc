CinnabarIsland_Laboratory3_MapScripts::
	.byte 0

CinnabarIslandLaboratory3_1::
lock     
faceplayer     
msgbox CinnabarIsland_Laboratory3_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Laboratory3_Text_1:
.string "Aunque tuvieras al mismísimo\n"
.string "ARTICUNO y solo quisieras un\l"
.string "KOFFING a cambio, los POKÉMON que\l"
.string "tenéis están manchados por la\l"
.string "vileza de vuestras acciones.$"



CinnabarIslandLaboratory3_2::
lock
faceplayer
msgbox CinnabarIslandLaboratory3_2_Texto_1 MSGBOX_DEFAULT
delay 20
msgbox CinnabarIslandLaboratory3_2_Texto_2 MSGBOX_DEFAULT
delay 20
applymovement 2, CinnabarIslandLaboratory3_2_Move_1
waitmovement 0x0
playse SE_PIN
msgbox CinnabarIslandLaboratory3_2_Texto_3 MSGBOX_DEFAULT
msgbox CinnabarIslandLaboratory3_2_Texto_4 MSGBOX_DEFAULT
release
end

CinnabarIslandLaboratory3_2_Move_1:
emote_exclamation_mark
step_end

CinnabarIslandLaboratory3_2_Texto_4:
.string "Oh{PAUSE 5}…{PAUSE 5}$"

CinnabarIslandLaboratory3_2_Texto_3:
.string "¿Tienes a OMANYTE, KABUTO y\n"
	.string "AERODACTYL? ¿Y no necesitas nuestra\l"
	.string "estúpida máquina para obtener\l"
	.string "directamente al POKÉMON sin tener que\l"
	.string "pasar por nuestro tedioso proceso de\l"
	.string "resurrección?$"

CinnabarIslandLaboratory3_2_Texto_2:
.string "… {PAUSE 5}…{PAUSE 5}$"

CinnabarIslandLaboratory3_2_Texto_1:
.string "Jamás pondremos nuestra tecnología de\n"
	.string "resurrección de FÓSILES al servicio del\l"
	.string "TEAM ROCKET. Tendrás que conformarte\l"
	.string "con verlos extintos.$"
