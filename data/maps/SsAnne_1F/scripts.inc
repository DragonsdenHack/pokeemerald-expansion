SsAnne_1F_MapScripts::
	.byte 0

SsAnne_1F_Andra_Ida::
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Ida_move_1
applymovement 2, SsAnne_1F_Andra_Ida_move_2
waitmovement 0x0
msgbox SsAnne_1F_Andra_Ida_Text_1 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_1F_Andra_Ida_move_3
waitmovement 0x0
msgbox SsAnne_1F_Andra_Ida_Text_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_1F_Andra_Ida_Text_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SsAnne_1F_Andra_Ida_move_4
waitmovement 0x0
delay 10
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 2
setvar VAR_UNUSED_0x40F7, 25
release
end

SsAnne_1F_Andra_Ida_Text_1:
	.string "Es war doch einfacher als gedacht,\n"
	.string "hier reinzuspazieren, was?$"

SsAnne_1F_Andra_Ida_Text_2:
	.string "Die meisten Passagiere auf diesem\n"
	.string "Luxus-Kreuzer sind Ausländer. Das\l"
	.string "macht es leichter, unauffällig zu\l"
	.string "bleiben und in die Kammer des KAPITÄNs\l"
	.string "zu schleichen, ohne Aufsehen zu\l"
	.string "erregen. Sobald wir drin sind, finden wir\l"
	.string "die Phiole und verschwinden wieder von\l"
	.string "hier.$"

SsAnne_1F_Andra_Ida_Text_3:
.string "Legen wir los!$"

SsAnne_1F_Andra_Ida_move_1:
walk_in_place_down
step_end

SsAnne_1F_Andra_Ida_move_2:
walk_in_place_up
step_end

SsAnne_1F_Andra_Ida_move_3:
walk_in_place_down
walk_in_place_up
step_end

SsAnne_1F_Andra_Ida_move_4:
walk_down
step_end

SsAnne_1F_Andra_Vuelta::
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Vuelta_move_1
waitmovement 0x0
applymovement 3, SsAnne_1F_Andra_Vuelta_move_2
waitmovement 0x0
msgbox SsAnne_1F_Andra_Vuelta_Text_1 MSGBOX_DEFAULT
delay 10
playse SE_DING_DONG
waitse
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Vuelta_move_3
applymovement 3, SsAnne_1F_Andra_Vuelta_move_4
waitmovement 0x0
msgbox SsAnne_1F_Andra_Vuelta_Text_2 MSGBOX_DEFAULT
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Vuelta_move_5
waitmovement 0x0
delay 10
msgbox SsAnne_1F_Andra_Vuelta_Text_3 MSGBOX_DEFAULT
delay 10
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM01
waitfanfare
msgbox SsAnne_1F_Andra_Vuelta_Text_4 MSGBOX_DEFAULT
applymovement 3, SsAnne_1F_Andra_Vuelta_move_6
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 3
setvar VAR_UNUSED_0x40F7, 28
release
end

SsAnne_1F_Andra_Vuelta_Text_1:
	.string "ANDRA: Wir haben es geschafft,\n"
	.string "{PLAYER}! Der KAPITÄN war eine harte\l"
	.string "Nuss, nicht wahr? Ich habe noch nie\l"
	.string "solche POKéMON gesehen? Sie stammen\l"
	.string "wahrscheinlich aus anderen Regionen.\l"
	.string "Egal. Wir haben die Phiole {PAUSE 5}…{PAUSE 5}$"

SsAnne_1F_Andra_Vuelta_Text_2:
	.string "M.S. ANNE: Achtung, liebe Gäste. Die\n"
	.string "Feier ist nun vorbei. Kehren Sie bitte in\l"
	.string "Ihre Kabinen zurück, damit das Personal\l"
	.string "mit den Aufräumarbeiten beginnen kann.$"

SsAnne_1F_Andra_Vuelta_Text_3:
	.string "ANDRA: Tja, das ist dann wohl unser\n"
	.string "Stichwort. Übrigens {PAUSE 15}…{PAUSE 15} habe eine Menge\l"
	.string "hiervon auf dem Tisch des KAPITÄNs\l"
	.string "gefunden. Ich wette, du kannst auch\l"
	.string "eins gebrauchen.$"

SsAnne_1F_Andra_Vuelta_Text_4:
	.string "Wir sehen uns in der Kaserne,\n"
	.string "{PLAYER}.$"

SsAnne_1F_Andra_Vuelta_move_1:
walk_up
walk_up
walk_up
walk_up
step_end

SsAnne_1F_Andra_Vuelta_move_2:
face_down
step_end

SsAnne_1F_Andra_Vuelta_move_3:
face_down
emote_exclamation_mark
step_end

SsAnne_1F_Andra_Vuelta_move_4:
emote_exclamation_mark
step_end

SsAnne_1F_Andra_Vuelta_move_5:
face_up
step_end

SsAnne_1F_Andra_Vuelta_move_6:
walk_up
step_end


SsAnne_1F_Acabado::
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Acabado_move_1
waitmovement 0x0
msgbox SsAnne_1F_Acabado_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Acabado_move_2
waitmovement 0x0
release
end

SsAnne_1F_Acabado_Text_1:
.string "-Ich habe hier nichts mehr zu tun.-$"


SsAnne_1F_Acabado_move_1:
walk_in_place_up
step_end

SsAnne_1F_Acabado_move_2:
walk_up
step_end
