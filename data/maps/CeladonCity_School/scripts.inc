CeladonCity_School_MapScripts::
	.byte 0

CeladonCitySchool_1::
end



CeladonCitySchoolDocumento_100::
msgbox CeladonCitySchoolDocumento_Text_100, MSGBOX_SIGN   
end

CeladonCitySchoolDocumento_Text_100:
.string "Es un informe sobre las MT.\p"
	.string "...\p"
	.string "Hay un total de 50 MT.\p"
	.string "Y siete MO, que pueden usarse\n"
	.string "una y otra vez.\p"
	.string "SILPH S.A.$"



CeladonCitySchoolDocumento_101::
msgbox CeladonCitySchoolDocumento_Text_101, MSGBOX_SIGN   
end

CeladonCitySchoolDocumento_Text_101:
	.string "La vida cambia a través de todos esos\n"
	.string "días en los que parece que todo sigue\l"
	.string "igual.$"

CeladonCity_Karateka::
lock
faceplayer
msgbox CeladonCity_Karateka_Texto_1 MSGBOX_NPC
release
end

CeladonCity_Karateka_Texto_1:
.string "Lo sé todo sobre los POKÉMON, también\n"
	.string "sé que vuestro LÍDER GIOVANNI usa a\l"
	.string "RHYHORN como POKÉMON insignia. ¡Qué\l"
	.string "debilucho!$"

CeladonCity_Eevee::
lock
faceplayer
playse 	SE_PIN
applymovement 1, CeladonCity_Eevee_Move_1
waitmovement 0x0
delay 10
applymovement 1, CeladonCity_Eevee_Move_2
applymovement OBJ_EVENT_ID_PLAYER, CeladonCity_Eevee_Move_3
waitmovement 0x0
msgbox CeladonCity_Eevee_Texto_1 MSGBOX_NPC
release
end

CeladonCity_Eevee_Move_1:
emote_exclamation_mark
step_end

CeladonCity_Eevee_Move_2:
walk_in_place_up
step_end

CeladonCity_Eevee_Move_3:
face_down
step_end

CeladonCity_Eevee_Texto_1:
.string "¿¡En serio, ROCKET!? Quita tus sucias\n"
	.string "manos de esa POKÉ BALL, un POKÉMON de\l"
	.string "la talla de EEVEE os queda muy grande a\l"
	.string "ladrones de tu calaña.$"
