CeladonCity_House1_2F_MapScripts::
	.byte 0

CeladonMansion2F_1::
end



CeladonMansion2FDocumento_100::
msgbox CeladonMansion2FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonMansion2FDocumento_Text_100:
.string "Sala de reuniones de GAME FREAK$"

CeladonCity_House1_2F_Secundaria_Magikarp::
lock
faceplayer
compare VAR_UNUSED_0x409D, 1
goto_if_gt CeladonCity_House1_2F_Secundaria_Magikarp_4
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409D, 1
goto_if_eq CeladonCity_House1_2F_Secundaria_Magikarp_2
release
end

CeladonCity_House1_2F_Secundaria_Magikarp_2::
delay 20
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CeladonCity_House1_2F_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_4 MSGBOX_AUTOCLOSE
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_5 MSGBOX_AUTOCLOSE
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CeladonCity_House1_2F_Secundaria_Magikarp_3
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_7 MSGBOX_AUTOCLOSE
release
end


CeladonCity_House1_2F_Secundaria_Magikarp_3::
playse 495
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_DOMADOR, CeladonCity_House1_2F_Secundaria_Magikarp_Texto_9
delay 15
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CeladonCity_House1_2F_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 2
release
end

CeladonCity_House1_2F_Secundaria_Magikarp_4::
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
release
end

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_1:
.string "¿Tienes algún problema conmigo\n"
	.string "ROCKET?\l"
	.string "Alguien como tú jamás podrá\l"
	.string "permitirse estar en una MANSIÓN\l"
	.string "como esta.\l"
	.string "¡Largo de aquí antes de que pierda\l"
	.string "la paciencia y aplaste a tus\l"
	.string "miserables POKÉMON!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_2:
.string "Tienes mi palabra, ese GURÚ y esa\n"
	.string "CAÑA VIEJA ya no existen para mí.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_3:
.string "...\n"
	.string "...$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_4:
.string "¿¡Te envía el GURÚ PESCADOR de\n"
	.string "CARMÍN para ajustar cuentas por mi\l"
	.string "difamación sobre su CAÑA VIEJA?!\l"
	.string "¿Qué clase de broma es esta?$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_5:
.string "Alguien como tú no tiene nada que\n"
	.string "hacer contra mis POKÉMON hechos\l"
	.string "para dar espectáculo, no eres\l"
	.string "nadie siquiera dentro de esa\l"
	.string "organización.\l"
	.string "¿Qué vas a hacer?\l"
	.string "¿Usar MORDISCO con tu ZUBAT de\l"
	.string "papel que de un solo golpe caerá a\l"
	.string "poco que ordene a mi SANDSLASH\l"
	.string "usar CUCHILLADA?$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_6:
.string "Todavía estás a tiempo de\n"
	.string "rectificar, tienes suerte de que\l"
	.string "hoy he tenido un buen día y estoy\l"
	.string "dispuesto a hacer la vista gorda y\l"
	.string "olvidar tu insolencia.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_7:
.string "Parece que aún quedan ROCKETS con\n"
	.string "cerebro, desaparece antes de que\l"
	.string "cambie de opinión.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_8:
.string "Has acabado con mi paciencia, te\n"
	.string "devolveré directo al lugar que\l"
	.string "te pertence.\l"
	.string "¡Las cloacas de CIUDAD AZULONA!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_9:
.string "¡SANDSLASH, ARBOK!\n"
	.string "¡SEGUID PELEANDO!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_10:
.string "Grrrrr...\n"
	.string "No contaba con que un ROCKET\l"
	.string "pudiera ser tan fuerte, ese GURÚ\l"
	.string "ha tenido suerte de dar contigo.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_11:
.string "¿¡Cómo?!\n"
	.string "¡Eres alguien importante dentro de\l"
	.string "la organización!\l"
	.string "¿¡Y si no detengo mis críticas\l"
	.string "hacia ese GURÚ harás uso de todo\l"
	.string "tu poder e influencia para\l"
	.string "arruinarme el negocio?!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_12:
.string "¡Está bien, tú ganas!\n"
	.string "¡Dejaré de hablar de esa estúpida\l"
	.string "CAÑA VIEJA que solo captura\l"
	.string "MAGIKARPS!\l"
	.string "¡Te lo prometo!\l"
	.string "¡Pero no os metáis con mi negocio,\l"
	.string "eso nunca!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Move_1:
emote_exclamation_mark
step_end
