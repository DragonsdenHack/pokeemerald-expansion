VermilionCity_Gym_MapScripts::
	.byte 0

VermilionCityGym1::
end



VermilionCityGym2::
end



VermilionCityGym3::
end



VermilionCityGym4::
end



VermilionCityGym5::
end



VermilionCityGym_EventScript_Chico::
	trainerbattle_single TRAINER_WINSTON_5, VermilionCityGym_Text_ChicoIntro, VermilionCityGym_Text_ChicoDefeated
	msgbox VermilionCityGym_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VermilionCityGym_EventScript_Chico2::
	trainerbattle_single TRAINER_ETHAN_4, VermilionCityGym_Text_Chico2Intro, VermilionCityGym_Text_Chico2Defeated
	msgbox VermilionCityGym_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



VermilionCityGym_EventScript_Chico3::
	trainerbattle_single TRAINER_LAO_5, VermilionCityGym_Text_Chico3Intro, VermilionCityGym_Text_Chico3Defeated
	msgbox VermilionCityGym_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4
waitmovement 0x0
release
end

VermilionCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox VermilionCityGym_NoPass_Text_4, MSGBOX_AUTOCLOSE
setvar VAR_ROUTE108_STATE, 2
release
end

VermilionCityGym_NoPass_Text_4:
.string "No es posible... Con el sello del\n"
	.string "mismísimo LANCE... Discúlpeme, ha sido\l"
	.string "un pequeño malentendido. Espero que\l"
	.string "disfrute de nuestro GIMNASIO.$"

CeruleanCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox CeruleanCityGym_Can_Pass_Texto_1 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE109_STATE, 2
release
end

CeruleanCityGym_Can_Pass_Texto_1:
.string "¡Es imposible! ... ... LICENCIA forjada en\n"
	.string "los históricos despachos del CG de la\l"
	.string "LIGA POKÉMON de KANTO. ... ... ¡Disúlpeme\l"
	.string "señor! ¡Puede uster entrar a nuestro\l"
	.string "humilde GIMNASIO!$"


CeruleanCityGym_NoPass_Der::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4.1
waitmovement 0x0
release
end

CeruleanCityGym_NoPass_Izq::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4.2
waitmovement 0x0
release
end

PewterCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 1, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 1, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4
waitmovement 0x0
release
end

PewterCityGym_CanPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 1, VermilionCityGym_NoPass_move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox PewterCityGym_CanPass_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox PewterCityGym_CanPass_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE111_STATE, 2
release
end

PewterCityGym_CanPass_Texto_1:
.string "Este lugar no es para ladrones y\n"
	.string "mendigos como vosotros ROCKET. Vuelve\l"
	.string "de la cloaca de dónde procedes si no\l"
	.string "quieres...$"

PewterCityGym_CanPass_Texto_2:
.string "...$"

PewterCityGym_CanPass_Texto_3:
.string "¿Una LICENCIA ENTRENADOR? ... ...\n"
	.string "Firmada y aprobada por el mismísimo\l"
	.string "MINISTERIO DE LA LIGA POKÉMON...\l"
	.string "Discúlpeme señor, con todo esto del\l"
	.string "fracaso en SILPH ya nadie distingue\l"
	.string "quién se mofa de los ROCKET y quién es\l"
	.string "un ROCKET real. Pase.$"

CeladonCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 11, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox CeladonCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
applymovement 11, CeladonCityGym_NoPass_Move_1
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4
waitmovement 0x0
release
end

CeladonCityGym_NoPass_Move_1:
face_right
step_end

CeladonCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 11, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox CeladonCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 11, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_4, MSGBOX_AUTOCLOSE
applymovement 11, CeladonCityGym_NoPass_Move_1
waitmovement 0x0
setvar VAR_ROUTE107_STATE, 2
release
end

CeladonCityGym_NoPass_Texto_1:
.string "¡Oh, no!$"

CeladonCityGym_NoPass_Texto_2:
.string "¡Los del TEAM ROCKET no podéis\n"
	.string "entrar aquí, nuestra LÍDER jamás\l"
	.string "peleará contigo!$"

CeladonCityGym_NoPass_Texto_3:
.string "¡Si das un paso más llamaré a la\n"
	.string "POLICÍA!\l"
	.string "¡No vas a contaminar este lugar\l"
	.string "con tu presencia!$"

CeladonCityGym_NoPass_Texto_4:
.string "¿¡Esa es una licencia de\n"
	.string "entrenador real?!\l"
	.string "¡Oh perdóname, pensaba que eras un\l"
	.string "miembro del TEAM ROCKET, no sabía\l"
	.string "que se vendieran uniformes ROCKET\l"
	.string "a modo de cosplay, pasa por favor!$"



VermilionCityGym_NoPass_Text_1:
    .string "¡De modo que tenemos otro\n"
	.string "aspirante más al título eh!\l"
	.string "Espera...$"

VermilionCityGym_NoPass_Text_2:
   .string "¡Eres un ROCKET!\n"
	.string "¡Tienes la poca verguenza de\l"
	.string "entrar como si nada a un lugar\l"
	.string "oficial y homologado por la LIGA\l"
	.string "POKÉMON!$"

VermilionCityGym_NoPass_Text_3:
.string "¡Largo de aquí antes de que llame\n"
	.string "a las autoridades, ningún LÍDER DE\l"
	.string "GIMNASIO va a perder el tiempo con\l"
	.string "un mísero ROCKET!$"


VermilionCityGym_NoPass_move_1:
walk_in_place_up
step_end

VermilionCityGym_NoPass_move_2:
walk_in_place_down
step_end

VermilionCityGym_NoPass_move_3:
emote_exclamation_mark
step_end

VermilionCityGym_NoPass_move_4:
walk_down
step_end

VermilionCityGym_NoPass_move_4.1:
walk_left
step_end

VermilionCityGym_NoPass_move_4.2:
walk_right
step_end

FuchsiaCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, VermilionCityGym_NoPass_move_3
msgbox FuchsiaCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox FuchsiaCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4.1
waitmovement 0x0
release
end

FuchsiaCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, VermilionCityGym_NoPass_move_3
msgbox FuchsiaCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox FuchsiaCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox FuchsiaCityGym_Can_Pass_Texto_1, MSGBOX_AUTOCLOSE
setvar VAR_ROUTE106_STATE, 2
release
end

FuchsiaCityGym_Can_Pass_Texto_1:
.string "¡Espera! ... ... -La DELEGACIÓN de KANTO,\n"
	.string "junto con LANCE y toda la ÉLITE 4,\l"
	.string "autorizan a este ENTRENADOR a ser\l"
	.string "partícipe del CAMPEONATO de la LIGA\l"
	.string "POKÉMON.- ... ... Mil disculpas señor,\l"
	.string "KOGA estará deseoso de combatir con\l"
	.string "usted.$"

FuchsiaCityGym_NoPass_Texto_1:
.string "La lacra social no tiene permitida la\n"
	.string "entrada a GIMNASIOS, ya deberías\l"
	.string "saberlo.$"

FuchsiaCityGym_NoPass_Texto_2:
	.string "¡O te vas por las buenas o llamo a la\n"
	.string "POLICÍA de MESETA AÑIL!$"


Cinnabar_Gym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 9, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 9, VermilionCityGym_NoPass_move_3
msgbox Cinnabar_Gym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox Cinnabar_Gym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 9, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 9, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox Cinnabar_Gym_Can_Pass_Texto_1, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 80
release
end

Cinnabar_Gym_Can_Pass_Texto_1:
.string "... ... ¡No puede ser! ¡LICENCIA aprobada\n"
	.string "y firmada por el propio LANCE! ¡Sale\l"
	.string "incluso tu foto y número de\l"
	.string "ENTRENADOR! Perdone el malentendido\l"
	.string "señor. Pase, por favor.$"

Cinnabar_Gym_NoPass_Texto_1:
.string "¿Qué broma es esta? ¿Un ROCKET\n"
	.string "entrando aquí?$"

Cinnabar_Gym_NoPass_Texto_2:
	.string "O desapareces o tienes a LANCE y sus\n"
	.string "dragones en menos tiempo del que\l"
	.string "durásteis en SILPH, ¡canallas!$"
