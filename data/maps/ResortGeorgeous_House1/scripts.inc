ResortGeorgeous_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, ResortGeorgeous_House1_OnFrame
	.byte 0

ResortGeorgeous_House1_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 4, ResortGeorgeous_House1_Consul
	.2byte 0



ResortGeorgeousDocumento_100::
msgbox ResortGeorgeousDocumento_Text_100, MSGBOX_SIGN   
end

ResortGeorgeousDocumento_Text_100:
	.string "POKÉMON JOURNAL\p"
	.string "Sonderreportage: ARENALEITER PYRO\n"
	.string "von der ZINNOBERINSEL! PYRO nimmt\l"
	.string "seine Sonnenbrille angeblich nur ab,\l"
	.string "wenn er sich neue Quizfragen ausdenkt.$"

ResortGeorgeous_House1_Consul_move_1.2:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end


ResortGeorgeous_House1_Consul::
lockall
delay 35
applymovement 1, ResortGeorgeous_House1_Consul_move_1
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_1, MSGBOX_AUTOCLOSE
applymovement 2, ResortGeorgeous_House1_Consul_move_2
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_2, MSGBOX_AUTOCLOSE
delay 15
applymovement 1, ResortGeorgeous_House1_Consul_move_1.2
waitmovement 0x0
delay 15
msgbox ResortGeorgeous_House1_Text_Consul_3, MSGBOX_AUTOCLOSE
delay 15
applymovement 1, ResortGeorgeous_House1_Consul_move_1
waitmovement 0x0
delay 15
msgbox ResortGeorgeous_House1_Text_Consul_3.1, MSGBOX_AUTOCLOSE
delay 15
applymovement 1, ResortGeorgeous_House1_Consul_move_3
applymovement 2, ResortGeorgeous_House1_Consul_move_4
waitmovement 0x0
playse SE_PIN
applymovement 1, ResortGeorgeous_House1_Consul_move_5
applymovement 2, ResortGeorgeous_House1_Consul_move_5
waitse
delay 10
msgbox ResortGeorgeous_House1_Text_Consul_4, MSGBOX_AUTOCLOSE
delay 15
msgbox ResortGeorgeous_House1_Text_Consul_5, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, ResortGeorgeous_House1_Consul_move_5.1
waitmovement 0x0
delay 10
msgbox ResortGeorgeous_House1_Text_Consul_5.1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_CONSUL, ResortGeorgeous_House1_Text_Consul_6
delay 5
applymovement 1, CuevaTesoro4_Jefe_Final_Move_9
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_7
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_7, MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare 
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playse SE_DOOR
addobject 3
delay 20
playse SE_DOOR
addobject 4
delay 20
playse SE_PIN
applymovement 3, ResortGeorgeous_House1_Consul_move_8
applymovement 1, ResortGeorgeous_House1_Consul_move_5
applymovement 2, ResortGeorgeous_House1_Consul_move_5
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_4
delay 10
waitmovement 0x0
playse SE_DOOR
addobject 4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_7
applymovement 4, ResortGeorgeous_House1_Consul_move_9
waitmovement 0x0
delay 15
msgbox ResortGeorgeous_House1_Text_Consul_8, MSGBOX_AUTOCLOSE
delay 15
msgbox ResortGeorgeous_House1_Text_Consul_9, MSGBOX_AUTOCLOSE
applymovement 3, ResortGeorgeous_House1_Consul_move_10
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_10, MSGBOX_AUTOCLOSE
applymovement 3, ResortGeorgeous_House1_Consul_move_10
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_11, MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
fadescreen 1
playse SE_BALL_THROW
removeobject 1
removeobject 3
removeobject 4
delay 10
playse SE_EXIT
waitse
delay 10
addobject 5
fadescreen 0
fadeoutbgm 0
playse MUS_RG_SEVII_45
applymovement 2, ResortGeorgeous_House1_Consul_move_11
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_12
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_12, MSGBOX_AUTOCLOSE
applymovement 2, ResortGeorgeous_House1_Consul_move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 2
setvar VAR_UNUSED_0x40F7, 5
release
end



ResortGeorgeous_House1_Text_Consul_1:
	.string "KONSULIN: Hast du wirklich geglaubt,\n"
	.string "dass du mich mit so einem schwachen\l"
	.string "Team dazu zwingen könntest, dem Willen\l"
	.string "deiner Organisation nachzugeben?\l"
	.string "Ich habe ATLAS bereits gesagt, dass\p"
	.string "ihr nicht mit dem Angebot mithalten\n"
	.string "könnt, welches mir die REGIERUNG VON\l"
	.string "KANTO gemacht hat.$"

ResortGeorgeous_House1_Text_Consul_2:
	.string "ANDRA: Ich dachte, wir hätten eine\n"
	.string "Abmachung! Wo bleibt Ihre Loyalität\l"
	.string "gegenüber TEAM ROCKET? Ohne uns wären\l"
	.string "Sie hier nie KONSULIN geworden und\l"
	.string "jetzt wollen Sie die Geschäfte\l"
	.string "derjenigen ruinieren, die Ihnen diese\l"
	.string "Position verschafft haben?$"

ResortGeorgeous_House1_Text_Consul_3:
	.string "KONSULIN: Es stimmt, dass ihr mir diese\n"
	.string "Position verschafft habt - Betonung\l"
	.string "auf habt. Das liegt in der\l"
	.string "Vergangenheit. Ihr seid Vergangenheit.\p"
	.string "Ich brauche euch nicht mehr und ihr\n"
	.string "steht mir ohnehin nur bei meinen neuen\l"
	.string "Zielen im Weg. Wenn ATLAS mich wirklich\l"
	.string "aufhalten möchte, sollte er am besten\l"
	.string "selbst kommen. Kein anderer mickriger\l"
	.string "ROCKET kann es mit meinen POKéMON\l"
	.string "aufnehmen, die aus den besten Horten\l"
	.string "importiert wurden.$"

ResortGeorgeous_House1_Text_Consul_3.1:
	.string "Und nun entschuldige mich. Ich muss mit\n"
	.string "dem Vertreter KANTOs sprechen.\p"
	.string "Hohohoho!$"

ResortGeorgeous_House1_Text_Consul_4:
	.string "ANDRA: {PLAYER}!$"

ResortGeorgeous_House1_Text_Consul_5:
	.string "KONSULIN: Anscheinend gibt es noch\n"
	.string "mehr Müll, der zur Tür rausgetragen\l"
	.string "werden muss. Bringen wir es hinter uns.$"

ResortGeorgeous_House1_Text_Consul_5.1:
	.string "Ich hoffe, dein ZUBAT kann mein\n"
	.string "VOLTILAMM besser unterhalten als\l"
	.string "das deiner kleinen Freundin.$"

ResortGeorgeous_House1_Text_Consul_6:
	.string "Haben meine hochklassigen POKéMON\n"
	.string "gerade gegen einen gewöhnlichen\l"
	.string "ROCKET verloren?$"

ResortGeorgeous_House1_Text_Consul_7:
	.string "Das ist unmöglich! Du kannst meine\n"
	.string "Karriere nicht ruinieren!$"

ResortGeorgeous_House1_Text_Consul_8:
	.string "Es ist aus, KONSULIN. Sie hätten nicht\n"
	.string "die Hand beißen sollen, die Sie füttert.\p"
	.string "Sie haben sich für die Klügste gehalten\n"
	.string "und uns bei der erstbesten Gelegenheit\l"
	.string "verraten. Und dafür werden Sie jetzt\l"
	.string "bezahlen. Ich denke, etwas Zeit in der\l"
	.string "VERLORENEN HÖHLE wird Sie wieder zur\l"
	.string "Vernunft bringen.$"

ResortGeorgeous_House1_Text_Consul_9:
.string "KONSULIN: Oh {PAUSE 15}…{PAUSE 15} nein {PAUSE 15}…{PAUSE 15}$"

ResortGeorgeous_House1_Text_Consul_10:
	.string "Was euch betrifft. Ihr könnt stolz auf\n"
	.string "euch sein. Das war keine leichte\l"
	.string "Mission. Ihr habt gute Arbeit geleistet.\p"
	.string "ATLAS wird im LAGER auf euch warten, um\n"
	.string "euch zu loben.$"


ResortGeorgeous_House1_Text_Consul_11:
.string "GEHEN WIR, KONSULIN!!!$"

ResortGeorgeous_House1_Text_Consul_12:
.string "ANDRA: {PAUSE 15}…{PAUSE 15}\p"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "{PAUSE 15}Wir sehen uns im Lager.$"


ResortGeorgeous_House1_Consul_move_1:
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_1.1:
walk_in_place_up
step_end

ResortGeorgeous_House1_Consul_move_2:
walk_in_place_right
step_end

ResortGeorgeous_House1_Consul_move_3:
walk_down
step_end

ResortGeorgeous_House1_Consul_move_4:
delay_8
face_down
delay_8
step_end

ResortGeorgeous_House1_Consul_move_5:
emote_exclamation_mark
step_end

ResortGeorgeous_House1_Consul_move_5.1:
walk_in_place_down
step_end

ResortGeorgeous_House1_Consul_move_6:
walk_up
step_end

ResortGeorgeous_House1_Consul_move_7:
face_up
step_end

ResortGeorgeous_House1_Consul_move_8:
walk_left
walk_up
walk_up
face_right
step_end

ResortGeorgeous_House1_Consul_move_9:
walk_right
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_10:
walk_in_place_up
walk_in_place_right
step_end

ResortGeorgeous_House1_Consul_move_11:
walk_slow_down
walk_slow_down
face_right
step_end

ResortGeorgeous_House1_Consul_move_12:
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_13:
walk_slow_down
walk_right
step_end


