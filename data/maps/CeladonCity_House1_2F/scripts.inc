CeladonCity_House1_2F_MapScripts::
	.byte 0

CeladonMansion2F_1::
end



CeladonMansion2FDocumento_100::
msgbox CeladonMansion2FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonMansion2FDocumento_Text_100:
.string "GAME FREAK Meeting Room$"

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
	.string "Gotta problem, ROCKET? Someone like\n"
	.string "you won't ever be able to afford a\l"
	.string "mansion like this. Get out of here\l"
	.string "before I lose my patience and crush\l"
	.string "your miserable POKÉMON!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_2:
	.string "You got my word, that FISHERMAN and his\n"
	.string "OLD ROD don't longer exist for me.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_3:
.string "...\n"
	.string "...$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_4:
	.string "Does the FISHERMAN GURU of VERMILION\n"
	.string "CITY send you to settle scores for my\l"
	.string "defamation about his OLD ROD? What\l"
	.string "kind of joke is this?$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_5:
	.string "Someone like you can't do anything\n"
	.string "against my POKÉMON, raised for giving a\l"
	.string "good show. You're no one even in this\l"
	.string "organization. What are you gonna do?\l"
	.string "Use BITE with your paper ZUBAT that\l"
	.string "will be ONE-SHOT as soon as I order my\l"
	.string "SANDSLASH crush you with his SLASH?$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_6:
	.string "You can still change your mind, you're\n"
	.string "lucky that I've had a good day and I'll be\l"
	.string "willingly to forget your insolence.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_7:
	.string "It seems there are still ROCKETS with\n"
	.string "brains, vanish here before I change my\l"
	.string "mind.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_8:
	.string "You've tried my tolerance, I will send\n"
	.string "you straight back to where you belong.\l"
	.string "The sewers of CELADON CITY!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_9:
.string "SANDSLASH, ARBOK!\n"
	.string "KEEP FIGHTING!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_10:
	.string "Grrrrr... I didn't expect a ROCKET GRUNT\n"
	.string "could be so strong, that FISHERMAN has\l"
	.string "been lucky to come across you.$"

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
