Route25_BillHouse_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route25_BillHouse_OnFrame
	.byte 0

Route25_BillHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 20, Route25_BillHouse_Evento_Policia
	.2byte 0

Route25BillHouse3::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_3, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_3:
	.string "Du kommst hier nur in Handschellen\n"
	.string "raus!$"



Route25BillHouse4::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_4, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_4:
	.string "Du kommst hier nur in Handschellen\n"
	.string "raus!$"



Route25BillHouse5::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_5, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_5:
	.string "Du kommst hier nur in Handschellen\n"
	.string "raus!$"

Route25_BillHouse_Evento_Policia::
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move1
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route25_BillHouse_Evento_Policia_move2
waitmovement 0x0
waitse
msgbox Route25_BillHouse_Evento_Policia_text_2 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move3
waitmovement 0x0
delay 10
msgbox Route25_BillHouse_Evento_Policia_text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route25_BillHouse_Evento_Policia_move4
waitmovement 0x0
waitse
msgbox Route25_BillHouse_Evento_Policia_text_4 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move6
applymovement 1, Route25_BillHouse_Evento_Policia_move7
waitmovement 0x0
delay 20
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playse SE_EXIT
addobject 5
delay 10
applymovement 5, Route25_BillHouse_Evento_Policia_move8
waitmovement 0x0
playse SE_PIN
playse MUS_RG_VICTORY_ROAD
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move9
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 4
delay 10
applymovement 4, Route25_BillHouse_Evento_Policia_move10
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 3
delay 10
applymovement 3, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
delay 10
applymovement 1, Route25_BillHouse_Evento_Policia_move7
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route25_BillHouse_Evento_Policia_move10.1
waitmovement 0x0
delay 10
msgbox Route25_BillHouse_Evento_Policia_text_5.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Route25_BillHouse_Evento_Policia_move7
waitmovement 0x0
waitse
msgbox Route25_BillHouse_Evento_Policia_text_6 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move11
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 1
playse SE_EXIT
delay 15
applymovement 5, Route25_BillHouse_Evento_Policia_move12
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move13
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, Route25_BillHouse_Evento_Policia_text_8
applymovement 4, Route25_BillHouse_Evento_Policia_move3
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move14
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MARCEL, Route25_BillHouse_Evento_Policia_text_10
applymovement 3, Route25_BillHouse_Evento_Policia_move15
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move16
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALBERTO, Route25_BillHouse_Evento_Policia_text_12
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move16
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_13 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Route25_BillHouse_Evento_Policia_move12
waitmovement 0x0
playse SE_POKENAV_ON
delay 15
msgbox Route25_BillHouse_Evento_Policia_text_14 MSGBOX_AUTOCLOSE
delay 15
playse SE_PC_OFF
applymovement 3, Route25_BillHouse_Evento_Policia_move15
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_15 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 21
release
end

Route25_BillHouse_Evento_Policia_move10.1:
face_right
delay_16
delay_8
face_down
step_end

Route25_BillHouse_Evento_Policia_text_1:
	.string "BILL: Diese dumme SILPH COMPANY … Ich\n"
	.string "hatte mich doch klar und deutlich\l"
	.string "ausgedrückt, dass ich ein UP-GRADE für\l"
	.string "mein PORYGON haben will! Je früher,\l"
	.string "desto besser! Ich werde der Erste in\l"
	.string "KANTO mit einem PORYGON2 sein - das\l"
	.string "POKéMON auf dem neuesten Stand der\l"
	.string "Technik!$"


Route25_BillHouse_Evento_Policia_text_2:
	.string "Soll das ein Witz sein? Verschwinde aus\n"
	.string "meinem Haus, ROCKET. Ich mache keine\l"
	.string "Geschäfte mit Kriminellen.\p"
	.string "Außerdem besitze ich bereits jedes\n"
	.string "POKéMON, das du mir anbieten könntest.$"

Route25_BillHouse_Evento_Policia_text_3:
.string "{PAUSE 15}…{PAUSE 15}$"

Route25_BillHouse_Evento_Policia_text_4:
	.string "traducir$"

Route25_BillHouse_Evento_Policia_text_5:
	.string "Die Regierung der TOP VIER hat mir\n"
	.string "bereits 20,000,000¥ und eine\l"
	.string "Lizenz zur Erforschung der\l"
	.string "LEGENDÄREN VÖGEL angeboten.$"

Route25_BillHouse_Evento_Policia_text_5.1:
	.string "traducir$"

Route25_BillHouse_Evento_Policia_text_6:
	.string "WACHEN! Schafft mir dieses SLEIMA auf\n"
	.string "zwei Beinen aus den Augen! Ich möchte\l"
	.string "es nie wieder sehen!$"

Route25_BillHouse_Evento_Policia_text_7:
	.string "Du bist hiermit verhaftet, ROCKET! Für\n"
	.string "den versuchten Diebstahl eines\l"
	.string "essenziellen geistigen Eigentums\l"
	.string "unserer Region wirst du den Rest deines\l"
	.string "Lebens hinter Gittern verbringen! {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}\p"
	.string "Du leistest Widerstand gegen die\n"
	.string "Festnahme? Dann werden wir dich mit der\l"
	.string "vollen Härte des Gesetzes bestrafen!$"

Route25_BillHouse_Evento_Policia_text_8:
.string "Du kannst uns nicht alle besiegen!$"

Route25_BillHouse_Evento_Policia_text_9:
	.string "Weißt du was, Freundchen. Dich\n"
	.string "kooperativ zu verhalten, hätte\l"
	.string "vielleicht deine Strafe gemindert.\p"
	.string "Aber jetzt kommt auch noch\n"
	.string "Widerstand gegen Beamte oben drauf!$"

Route25_BillHouse_Evento_Policia_text_10:
.string "Auch ich habe verloren?$"

Route25_BillHouse_Evento_Policia_text_11:
	.string "Ich habe genug gesehen! Die\n"
	.string "Gerechtigkeit wird nach dieser Nummer\l"
	.string "hier keine Gnade mehr mit dir haben!\p"
	.string "Es wird nicht einmal ein\n"
	.string "Gerichtsverfahren geben!$"

Route25_BillHouse_Evento_Policia_text_12:
	.string "Drei Polizisten … besiegt\n"
	.string "von einem ROCKET?!$"

Route25_BillHouse_Evento_Policia_text_13:
	.string "Ist das ein schlechter Scherz?\n"
	.string "Gewöhnliche ROCKETs leisten doch\l"
	.string "keinen so starken Widerstand!\p"
	.string "Du wirst damit nicht davonkommen!$"

Route25_BillHouse_Evento_Policia_text_14:
	.string "Fordere Verstärkung an! Ich\n"
	.string "wiederhole: fordere Verstärkung an!\p"
	.string "Einer von TEAM ROCKET wird im Haus von\n"
	.string "BILL festgehalten, aufgrund des\l"
	.string "versuchten Diebstahls eines Patents,\l"
	.string "welches Millionen von POKéDOLLARN wert\l"
	.string "ist! Drei von uns wurden bereits\l"
	.string "besiegt! Wir brauchen sofortige\l"
	.string "Verstärkung!$"

Route25_BillHouse_Evento_Policia_text_15:
	.string "Es ist aus! Die Verstärkung wird bald\n"
	.string "auftauchen und dein TEAM ist\l"
	.string "erschöpft! Du wirst nicht entkommen!\p"
	.string "Mach, was du willst, aber du wirst dieses\n"
	.string "Haus nur in Handschellen verlassen!$"

Route25_BillHouse_Evento_Policia_move1:
walk_up
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move2:
emote_exclamation_mark
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move3:
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move4:
emote_exclamation_mark
step_end

Route25_BillHouse_Evento_Policia_move5:
walk_right
walk_right
walk_right
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move6:
face_up
step_end

Route25_BillHouse_Evento_Policia_move7:
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move8:
walk_left
walk_up
walk_in_place_right
step_end

Route25_BillHouse_Evento_Policia_move9:
emote_exclamation_mark
face_down
step_end

Route25_BillHouse_Evento_Policia_move10:
walk_right
walk_up
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move11:
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Route25_BillHouse_Evento_Policia_move12:
walk_in_place_right
step_end

Route25_BillHouse_Evento_Policia_move13:
face_left
step_end

Route25_BillHouse_Evento_Policia_move14:
face_right
step_end

Route25_BillHouse_Evento_Policia_move15:
walk_in_place_up
step_end


Route25_BillHouse_Evento_Policia_move16:
walk_in_place_down
step_end

Route25_BillHouse_Warp_No::
release
end

Route25_BillHouse_Warp::
msgbox Route25_BillHouse_Warp_text_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Warp_move1
waitmovement 0x0
msgbox Route25_BillHouse_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route25_BillHouse_Warp_No
warp MAP_BILL_GARDEN, 6, 47
release
end

Route25_BillHouse_Warp_text_1:
.string "{PAUSE 15}…{PAUSE 15}$"

Route25_BillHouse_Warp_Text_YesNo:
    .string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "Dieses Poster scheint einen Tunnel zu\n"
	.string "verdecken, der irgendwo hinführt.\p"
	.string "Willst du hindurchgehen?$"

Route25_BillHouse_Warp_move1:
emote_exclamation_mark
step_end

