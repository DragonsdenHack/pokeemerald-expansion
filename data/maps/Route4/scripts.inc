Route4_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
	.byte 0

Route4_OnTransition::
setflag FLAG_VISITED_ROUTE_4_FLY
end


Route4_1::
lock     
faceplayer     
msgbox Route4_Text_1, MSGBOX_DEFAULT
release     
end

Route4_Text_1:
.string "Aua! \n"
.string "Ich bin über ein KLEINSTEIN\l"
.string "gestolpert, ein STEIN-POKéMON!$"


Route4_2::
lock     
faceplayer     
msgbox Route4_Text_2, MSGBOX_DEFAULT
release     
end

Route4_Text_2:
	.string "Wäre es nicht verboten, als Mitglied von\n"
	.string "TEAM ROCKET POKéMON-ARENEN\l"
	.string "herauszufordern, hätte ich vielleicht\l"
	.string "darüber nachgedacht, ein RÜPEL bei\l"
	.string "euch zu werden. Ein Leben auf der\l"
	.string "falschen Seite des Gesetzes hat mich\l"
	.string "schon immer fasziniert. Aber ich würde\l"
	.string "noch lieber gegen ROCKO kämpfen!$"


Route4_3::
end


Route4_4::
end


Route4_5::
lock     
faceplayer     
msgbox Route4_Text_5, MSGBOX_DEFAULT
release     
end

Route4_Text_5:
	.string "Halbe Sachen bringen dich nicht weiter!\n"
	.string "Wenn du deinen Gegner besiegen willst,\l"
	.string "musst du mit roher, ungebändigter Kraft\l"
	.string "zuschlagen! Nur so kannst du seine\l"
	.string "Verteidigung überraschen und\l"
	.string "durchbrechen, ohne ihm eine Chance\l"
	.string "zur Erholung zu geben!$"


Route4_6::
lock     
faceplayer     
msgbox Route4_Text_6, MSGBOX_DEFAULT
release     
end

Route4_Text_6:
.string "Half-measures won't get you anywhere.\n"
	.string "If you want to bring down the opponent,\l"
	.string "you must do it with raw and unbridled\l"
	.string "power. It's the only way to surprise and\l"
	.string "shatter their defense, not giving them\l"
	.string "time to recover.$"



Route4_EventScript_Chica::
	trainerbattle_single TRAINER_CINDY_3, Route4_Text_ChicaIntro, Route4_Text_ChicaDefeated
	msgbox Route4_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


Route4Documento_100::
msgbox Route4Documento_Text_100, MSGBOX_SIGN   
end

Route4Documento_Text_100:
.string "MONDBERG\n"
    .string "Tunneleingang$"



Route4Documento_101::
msgbox Route4Documento_Text_101, MSGBOX_SIGN   
end

Route4Documento_Text_101:
    .string "ROUTE 4\n"
    .string "MONDBERG - AZURIA CITY$"

Route4_Evento_Karatekas::
applymovement OBJ_EVENT_ID_PLAYER, Route4_Evento_Karatekas_move1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 5, Route4_Evento_Karatekas_move2
applymovement 6, Route4_Evento_Karatekas_move2
waitmovement 0x0
applymovement 6, Route4_Evento_Karatekas_move3
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 5, Route4_Evento_Karatekas_move4
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_2, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MEGAPUNO, Route4_Evento_Karatekas_Text_3
msgbox Route4_Evento_Karatekas_Text_4, MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Route4_Evento_Karatekas_move5
applymovement 5, Route4_Evento_Karatekas_move6
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_5, MSGBOX_AUTOCLOSE
applymovement 6, Route4_Evento_Karatekas_move7
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_6, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MEGAPATADA, Route4_Evento_Karatekas_Text_7
applymovement 5, Route4_Evento_Karatekas_move6
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_8, MSGBOX_AUTOCLOSE
applymovement 6, Route4_Evento_Karatekas_move8
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_9, MSGBOX_AUTOCLOSE
msgbox Route4_Evento_Karatekas_Text_10, MSGBOX_AUTOCLOSE
applymovement 5, Route4_Evento_Karatekas_move3
applymovement 6, Route4_Evento_Karatekas_move3
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_11, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SILK_SCARF
waitfanfare
delay 10
msgbox Route4_Evento_Karatekas_Text_12, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FB, 1
release
end

Route4_Evento_Karatekas_Text_1:
	.string "Was willst du, ROCKET? {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15} MEGAHIEB und\n"
	.string "MEGAKICK? Natürlich. Wir sind Experten,\l"
	.string "was diese Attacken angeht! Nichts ist\l"
	.string "besser, als deinen Gegner mit einem\l"
	.string "Tritt auf die Bretter zu schicken!\p"
	.string "Denkst du nicht auch so?$"

Route4_Evento_Karatekas_Text_2:
	.string "Ignorier ihn einfach! MEGAHIEB ist die\n"
	.string "beste Attacke, die es gibt! Uns ist es\l"
	.string "zwar verboten, diese Attacken ROCKETs\l"
	.string "beizubringen, aber eine kleine\l"
	.string "Kostprobe dürfte schon klargehen!$"

Route4_Evento_Karatekas_Text_3:
.string "War meine Offensive nicht stark genug?$"

Route4_Evento_Karatekas_Text_4:
	.string "Boah, der hat gesessen! Nur steinharte\n"
	.string "POKéMON können meinem MEGAHIEB\l"
	.string "standhalten!$"

Route4_Evento_Karatekas_Text_5:
	.string "HA! Hab ich's dir doch gesagt! Deine\n"
	.string "Angriffe haben nicht genug Kraft, um\l"
	.string "jemanden umzuhauen!$"

Route4_Evento_Karatekas_Text_6:
	.string "Jetzt zeige ich dir, was ein richtiger\n"
	.string "Tritt ist! All deine POKéMON werden auf\l"
	.string "einmal k.o. gehen!$"

Route4_Evento_Karatekas_Text_7:
.string "Habe ich etwa auch versagt?$"

Route4_Evento_Karatekas_Text_8:
	.string "Hab ich es dir doch gesagt! Dein\n"
	.string "MEGAKICK geht ständig daneben! Was\l"
	.string "bringt dir all diese Kraft, wenn du die\l"
	.string "Hälfte der Zeit dein Ziel verfehlst?$"

Route4_Evento_Karatekas_Text_9:
	.string "Ich verfehle lieber ab und zu mein Ziel,\n"
	.string "als meinen Gegner mit einem MEGAHIEB zu\l"
	.string "streicheln! Damit kannst du nicht\l"
	.string "einmal ein SAFCON umhauen!$"

Route4_Evento_Karatekas_Text_10:
.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route4_Evento_Karatekas_Text_11:
	.string "Danke fürs Helfen beim Üben unserer\n"
	.string "neuen Attacken. Wir dürfen sie dir zwar\l"
	.string "beibringen, aber wir können dir das hier\l"
	.string "geben.$"

Route4_Evento_Karatekas_Text_12:
	.string "Das ist unser kleines Geheimnis, um\n"
	.string "unseren Attacken mehr Wumms zu\l"
	.string "verleihen! NORMALE Attacken werden\l"
	.string "damit um 20 % stärker! Gib es einem\l"
	.string "TAUROS oder KANGAMA und du wirst\l"
	.string "sehen, was ich meine!$"

Route4_Evento_Karatekas_move1:
walk_in_place_up
step_end

Route4_Evento_Karatekas_move2:
delay_1
face_down
emote_exclamation_mark
step_end

Route4_Evento_Karatekas_move3:
walk_in_place_down
step_end

Route4_Evento_Karatekas_move4:
walk_right
walk_down
step_end

Route4_Evento_Karatekas_move5:
walk_down
walk_left
step_end

Route4_Evento_Karatekas_move6:
face_right
step_end

Route4_Evento_Karatekas_move7:
face_down
step_end

Route4_Evento_Karatekas_move8:
face_left
step_end

Route4_Frank::
applymovement OBJ_EVENT_ID_PLAYER, Route4_Frank_move1
waitmovement 0x0
playse SE_POKENAV_ON
msgbox Route4_Frank_Text1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setvar VAR_UNUSED_0x40F7, 17
release
end

Route4_Frank_Text1:
	.string "FRANK: RÜPEL {PLAYER}? Wo zum Teufel\n"
	.string "steckst du?! Komm sofort zurück! Du\l"
	.string "schuldest mir eine verdammt gute\l"
	.string "Erklärung für das, was gerade passiert\l"
	.string "ist!$"

Route4_Frank_move1:
emote_exclamation_mark
walk_in_place_up
step_end
