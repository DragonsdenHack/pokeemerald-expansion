MtSilver_House_MapScripts::
	.byte 0

MtSilverHouse1::
end



MtSilverHouseDocumento_100::
msgbox MtSilverHouseDocumento_Text_100, MSGBOX_SIGN   
end

MtSilverHouseDocumento_Text_100:
.string "LIGA POKÉMON DE JOHTO, 1978.\p"
	.string "EQUIPO DEL CAMPEÓN:\p"
	.string "- CROBAT\n"
	.string "- HERACROSS\l"
	.string "- TAUROS\l"
	.string "- MAMOSWINE\l"
	.string "- URSALUNA\l"
	.string "- DARMANITAN$"



MtSilverHouse_EventScript_ReceiveDarumaka::
    lock
    faceplayer
	checkmoncatch SPECIES_DARUMAKA
	goto_if_eq VAR_RESULT, FALSE, MtSilverHouse_EventScript_TakeDarumaka 
	msgbox MtSilverHouse_Text_1, MSGBOX_DEFAULT
	release
	end



MtSilverHouse_EventScript_TakeDarumaka::
    msgbox MtSilverHouse_Text_TakeDarumaka MSGBOX_DEFAULT
	msgbox MtSilverHouse_Text_TakeDarumaka2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox MtSilverHouse_Text_MensajeDarumaka, MSGBOX_DEFAULT
	givemon SPECIES_DARUMAKA, 15, ITEM_FIRE_GEM
	waitfanfare  
	release
	end 



MtSilverHouse_Text_TakeDarumaka:
    .string "Fui CAMPEÓN gracias al enorme\n"
	.string "vigor y ofensiva total de mis\l"
	.string "POKÉMON, a atacar sin miedo a\l"
	.string "recibir daño.$"



MtSilverHouse_Text_TakeDarumaka2:
	.string "De entre todos mis POKÉMON, había\n"
	.string "uno que llevaba al extremo como\l"
	.string "ningún otro ese modo de combatir,\l"
	.string "hace poco tuve varias crías de él,\l"
	.string "¿te gustaría quedarte con una?\l"
	.string "¡Toma!$"



MtSilverHouse_Text_MensajeDarumaka:
.string "¡OBTUVISTE UN DARUMAKA AL NV.25!$"


MtSilverHouse_Text_1:
    .string "El ENVITE ÍGNEO de un DARMANITAN\n"
	.string "bien entrenado es el movimiento\l"
	.string "más devastador que conozco, el\l"
	.string "poder de embestida de TAUROS no es\l"
	.string "más que una sutil caricia al lado.$"
