SaffronCity_Gym_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_Gym_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_Gym_OnFrame
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_Gym_OnTransition
    .byte 0

SaffronCity_Gym_OnFrame:
map_script_2 VAR_ROUTE105_STATE, 0, SaffronCity_No_Pass_Gym
map_script_2 VAR_ROUTE105_STATE, 1, SaffronCity_Can_Pass_Gym
	.2byte 0
	
SaffronCity_Gym_OnTransition::
goto_if_ge VAR_UNUSED_0x40F7, 203, SaffronCity_Gym_WarpDinamica
setdynamicwarp MAP_SAFFRON_CITY, 46, 12
end

SaffronCity_Gym_WarpDinamica::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 46, 12
end	

SaffronCityGym_EventScript_Exorcista::
	trainerbattle_single TRAINER_JENNY_2, SaffronCityGym_Text_ExorcistaIntro, SaffronCityGym_Text_ExorcistaDefeated
	msgbox SaffronCityGym_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Exorcista2::
	trainerbattle_single TRAINER_CARLEE, SaffronCityGym_Text_Exorcista2Intro, SaffronCityGym_Text_Exorcista2Defeated
	msgbox SaffronCityGym_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Exorcista3::
	trainerbattle_single TRAINER_LAUREL, SaffronCityGym_Text_Exorcista3Intro, SaffronCityGym_Text_Exorcista3Defeated
	msgbox SaffronCityGym_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium::
	trainerbattle_single TRAINER_KAREN_4, SaffronCityGym_Text_MediumIntro, SaffronCityGym_Text_MediumDefeated
	msgbox SaffronCityGym_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium2::
	trainerbattle_single TRAINER_GEORGIA, SaffronCityGym_Text_Medium2Intro, SaffronCityGym_Text_Medium2Defeated
	msgbox SaffronCityGym_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium3::
	trainerbattle_single TRAINER_KAREN_2, SaffronCityGym_Text_Medium3Intro, SaffronCityGym_Text_Medium3Defeated
	msgbox SaffronCityGym_Text_Medium3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium4::
	trainerbattle_single TRAINER_KAREN_3, SaffronCityGym_Text_Medium4Intro, SaffronCityGym_Text_Medium4Defeated
	msgbox SaffronCityGym_Text_Medium4PostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_No_Pass_Gym::
delay 70
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox SaffronCity_No_Pass_Gym_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_No_Pass_Gym_move1
waitmovement 0x0
warp MAP_SAFFRON_CITY, 46, 12
release
end

SaffronCity_No_Pass_Gym_move1:
face_down
step_end


SaffronCity_Can_Pass_Gym::
delay 20
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox SaffronCity_No_Pass_Gym_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox SaffronCity_No_Pass_Gym_Texto_2 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE105_STATE, 2
release
end


SaffronCity_No_Pass_Gym_Texto_1:
	.string "Ihr verdammten ROCKETs! Hat euch eure\n"
	.string "Blamage bei SILPH nicht gereicht? Noch\l"
	.string "einen Schritt weiter und ich fege dich\l"
	.string "mit einer einzigen PSYCHOKINESE zurück\l"
	.string "in die Kloaken von PRISMANIA!$"

SaffronCity_No_Pass_Gym_Texto_2:
	.string "Moment mal! Diese LIZENZ {PAUSE 25}…{PAUSE} Nur die\n"
	.string "hochrangigen Mitglieder des\l"
	.string "LIGA-LEITUNG besitzen dieses Exemplar\l"
	.string "{PAUSE 25}…{PAUSE} Entschuldigen Sie bitte das\l"
	.string "Missverständnis, SIR!\p"
	.string "Alles ist in bester Ordnung. Ich hoffe,\n"
	.string "sie genießen unsere Einrichtungen.$"

SaffronCity_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Gym_Guy_2
msgbox SaffronCity_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Gym_Guy_2::
msgbox SaffronCity_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Gym_Guy_Texto_1:
	.string "Heh!\n"
	.string "Warte, du Champion in spe!\p"
	.string "Die POKéMON von SABRINA benutzen\n"
	.string "PSYCHOKINESE anstelle von physischen\l"
	.string "Kräften! KAMPF-POKéMON sind\l"
	.string "PSYCHOKINESE nicht gewachsen!\p"
	.string "Sie haben nicht einmal den Hauch\n"
	.string "einer Chance!$"

SaffronCity_Gym_Guy_Texto_2:
	.string "PSYCHOKINESE? Wenn ich sie hätte,\n"
	.string "würde ich in der Spielhalle reich werden!$"

SaffronCity_Estatua::
compare VAR_UNUSED_0x40F7, 22
goto_if_gt SaffronCity_Estatua_Estatua_3
msgbox SaffronCity_Estatua_Texto_4 MSGBOX_SIGN
release
end

SaffronCity_Estatua_Estatua_3::
compare VAR_ROUTE105_STATE, 0
goto_if_eq SaffronCity_Estatua_3
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Estatua_2
msgbox SaffronCity_Estatua_Texto_1 MSGBOX_SIGN
release
end

SaffronCity_Estatua_2::
msgbox SaffronCity_Estatua_Texto_2 MSGBOX_SIGN
release
end

SaffronCity_Estatua_3::
msgbox SaffronCity_Estatua_Texto_3 MSGBOX_SIGN
release
end

SaffronCity_Estatua_Texto_1:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

SaffronCity_Estatua_Texto_2:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
	.string "BLUE, RED, ANDRA y {PLAYER}$"

SaffronCity_Estatua_Texto_3:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
	.string "BLUE and RED$"

SaffronCity_Estatua_Texto_4:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
.string "It is empty!$"

SaffronCity_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Lider_Gimnasio_2
msgbox SaffronCity_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SaffronCity_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SABRINA, SaffronCity_Lider_Gimnasio_Texto_2
msgbox SaffronCity_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM04
msgbox SaffronCity_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox SaffronCity_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
addvar VAR_UNUSED_0x40F8, 1
setflag FLAG_BADGE06_GET
settrainerflag TRAINER_JENNY_2
settrainerflag TRAINER_CARLEE
settrainerflag TRAINER_LAUREL
settrainerflag TRAINER_KAREN_4
settrainerflag TRAINER_GEORGIA
settrainerflag TRAINER_KAREN_2
settrainerflag TRAINER_KAREN_3
setvar VAR_ROUTE105_STATE, 3
release
end

SaffronCity_Lider_Gimnasio_2::
msgbox SaffronCity_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Lider_Gimnasio_Texto_1:
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15} Hm… Interessant. Erst vor Kurzem\n"
	.string "war eine junge Frau in genauso einer\l"
	.string "ROCKET-Uniform hier. Aber dein\l"
	.string "Auftauchen überrascht mich völlig. Es\l"
	.string "scheint, als wärst du - anders als viele,\l"
	.string "die diesen Ort betreten - nicht an ein\l"
	.string "festes Schicksal gebunden. Du bist wie\l"
	.string "ein unbeschriebenes Buch - pures\l"
	.string "Potenzial. Nutze dieses Geschenk. Es\l"
	.string "ist eine seltene Gabe geworden … Ach,\l"
	.string "verzeih mir. Ich habe mich in Gedanken\l"
	.string "verloren. Ehrlich gesagt rede ich lieber\l"
	.string "über solche Dinge als zu kämpfen. Doch\l"
	.string "meine Gabe, Gedanken zu lesen und die\l"
	.string "Zukunft vorherzusehen, hat mich zu\l"
	.string "einer außergewöhnlichen Trainerin im\l"
	.string "Bereich der PSYCHO-POKéMON gemacht.$"

SaffronCity_Lider_Gimnasio_Texto_1.1:
	.string "Wenn du mir nicht glaubst, dann\n"
	.string "beweise ich es dir!$"

SaffronCity_Lider_Gimnasio_Texto_2:
	.string "Ich bin erschüttert! Aber verloren ist\n"
	.string "verloren. Ich muss gestehen, ich habe\l"
	.string "mich nicht allzu sehr angestrengt!\p"
	.string "Ich schenke dir den SUMPFORDEN!$"


SaffronCity_Lider_Gimnasio_Texto_3:
	.string "TM04 ist GEDANKENGUT. Es erhöht\n"
	.string "den SPEZIAL-ANGRIFF und die\l"
	.string "SPEZIAL-VERTEIDIGUNG des Anwenders.$"


SaffronCity_Lider_Gimnasio_Texto_4:
	.string "Der SUMPFORDEN lässt POKéMON bis Level\n"
	.string "70 deinen Befehlen folgen! Stärkere\l"
	.string "POKéMON könnten sich dir widersetzen\l"
	.string "und deine Befehle ignorieren!\p"
	.string "Achte darauf, dass du deine POKéMON\n"
	.string "jederzeit unter Kontrolle hast! Warte!\p"
	.string "Nimm noch diese TM von mir!$"


SaffronCity_Lider_Gimnasio_Texto_5:
    .string "{PLAYER} erhält TM04!$"


SaffronCity_Lider_Gimnasio_Texto_6:
	.string "Theoretisch könnte jeder die\n"
	.string "PSYCHOKINESE erlernen.\p"
	.string "Viele wissen es nur nicht!$"


Vermilion_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Gym_Guy_2
msgbox Vermilion_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Gym_Guy_2::
msgbox Vermilion_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Gym_Guy_Texto_1:
	.string "Mmmm {PAUSE 15}…{PAUSE 15} Ja, du hast eine gültige Lizenz,\n"
	.string "aber etwas an dir ist faul.\p"
	.string "Ich werde dich im Auge behalten {PAUSE 5}…{PAUSE 5}$"


Vermilion_City_Gym_Guy_Texto_2:
	.string "Du bist definitiv kein ROCKET! Dieser\n"
	.string "Abschaum könnte es niemals mit unserem\l"
	.string "großartigen MAJOR aufnehmen!$"

Vermilion_City_Estatua::
compare VAR_UNUSED_0x40F7, 28
goto_if_gt Vermilion_City_Estatua_Estatua_3
msgbox Vermilion_City_Estatua_Texto_4 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_Estatua_3::
compare VAR_ROUTE108_STATE, 0
goto_if_eq Vermilion_City_Estatua_3
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Estatua_2
msgbox Vermilion_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_2::
msgbox Vermilion_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_3::
msgbox Vermilion_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_Texto_1:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Vermilion_City_Estatua_Texto_2:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"

Vermilion_City_Estatua_Texto_3:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE and RED$"

Vermilion_City_Estatua_Texto_4:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
           .string "It is empty!$"


Vermilion_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 93
goto_if_gt Vermilion_City_Lider_Gimnasio_Post_Liga
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Lider_Gimnasio_2
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Vermilion_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SURGE_2, Vermilion_City_Lider_Gimnasio_Texto_2
msgbox Vermilion_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM34
msgbox Vermilion_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Vermilion_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
addvar VAR_UNUSED_0x40F8, 1
setflag FLAG_BADGE03_GET
settrainerflag TRAINER_WINSTON_5
settrainerflag TRAINER_ETHAN_4
settrainerflag TRAINER_LAO_5
setvar VAR_ROUTE108_STATE, 3
release
end

Vermilion_City_Lider_Gimnasio_Post_Liga::
msgbox Vermilion_City_Lider_Gimnasio_Texto_3.1 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Lider_Gimnasio_2::
msgbox Vermilion_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Lider_Gimnasio_Texto_1:
	.string "Willst du mich verarschen? Du Stück\n"
	.string "Scheiße hast wirklich Nerven nach dem\l"
	.string "Vorfall im KRAFTWERK hier\l"
	.string "aufzutauchen! Erst deine rothaarige\l"
	.string "Freundin und jetzt du! Verdammte\l"
	.string "Rebellen! Jetzt wirst du die wahre Wut\l"
	.string "meiner ELEKTRO-POKéMON zu spüren\l"
	.string "bekommen und verstehen, warum ich im\l"
	.string "Krieg so gefürchtet wurde! Und wenn ich\l"
	.string "mit deinen POKéMON fertig bin, bekommst\l"
	.string "du deine eigene Kostprobe\l"
	.string "Hochspannung!$"

Vermilion_City_Lider_Gimnasio_Texto_2:
	.string "Verdammt! Ich habe schon wieder\n"
	.string "verloren! Mir bleibt nichts anderes\l"
	.string "übrig, als dir den DONNERORDEN zu\l"
	.string "geben…$"

Vermilion_City_Lider_Gimnasio_Texto_3:
	.string "Ein kleiner Tipp für dich. Verschwinde\n"
	.string "aus KANTO, solange du noch kannst,\l"
	.string "bevor SIEGFRIEDs Zorn dich in Stücke\l"
	.string "reißt!$"

Vermilion_City_Lider_Gimnasio_Texto_3.1:
.string "Habrás ganado la batalla, pero\n"
	.string "no la guerra.\p"
	.string "La vida da muchas vueltas,\n"
	.string "no lo olvides.$"

Vermilion_City_Lider_Gimnasio_Texto_4:
	.string "Denkst du wirklich, ich erkläre dir, was\n"
	.string "der DONNERORDEN bewirkt, ROCKET?\p"
	.string "Aber egal, du wirst FLIEGEN sowieso\n"
	.string "einsetzen, wann du willst. Aber ich\l"
	.string "erfülle meine Pflicht als ARENALEITER\l"
	.string "und gebe dir diese TM.$"

Vermilion_City_Lider_Gimnasio_Texto_5:
    .string "{PLAYER} erhält TM34!$"

Vermilion_City_Lider_Gimnasio_Texto_6:
	.string "TM34 enthält SCHOCKWELLE. Sie ist\n"
	.string "etwas schwächer als DONNERBLITZ,\l"
	.string "verfehlt aber nie ihr Ziel. Wenn ich\l"
	.string "könnte, würde ich meinem RAICHU\l"
	.string "befehlen, sie hier und jetzt gegen dich\l"
	.string "einzusetzen, ROCKET! Stell dir einfach\l"
	.string "vor, es wäre schon passiert!$"

Pewter_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Gym_Guy_2
msgbox Pewter_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Gym_Guy_2::
msgbox Pewter_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Gym_Guy_Texto_1:
	.string "Ich werde eine Beschwerde bei der\n"
	.string "LIGA-LEITUNG einreichen, um diese\l"
	.string "schreckliche Uniform, die du trägst,\l"
	.string "verbieten zu lassen! Dieser verfluchte\l"
	.string "Modetrend, sich über TEAM ROCKET und\l"
	.string "ihr Versagen bei SILPH lustig zu\l"
	.string "machen, muss endlich aufhören!$"

Pewter_City_Gym_Guy_Texto_2:
	.string "Dein Modegeschmack mag zwar\n"
	.string "scheußlich sein, aber du hast ROCKO\l"
	.string "eine ordentliche Abreibung verpasst!$"

Pewter_City_Estatua::
compare VAR_ROUTE111_STATE, 1
goto_if_eq Pewter_City_Estatua_3
compare VAR_ROUTE111_STATE, 2
goto_if_eq Pewter_City_Estatua_3
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Estatua_2
msgbox Pewter_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Pewter_City_Estatua_2::
msgbox Pewter_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Pewter_City_Estatua_3::
msgbox Pewter_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Pewter_City_Estatua_Texto_1:
.string "PEWTER POKÉMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED and ANDRA$"


Pewter_City_Estatua_Texto_2:
.string "PEWTER POKÉMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED, ANDRA and {PLAYER}$"

Pewter_City_Estatua_Texto_3:
.string "PEWTER POKÉMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE and RED$"

Pewter_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Lider_Gimnasio_2
msgbox Pewter_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Pewter_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BROCK, Pewter_City_Lider_Gimnasio_Texto_2
msgbox Pewter_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM39
msgbox Pewter_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Pewter_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
addvar VAR_UNUSED_0x40F8, 1
setvar VAR_ROUTE111_STATE, 3
setflag FLAG_BADGE01_GET
settrainerflag TRAINER_STEVE_1
release
end

Pewter_City_Lider_Gimnasio_2::
msgbox Pewter_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Lider_Gimnasio_Texto_1:
	.string "Na sowas, noch ein Herausforderer, der\n"
	.string "nach dem Titel strebt. Erst vor wenigen\l"
	.string "Minuten war eine junge Dame in einer\l"
	.string "ROCKET-Uniform hier. Scheint wohl ein\l"
	.string "neuer Trend zu sein, um sich über das\l"
	.string "SILPH-Fiasko lustig zu machen. Wie auch\l"
	.string "immer. Meine GESTEIN-POKéMON sind die\l"
	.string "widerstandsfähigsten, die du je\l"
	.string "gesehen hast! Bist du dir wirklich\l"
	.string "sicher, dass du mich herausfordern\l"
	.string "willst, obwohl du sowieso verlieren\l"
	.string "wirst?$"

Pewter_City_Lider_Gimnasio_Texto_1.1:
	.string "Willst Du es noch immer mit mir\n"
	.string "aufnehmen? OK! Zeige mir, wie gut\l"
	.string "Du bist!$"

Pewter_City_Lider_Gimnasio_Texto_2:
	.string "Ich habe dich falsch eingeschätzt!\p"
	.string "Nimm den FELSORDEN als Zeichen\n"
	.string "deines Sieges.$"

Pewter_City_Lider_Gimnasio_Texto_3:
	.string "Tja. Heute ist wohl nicht mein Tag.\n"
	.string "Zuerst die junge Dame und jetzt du.\n"
	.string "Naja. Du hast echt Talent, junger Mann.\p"
	.string "Wenn du es für das Gute einsetzt,\n"
	.string "könntest du diese Region zu einem\l"
	.string "viel besseren Ort machen.$"

Pewter_City_Lider_Gimnasio_Texto_4:
	.string "Warte!\n"
	.string "Nimm das hier mit!$"

Pewter_City_Lider_Gimnasio_Texto_5:
	.string "PLAYER erhält TM39!$"

Pewter_City_Lider_Gimnasio_Texto_6:
	.string "TM39 enthält FELSGRAB. Es schleudert\n"
	.string "Felsen auf den Gegner und senkt dessen\l"
	.string "INITIATIVE. Es ist ideal für langsame\l"
	.string "GESTEIN-POKéMON wie GEOROK oder\l"
	.string "RIZEROS.$"

Cerulean_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Gym_Guy_2
msgbox Cerulean_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Cerulean_City_Gym_Guy_2::
msgbox Cerulean_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Cerulean_City_Gym_Guy_Texto_1:
	.string "Lass mich dir einen Rat geben, Kleiner.\p"
	.string "Tauch bloß nicht in dieser Uniform vor\n"
	.string "der TOP VIER auf! Nicht einmal zum Spaß!$"

Cerulean_City_Gym_Guy_Texto_2:
	.string "Ein Buch sollte man nicht nach seinem\n"
	.string "Einband beurteilen! Du hast die TEAM\l"
	.string "ROCKET Uniform getragen, um MISTY\l"
	.string "aus dem Konzept zu bringen, was!$"

Cerulean_City_Estatua::
compare VAR_UNUSED_0x40F7, 22
goto_if_gt Cerulean_City_Estatua_Estatua_3
msgbox Cerulean_City_Estatua_Texto_4 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_Estatua_3::
compare VAR_ROUTE109_STATE, 0
goto_if_eq Cerulean_City_Estatua_3
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Estatua_2
msgbox Cerulean_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_2::
msgbox Cerulean_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_3::
msgbox Cerulean_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_Texto_1:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Cerulean_City_Estatua_Texto_2:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"


Cerulean_City_Estatua_Texto_3:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE and RED$"

Cerulean_City_Estatua_Texto_4:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "It is empty!$"

Cerulean_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Lider_Gimnasio_2
msgbox Cerulean_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Cerulean_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MISTY, Cerulean_City_Lider_Gimnasio_Texto_2
msgbox Cerulean_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM03
msgbox Cerulean_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
addvar VAR_UNUSED_0x40F8, 1
waitfanfare
setvar VAR_ROUTE109_STATE, 3
setflag FLAG_BADGE02_GET
settrainerflag TRAINER_BLAKE
settrainerflag TRAINER_LUIS
release
end

Cerulean_City_Lider_Gimnasio_2::
msgbox Cerulean_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end


Cerulean_City_Lider_Gimnasio_Texto_1:
	.string "Du musst neu sein, ich habe dich noch\n"
	.string "nie gesehen! Wenn ein TRAINER zum Profi\l"
	.string "werden möchte, muss er sich eine\l"
	.string "POKéMON-TAKTIK erarbeiten!\p"
	.string "Auf welche Weise fängst du\n"
	.string "deine POKéMON?$"

Cerulean_City_Lider_Gimnasio_Texto_1.1:
	.string "Meine Strategie basiert auf dem\n"
	.string "gnadenlosen Offensiv-Einsatz von\l"
	.string "WASSER-POKéMON!$"

Cerulean_City_Lider_Gimnasio_Texto_2:
	.string "Wow!\n"
	.string "Du bist sehr gut!!\p"
	.string "Alles klar!\p"
	.string "Ich überlasse dir den QUELLORDEN\n"
	.string "als Zeichen deines Triumphes!$"

Cerulean_City_Lider_Gimnasio_Texto_3:
	.string "TM03 lehrt AQUAWELLE. Sie ist nicht so\n"
	.string "stark wie SURFER oder SIEDEWASSER, hat\l"
	.string "aber dafür eine 20 %ige Chance den\l"
	.string "Gegner zu verwirren!$"

Cerulean_City_Lider_Gimnasio_Texto_4:
	.string "Der QUELLORDEN lässt alle POKéMON bis\n"
	.string "Level 30 deinen Befehlen gehorchen!\p"
	.string "Sogar Außenseiter gehorchen dir! Deine\n"
	.string "POKéMON können den ZERSCHNEIDER nun\l"
	.string "jederzeit einsetzen! Du kannst kleine\l"
	.string "Büsche zerhacken und so neue Wege\l"
	.string "freilegen! Zu guter Letzt schenke\l"
	.string "ich dir noch meine Lieblings-TM!$"

Cerulean_City_Lider_Gimnasio_Texto_5:
	.string "{PLAYER} erhält TM03!$"

Fuchsia_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Gym_Guy_2
msgbox Fuchsia_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Gym_Guy_2::
msgbox Fuchsia_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Gym_Guy_Texto_1:
	.string "Was? Dich kenn ich doch! Willst du mich\n"
	.string "veräppeln?! Du hast vielleicht das\l"
	.string "System ausgetrickst, aber mich kannst\l"
	.string "du nicht hinters Licht führen!$"

Fuchsia_City_Gym_Guy_Texto_2:
	.string "So ein Betrug! Ich werde mich sofort bei\n"
	.string "der POKéMON LIGA beschweren! Ich weiß,\l"
	.string "dass du ein echter Rocket bist!$"

Fuchsia_City_Estatua::
compare VAR_ROUTE106_STATE, 0
goto_if_eq Fuchsia_City_Estatua_3
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Estatua_2
msgbox Fuchsia_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_2::
msgbox Fuchsia_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_3::
msgbox Fuchsia_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_Texto_1:
	.string "FUCHSIA POKÉMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Fuchsia_City_Estatua_Texto_2:
	.string "FUCHSIA POKÉMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"

Fuchsia_City_Estatua_Texto_3:
	.string "FUCHSIA POKÉMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE and RED$"

Fuchsia_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Lider_Gimnasio_2
msgbox Fuchsia_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Fuchsia_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_KOGA, Fuchsia_City_Lider_Gimnasio_Texto_2
msgbox Fuchsia_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM06
msgbox Fuchsia_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Fuchsia_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
addvar VAR_UNUSED_0x40F8, 1
setflag FLAG_BADGE05_GET
settrainerflag TRAINER_MIGUEL_1
settrainerflag TRAINER_ANNA_AND_MEG_3
settrainerflag TRAINER_MIGUEL_3
settrainerflag TRAINER_COLTON
settrainerflag TRAINER_MIGUEL_2
settrainerflag TRAINER_ANNA_AND_MEG_4
setvar VAR_ROUTE106_STATE, 3
release
end

Fuchsia_City_Lider_Gimnasio_2::
msgbox Fuchsia_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Lider_Gimnasio_Texto_1:
	.string "{PLAYER}! Du bist zurück! Du wagst\n"
	.string "dich also in die Höhle des Löwen und\l"
	.string "forderst die POKÉMON LIGA heraus!\p"
	.string "Du hast meine volle Unterstützung,\n"
	.string "{PLAYER}! Ich werde niemals\l"
	.string "vergessen, was du für die BIKER\l"
	.string "und ganz KANTO getan hast!$"

Fuchsia_City_Lider_Gimnasio_Texto_1.1:
	.string "Aber ich werde es dir trotzdem nicht\n"
	.string "leicht machen, {PLAYER}. Niemand\l"
	.string "beherrscht GIFT-POKéMON so gut wie\l"
	.string "ich, nicht einmal die ROCKET OFFIZIERE!$"

Fuchsia_City_Lider_Gimnasio_Texto_2:
	.string "I didn't expect less from you, you\n"
	.string "deserve GIOVANNI's trust and everyone\l"
	.string "who battles for a better KANTO. Here\l"
	.string "you have the SOULBADGE!$"

Fuchsia_City_Lider_Gimnasio_Texto_3:
	.string "Joining TEAM ROCKET was the best\n"
	.string "decision you made, look at you, you've\l"
	.string "built up a strong character and\l"
	.string "personality, understanding the truths\l"
	.string "hidden within this region, whereas RD\l"
	.string "lives in his fantasy world, believing\l"
	.string "this is just a game, do me the favor of\l"
	.string "delivering a hefty dose of reality to\l"
	.string "that spoiled child if you encounter him\l"
	.string "in the LEAGUE!$"

Fuchsia_City_Lider_Gimnasio_Texto_4:
	.string "Now that you have the SOULBADGE,\n"
	.string "the DEFENSE of your POKÉMON rises.\p"
	.string "It also lets you SURF outside of\n"
	.string "battle.\p"
	.string "Ah!\n"
	.string "Take this, too!$"

Fuchsia_City_Lider_Gimnasio_Texto_5:
	.string "{PLAYER} received TM06\n"
	.string "from KOGA.$"

Fuchsia_City_Lider_Gimnasio_Texto_6:
	.string "Sealed within that TM06 lies\n"
	.string "TOXIC!\p"
	.string "It is a secret technique dating\n"
	.string "back some four hundred years.$"

Cinnabar_Island_Lider_Gimnasio::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Lider_Gimnasio_2
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1.3 MSGBOX_AUTOCLOSE
delay 10
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1.2 MSGBOX_AUTOCLOSE
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BLAINE_1, Cinnabar_Island_Lider_Gimnasio_Texto_2
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM38
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_BADGE07_GET
settrainerflag TRAINER_SHANE
settrainerflag TRAINER_TONY_5
settrainerflag TRAINER_TAKAO
settrainerflag TRAINER_JUSTIN
settrainerflag TRAINER_HITOSHI
settrainerflag TRAINER_ETHAN_1
settrainerflag TRAINER_KIYO
setvar VAR_UNUSED_0x40F7, 81
release
end

Cinnabar_Island_Lider_Gimnasio_2::
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Cinnabar_Island_Gym_Estatuas::
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Gym_Estatuas_2
msgbox Cinnabar_Island_Gym_Estatuas_Texto_1 MSGBOX_SIGN
release
end

Cinnabar_Island_Gym_Estatuas_2::
msgbox Cinnabar_Island_Gym_Estatuas_Texto_2 MSGBOX_SIGN
release
end

Cinnabar_Island_Gym_Estatuas_Texto_1:
	.string "CINNABAR POKÉMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Cinnabar_Island_Gym_Estatuas_Texto_2:
	.string "CINNABAR POKÉMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"


Cinnabar_Island_Gym_Guy::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Gym_Guy_2
msgbox Cinnabar_Island_Gym_Guy_Texto_1 MSGBOX_NPC
release
end

Cinnabar_Island_Gym_Guy_2::
msgbox Cinnabar_Island_Gym_Guy_Texto_2 MSGBOX_NPC
release
end

Cinnabar_Island_Gym_Guy_Texto_1:
	.string "So, is it on trend to dress as ROCKET\n"
	.string "for their failure at SILPH? They\l"
	.string "deserved it, hah!$"

Cinnabar_Island_Gym_Guy_Texto_2:
	.string "I dont know why, but with you, he used a\n"
	.string "more powerful team than against a kid\l"
	.string "who passed through here not long ago.\l"
	.string "But still, you've defeated that walking\l"
	.string "torch!$"

Cinnabar_Island_Lider_Gimnasio_Texto_1:
.string "Hah!\p" 
.string "I am BLAINE, the red-hot LEADER\n" 
.string "of CINNABAR GYM!\p" 
.string "My fiery POKÉMON are all rough\n" 
.string "and ready with intense heat!\p" 
.string "They incinerate all challengers!\p"

Cinnabar_Island_Lider_Gimnasio_Texto_1.1:
.string "Hah!\n"
    .string "You better have BURN HEAL!$"

Cinnabar_Island_Lider_Gimnasio_Texto_1.2:
	.string "On the other hand, you'll have to excuse\n"
	.string "my GYM, but lately, there have been many\l"
	.string "contenders, and we haven't had time to\l"
	.string "set up new puzzles.$"

Cinnabar_Island_Lider_Gimnasio_Texto_1.3:
	.string "You should know that I don't like the\n"
	.string "trend of cosplaying as TEAM ROCKET.\l"
	.string "They are traitors to the true KANTO and\l"
	.string "deserve to disappear from its history.\l"
	.string "Acts like that only solidify their place\l"
	.string "in the collective imagination, do you\l"
	.string "understand?$"

Cinnabar_Island_Lider_Gimnasio_Texto_2:
.string "I have burned down to nothing!\n"
.string "Not even ashes remain!\p"
.string "You have earned the VOLCANOBADGE.$"

Cinnabar_Island_Lider_Gimnasio_Texto_3:
	.string "The TM38 contains FIRE BLAST; very few\n"
	.string "moves have a better POWER-ACCURACY\l"
	.string "ratio, it's the perfect universal fire\l"
	.string "move. MAGMAR or CHARIZARD will destroy\l"
	.string "their enemies with this and their great\l"
	.string "SPECIAL ATTACK!$"

Cinnabar_Island_Lider_Gimnasio_Texto_4:
.string "Hah!\p"
    .string "The VOLCANOBADGE heightens the\n"
    .string "SPECIAL STATs of your POKÉMON.\p"
    .string "Here, you can have this, too!$"

Cinnabar_Island_Lider_Gimnasio_Texto_5:
.string "{PLAYER} received TM38\n"
    .string "from BLAINE.$"

Cinnabar_Island_Lider_Gimnasio_Texto_6:
.string "FIRE BLAST is the ultimate fire\n"
    .string "technique.\p"
    .string "Don't waste it on WATER POKÉMON.$"

Celadon_Ciyy_Estatua::
compare VAR_ROUTE107_STATE, 0
goto_if_eq Celadon_Ciyy_Estatua_3
compare VAR_ROUTE107_STATE, 2
goto_if_gt Celadon_Ciyy_Estatua_2
msgbox Celadon_Ciyy_Estatua_Texto_1 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_2::
msgbox Celadon_Ciyy_Estatua_Texto_2 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_3::
msgbox Celadon_Ciyy_Estatua_Texto_3 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_Texto_1:
 .string "CELADON POKÉMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED and ANDRA$"

Celadon_Ciyy_Estatua_Texto_2:
 .string "CELADON POKÉMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED, ANDRA and {PLAYER}$"

Celadon_Ciyy_Estatua_Texto_3:
.string "CELADON POKÉMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED$"


Celadon_Ciyy_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE107_STATE, 2
goto_if_gt Celadon_Ciyy_Lider_Gimnasio_2
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ERIKA, Celadon_Ciyy_Lider_Gimnasio_Texto_2
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM19
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
addvar VAR_UNUSED_0x40F8, 1
setflag FLAG_BADGE04_GET
setvar VAR_ROUTE107_STATE, 3
settrainerflag TRAINER_JESSICA_3
settrainerflag TRAINER_BRAWLY_1
settrainerflag TRAINER_WATTSON_1
settrainerflag TRAINER_NOLEN
settrainerflag TRAINER_FLANNERY_1
settrainerflag TRAINER_JESSICA_4
settrainerflag TRAINER_PRESLEY
release
end

Celadon_Ciyy_Lider_Gimnasio_2::
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end


Celadon_Ciyy_Lider_Gimnasio_Texto_1:
.string "Hello…\n"
    .string "Lovely weather, isn't it?\l"
    .string "It's so pleasant…\p"
    .string "…Oh, dear…\n"
    .string "I must have dozed off. Welcome.\p"
    .string "My name is ERIKA.\n"
    .string "I am the LEADER of CELADON GYM.\p"
    .string "I am a student of the art of\n"
    .string "flower arranging.\p"
    .string "My POKÉMON are solely of the\n"
    .string "GRASS type.\p"
    .string "…Oh, I'm sorry, I had no idea that\n"
    .string "you wished to challenge me.$"
	
Celadon_Ciyy_Lider_Gimnasio_Texto_1.1:
 .string "Very well, but I shall not lose.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_2:
.string "Oh!\n"
    .string "I concede defeat.\l"
    .string "You are remarkably strong.\p"
    .string "I must confer on you the\n"
    .string "RAINBOWBADGE.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_3:
 .string "You are cataloging POKÉMON?\n"
    .string "I must say I'm impressed.\p"
    .string "I would never collect POKÉMON if\n"
    .string "they were unattractive.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_4:
.string "The RAINBOWBADGE will make\n"
    .string "POKÉMON up to Lv. 50 obey.\p"
    .string "It also allows POKÉMON to use\n"
    .string "STRENGTH in and out of battle.\p"
    .string "Please also take this with you.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_5:
.string "{PLAYER} received TM19\n"
    .string "from ERIKA.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_6:
.string "TM19 contains GIGA DRAIN.\p"
    .string "Half the damage it inflicts is\n"
    .string "drained to heal your POKÉMON.\p"
    .string "Wouldn't you agree that it's a\n"
    .string "wonderful move?$"
