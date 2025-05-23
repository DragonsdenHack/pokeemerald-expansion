IndigoPlateau_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, IndigoPlateau_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_OnFrame
	.byte 0

IndigoPlateau_OnResume:
map_script_2 VAR_UNUSED_0x40DC, 11, IndigoPlateau_2
	.2byte 0

IndigoPlateau_2::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40DC, 12
end

IndigoPlateau_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 30, IndigoPlateau_Lance_Discurso
map_script_2 VAR_UNUSED_0x40DC, 12, IndigoPlateau_Escena_Lance
	.2byte 0

IndigoPlateau_Lance_Discurso::
playse SE_APPLAUSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IndigoPlateau_Lance_Discurso_move_1
waitmovement 0x0
special RemoveCameraObject
delay 50
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 1
playse SE_SLIDING_DOOR
opendoor 11, 2
waitdooranim
addobject 1
applymovement 1, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 11, 2
waitdooranim
delay 20
msgbox RocketHideout_6F_Escena_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox RocketHideout_6F_Escena_Lance_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_5
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_9 MSGBOX_AUTOCLOSE
delay 40
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 1
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 15
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 35
playse SE_PIN
applymovement 5, IndigoPlateau_Lance_Discurso_move_6
applymovement 6, IndigoPlateau_Lance_Discurso_move_6
delay 5
applymovement 21, IndigoPlateau_Lance_Discurso_move_6
applymovement 3, IndigoPlateau_Lance_Discurso_move_6
delay 5
applymovement 2, IndigoPlateau_Lance_Discurso_move_6
applymovement 10, IndigoPlateau_Lance_Discurso_move_6
delay 5
applymovement 4, IndigoPlateau_Lance_Discurso_move_6
applymovement 7, IndigoPlateau_Lance_Discurso_move_6
waitmovement 0x0
delay 60
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
msgbox RocketHideout_6F_Escena_Lance_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_5
delay 30
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
opendoor 11, 2
waitdooranim
applymovement 1, IndigoPlateau_Lance_Discurso_move_5.1
waitmovement 0x0
removeobject 1
closedoor 11, 2
waitdooranim
setvar VAR_UNUSED_0x40F7, 31
delay 80
warpsilent MAP_ROCKET_HIDEOUT_6F, 5, 27
release
end

IndigoPlateau_Lance_Discurso_move_5.1:
walk_up
step_end

RocketHideout_6F_Escena_Lance_Texto_1:
	.string "SIEGFRIED: Volk von KANTO. Hier spricht\n"
	.string "SIEGFRIED. Es werden neue Regelungen\l"
	.string "für die Region eingeführt. Ich möchte,\l"
	.string "dass ihr mir genau zuhört - ob von zu\l"
	.string "Hause, bei der Arbeit oder wo auch immer\l"
	.string "ihr euch gerade aufhaltet.$"

RocketHideout_6F_Escena_Lance_Texto_2:
	.string "Trotz der Fortschritte der letzten\n"
	.string "Monate liegt noch viel Arbeit vor uns,\l"
	.string "bevor wir uns den anderen Regionen\l"
	.string "öffnen können. SEVII, HOENN, JOHTO und\l"
	.string "so weiter können warten.\p"
	.string "Aber macht euch keine Sorgen.\p"
	.string "Die SILPH COMPANY allein genügt, um\n"
	.string "ganz KANTO problemlos zu versorgen.$"

RocketHideout_6F_Escena_Lance_Texto_3:
	.string "Deshalb erteile ich SILPH volle\n"
	.string "Befugnis bezüglich TRAINER-Artikel.\p"
	.string "Alle werden von ihrem Hauptsitz in\n"
	.string "SAFFRONIA CITY aus versendet und\l"
	.string "hauptsächlich im EINKAUFSZENTRUM VON\l"
	.string "PRISMANIA CITY verteilt.\p"
	.string "Kleinunternehmen, die sich als\n"
	.string "Alternativen darstellen, sind\l"
	.string "strengstens verboten, da sie dem\l"
	.string "allgemeinen Interesse der Region\l"
	.string "schaden.$"

RocketHideout_6F_Escena_Lance_Texto_4:
	.string "Auch wurde ich über eine kriminelle\n"
	.string "Bande informiert, die sich als -TEAM\l"
	.string "ROCKET- bezeichnet. Ihre Anwesenheit\l"
	.string "wird immer auffälliger.\p"
	.string "Ihre kriminellen Aktivitäten stehen\n"
	.string "dem Fortschritt der Region im Weg!$"

RocketHideout_6F_Escena_Lance_Texto_5:
	.string "Und als wäre das noch nicht genug, gibt\n"
	.string "es sogar Teile der Bevölkerung, die sie\l"
	.string "unterstützen! Jeder, der dieser Bande\l"
	.string "hilft, mit ihr sympathisiert oder\l"
	.string "Informationen jeglicher Art über sie\l"
	.string "zurückhält, wird sich vor dem Gesetz\l"
	.string "verantworten müssen!$"

RocketHideout_6F_Escena_Lance_Texto_6:
	.string "Ab sofort sind alle Märkte dieser\n"
	.string "Region für sämtliche ROCKET-Mitglieder\l"
	.string "tabu! Jeder, der ihnen Produkte\l"
	.string "verkauft, sie mit Mittel versorgt oder\l"
	.string "sonstige wirtschaftliche Beziehungen\l"
	.string "zu ihnen unterhält, muss mit schweren\l"
	.string "Konsequenzen rechnen!$"

RocketHideout_6F_Escena_Lance_Texto_7:
	.string "Wäre da nicht der Moralkodex der\n"
	.string "Schwestern, würde ich ihnen auch\l"
	.string "den Zutritt zu den POKéMON-CENTERN\l"
	.string "verweigern!$"

RocketHideout_6F_Escena_Lance_Texto_8:
	.string "Im Gegenzug wird jeder, der uns\n"
	.string "Informationen über TEAM ROCKET liefert\l"
	.string "oder sogar eigenständig dessen\l"
	.string "Mitglieder schnappt, fürstlich belohnt.$"

RocketHideout_6F_Escena_Lance_Texto_9:
	.string "Falls TEAM ROCKET weiterhin Widerstand\n"
	.string "leisten sollte, wird die TOP VIER unter\l"
	.string "meiner Führung gezwungen sein, zu\l"
	.string "handeln! Und seid euch eines gewiss:\p"
	.string "Wir werden keine Gnade zeigen!$"

RocketHideout_6F_Escena_Lance_Texto_10:
	.string "Das wäre alles. Wenn wir alle an einem\n"
	.string "Strang ziehen, kann diese Region in ein\l"
	.string "paar Jahren wieder in ihrem alten Glanz\l"
	.string "erstrahlen!$"

IndigoPlateau_Lance_Discurso_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
step_end

IndigoPlateau_Lance_Discurso_move_2:
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_3:
walk_slow_right
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_4:
walk_slow_left
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_5:
face_up
step_end

IndigoPlateau_Lance_Discurso_move_6:
emote_exclamation_mark
step_end

IndigoPlateau_Escena_Lance::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IndigoPlateau_Escena_Lance_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideout_8F_Mision_Silph_text_36 MSGBOX_AUTOCLOSE
applymovement 16, IndigoPlateau_Escena_Lance_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_37 MSGBOX_AUTOCLOSE
applymovement 16, IndigoPlateau_Escena_Lance_Move_4
waitmovement 0x0
delay 20
fadescreen 1
delay 20
call Script_RemoveTint
delay 20
fadescreen 0
msgbox RocketHideout_8F_Mision_Silph_text_37.1 MSGBOX_DEFAULT
delay 100
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7
release
end

IndigoPlateau_Escena_Lance_Move_4:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

IndigoPlateau_Escena_Lance_Move_3:
walk_slow_down
walk_slow_down
step_end

IndigoPlateau_Escena_Lance_Move_2:
face_down
step_end

IndigoPlateau_Escena_Lance_Move_1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end
