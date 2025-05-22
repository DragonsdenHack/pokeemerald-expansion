RocketHideoutViridian_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideoutViridian_OnFrame
    .byte 0

RocketHideoutViridian_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 83, RocketHideoutViridian_Escena_8
	.2byte 0

RocketHideoutViridian4::
end



RocketHideoutViridian5::
end



RocketHideoutViridian6::
end



RocketHideoutViridian7::
end



RocketHideoutViridian8::
end



RocketHideoutViridian9::
end



RocketHideoutViridian10::
end



RocketHideoutViridian11::
end



RocketHideoutViridian12::
end



RocketHideoutViridian13::
end



RocketHideoutViridian14::
end



RocketHideoutViridian15::
end



RocketHideoutViridian_EventScript_Rocket::
	trainerbattle_single TRAINER_ANTHONY, RocketHideoutViridian_Text_RocketIntro, RocketHideoutViridian_Text_RocketDefeated
	msgbox RocketHideoutViridian_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket2::
	trainerbattle_single TRAINER_BENJAMIN_1, RocketHideoutViridian_Text_Rocket2Intro, RocketHideoutViridian_Text_Rocket2Defeated
	msgbox RocketHideoutViridian_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket3::
	trainerbattle_single TRAINER_BENJAMIN_2, RocketHideoutViridian_Text_Rocket3Intro, RocketHideoutViridian_Text_Rocket3Defeated
	msgbox RocketHideoutViridian_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket4::
	trainerbattle_single TRAINER_BENJAMIN_4, RocketHideoutViridian_Text_Rocket4Intro, RocketHideoutViridian_Text_Rocket4Defeated
	msgbox RocketHideoutViridian_Text_Rocket4PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket5::
	trainerbattle_single TRAINER_BENJAMIN_3, RocketHideoutViridian_Text_Rocket5Intro, RocketHideoutViridian_Text_Rocket5Defeated
	msgbox RocketHideoutViridian_Text_Rocket5PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket6::
	trainerbattle_single TRAINER_BENJAMIN_5, RocketHideoutViridian_Text_Rocket6Intro, RocketHideoutViridian_Text_Rocket6Defeated
	msgbox RocketHideoutViridian_Text_Rocket6PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket7::
	trainerbattle_single TRAINER_ABIGAIL_4, RocketHideoutViridian_Text_Rocket7Intro, RocketHideoutViridian_Text_Rocket7Defeated
	msgbox RocketHideoutViridian_Text_Rocket7PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket8::
	trainerbattle_single TRAINER_ABIGAIL_5, RocketHideoutViridian_Text_Rocket8Intro, RocketHideoutViridian_Text_Rocket8Defeated
	msgbox RocketHideoutViridian_Text_Rocket8PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico::
	trainerbattle_single TRAINER_ABIGAIL_1, RocketHideoutViridian_Text_CientificoIntro, RocketHideoutViridian_Text_CientificoDefeated
	msgbox RocketHideoutViridian_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico2::
	trainerbattle_single TRAINER_JASMINE, RocketHideoutViridian_Text_Cientifico2Intro, RocketHideoutViridian_Text_Cientifico2Defeated
	msgbox RocketHideoutViridian_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico3::
	trainerbattle_single TRAINER_ABIGAIL_3, RocketHideoutViridian_Text_Cientifico3Intro, RocketHideoutViridian_Text_Cientifico3Defeated
	msgbox RocketHideoutViridian_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico4::
	trainerbattle_single TRAINER_ABIGAIL_2, RocketHideoutViridian_Text_Cientifico4Intro, RocketHideoutViridian_Text_Cientifico4Defeated
	msgbox RocketHideoutViridian_Text_Cientifico4PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideoutViridian_Combate_Proton_Izq::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Proton_Move_1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Proton

RocketHideoutViridian_Combate_Proton_Der::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Proton_Move_1.1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Proton

RocketHideoutViridian_Combate_Proton::
applymovement 3, RocketHideoutViridian_Combate_Proton_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Proton_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Proton_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Proton_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 3, RocketHideoutViridian_Combate_Proton_Move_3
waitmovement 0x0
delay 15
trainerbattle_no_intro TRAINER_PROTON, RocketHideoutViridian_Combate_Proton_Texto_4 
msgbox RocketHideoutViridian_Combate_Proton_Texto_5 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_UNUSED_0x40F7, 87
release
end

RocketHideoutViridian_Combate_Proton_Texto_1:
	.string "LANCE: Willkommen, {PLAYER}.\p"
	.string "Angesichts deiner bisherigen Erfolge\n"
	.string "war es zu erwarten, dass du nicht lange\l"
	.string "brauchen würdest, um die ARENALEITER\l"
	.string "zu besiegen und hierherzukommen - in\l"
	.string "unsere GEHEIME BASIS, die noch besser\l"
	.string "getarnt ist, als die anderen.$"

RocketHideoutViridian_Combate_Proton_Texto_2:
	.string "Wie du weißt, muss man sich in unserer\n"
	.string "Organisation beweisen, um zu zeigen,\l"
	.string "dass man einer Mission würdig ist.\p"
	.string "Und deine ist die Härteste von allen.\p"
	.string "Deshalb musst du dich vorher\n"
	.string "dieser Prüfung hier stellen.$"

RocketHideoutViridian_Combate_Proton_Texto_3:
	.string "Die ARENALEITER sind ein guter\n"
	.string "Maßstab, aber wenn du beweisen willst,\l"
	.string "dass du wirklich der richtige ROCKET für\l"
	.string "diese wichtige Mission bist, musst du\l"
	.string "dich mit den stärksten OFFIZIEREN und\l"
	.string "ADMINISTRATOREN messen.\p"
	.string "Wir sind genauso, wenn nicht noch\n"
	.string "stärker als die ARENALEITER.\p"
	.string "Du glaubst mir nicht?\p"
	.string "Dann werde ich es dir beweisen!$"

RocketHideoutViridian_Combate_Proton_Texto_4:
	.string "Wir haben uns nicht in dir\n"
	.string "geirrt, {PLAYER}.$"

RocketHideoutViridian_Combate_Proton_Texto_5:
	.string "Dein Wechsel zu unserer BASIS in\n"
	.string "PRISMANIA CITY war ein kluger\l"
	.string "Schachzug. Du hast dir deine Position\l"
	.string "als einer von GIOVANNIs vertrautesten\l"
	.string "OFFIZIEREN redlich verdient,\l"
	.string "{PLAYER}. Ich rate dir, dein Team zu\l"
	.string "heilen, bevor du weitergehst. Deine\l"
	.string "verbliebenen Gegner sind stärker als\l"
	.string "ich. Ich wette, es werden Funken in\l"
	.string "diesen Kämpfen sprühen {PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Combate_Proton_Move_1:
walk_up
walk_up
step_end

RocketHideoutViridian_Combate_Proton_Move_1.1:
walk_up
walk_left
walk_up
step_end

RocketHideoutViridian_Combate_Proton_Move_2:
face_down
step_end

RocketHideoutViridian_Combate_Proton_Move_3:
walk_slow_down
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Proton_Move_4:
face_up
step_end

RocketHideoutViridian_Combate_Petrel_Izq::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Petrel_Move_1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Petrel

RocketHideoutViridian_Combate_Petrel_Der::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Petrel_Move_1.1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Petrel

RocketHideoutViridian_Combate_Petrel::
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Petrel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox RocketHideoutViridian_Combate_Petrel_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PETREL, RocketHideoutViridian_Combate_Petrel_Texto_4
msgbox RocketHideoutViridian_Combate_Petrel_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 88
release
end

RocketHideoutViridian_Combate_Petrel_Texto_1:
	.string "LAMBDA: Ich hätte niemals gedacht,\n"
	.string "dass du es so weit bringst, nachdem du\l"
	.string "deine erste Mission in KANTO vergeigt\l"
	.string "hast. Aber du hast einen HOCHRANGIGEN\l"
	.string "RÜPEL besiegt und da wusste ich, dass\l"
	.string "du Potential hast.\p"
	.string "Deswegen habe ich dir die riskante\n"
	.string "Patent-Mission in gegeben.$"

RocketHideoutViridian_Combate_Petrel_Texto_2:
	.string "Und du hast alle Erwartungen\n"
	.string "übertroffen. Als ROCKET ADMINISTRATOR\l"
	.string "muss man viele Fähigkeiten besitzen,\l"
	.string "darunter ein TEAM auf TOP VIER Niveau,\l"
	.string "bestehend aus starken und gut\l"
	.string "trainierten POKéMON, die man nicht\l"
	.string "einfach zufällig auf den ROUTEN findet,\l"
	.string "wie es bei den Teams von 95 % der\l"
	.string "TRAINER der Fall ist.$"

RocketHideoutViridian_Combate_Petrel_Texto_3:
	.string "Wir haben auch die Pflicht, alles zu\n"
	.string "geben, wenn es nötig ist. Die Zukunft\l"
	.string "der Region und von TEAM ROCKET liegt in\l"
	.string "deinen Händen und ich werde persönlich\l"
	.string "dafür sorgen, dass du die POKÉMON LIGA\l"
	.string "unter den bestmöglichen\l"
	.string "Voraussetzungen herausforderst!$"

RocketHideoutViridian_Combate_Petrel_Texto_4:
	.string "Was für ein Kampf, {PLAYER}!\p"
	.string "Du bist ohne Zweifel ein\n"
	.string "gestandener ROCKET-OFFIZIER!$"

RocketHideoutViridian_Combate_Petrel_Texto_5:
	.string "HA! Fantastisch! Ich habe nichts\n"
	.string "Geringeres von demjenigen erwartet,\l"
	.string "der BRUNO besiegt und meine\l"
	.string "BIKER-Kollegen gerettet hat! Ich bin\l"
	.string "froh, dich auf unserer Seite zu haben,\l"
	.string "{PLAYER}. Und wenn du diesem ROT\l"
	.string "begegnest - du weißt schon der Knirps,\l"
	.string "der sich für unbesiegbar und\l"
	.string "unantastbar hält, dann tu uns allen\l"
	.string "einen Gefallen und mach diesen kleinen\l"
	.string "Arsch im Namen von TEAM ROCKET so\l"
	.string "fertig, dass er nie wieder aufhören wird\l"
	.string "an den Zitzen seiner Mutter zu nuckeln!$"

RocketHideoutViridian_Combate_Petrel_Move_1:
walk_up
walk_right
walk_up
step_end

RocketHideoutViridian_Combate_Petrel_Move_1.1:
walk_up
walk_up
step_end

RocketHideoutViridian_Combate_Petrel_Move_2:
face_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_3:
walk_slow_down
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_4:
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_5:
face_up
step_end

RocketHideoutViridian_Combate_Atlas::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Combate_Atlas_Move_3
waitmovement 0x0
special RemoveCameraObject
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_2 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Combate_Atlas_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_6
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_7
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_12
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_ENCOUNTER_CHAMPION
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Atlas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_9
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_8
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ATLAS_3, RocketHideoutViridian_Combate_Atlas_Texto_10
msgbox RocketHideoutViridian_Combate_Atlas_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_12
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_13
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Combate_Atlas_Texto_15 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_MIGUEL_4
settrainerflag TRAINER_QUINCY
settrainerflag TRAINER_KATELYNN
settrainerflag TRAINER_BEN
settrainerflag TRAINER_NICOLAS_2
settrainerflag TRAINER_JARED
settrainerflag TRAINER_HUMBERTO
settrainerflag TRAINER_ANTHONY
settrainerflag TRAINER_BENJAMIN_1
settrainerflag TRAINER_BENJAMIN_2
settrainerflag TRAINER_BENJAMIN_3
settrainerflag TRAINER_BENJAMIN_4
settrainerflag TRAINER_BENJAMIN_5
settrainerflag TRAINER_ABIGAIL_4
settrainerflag TRAINER_ABIGAIL_5
settrainerflag TRAINER_ABIGAIL_1
settrainerflag TRAINER_ABIGAIL_3
settrainerflag TRAINER_ABIGAIL_2
settrainerflag TRAINER_JASMINE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
setflag FLAG_BADGE08_GET
setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT
fadescreen 1
delay 10
removeobject 1
delay 10
addobject 18
fadescreen 0
setvar VAR_UNUSED_0x40F7, 89
release
end

RocketHideoutViridian_Combate_Atlas_Texto_1:
	.string "????: Ich habe dich schon erwartet,\n"
	.string "OFFIZIER {PLAYER}.$"

RocketHideoutViridian_Combate_Atlas_Texto_2:
	.string "ATLAS: Komm rein. Keine Scheu.\p"
	.string "Mach es dir bequem.$"

RocketHideoutViridian_Combate_Atlas_Texto_3:
	.string "Es ist ein interessanter Kontrast,\n"
	.string "nicht wahr? Dieser kleine Raum im\l"
	.string "Vergleich zum Rest der BASIS? Ich war\l"
	.string "nicht dafür, ihn so zu gestalten, aber\l"
	.string "man sagte mir, dass es die Hierarchie\l"
	.string "so gebiete.\p"
	.string "Ein Spiegelbild der Macht dessen,\n"
	.string "der es verdient, ihn zu bewohnen.$"

RocketHideoutViridian_Combate_Atlas_Texto_4:
	.string "Aus diesem Grund wird so ein Raum einem\n"
	.string "schwachen Anführer nicht guttun. Er\l"
	.string "macht ihn überheblich und schwächt ihn.\p"
	.string "Er lässt ihn glauben, er hätte bereits\n"
	.string "alles erreicht, und dass ihm niemand das\l"
	.string "Wasser reichen, geschweige denn zu Fall\l"
	.string "bringen kann.$"

RocketHideoutViridian_Combate_Atlas_Texto_5:
	.string "Das gilt auch für unschuldige und naive\n"
	.string "Kinder wie ROT. Er denkt, er hätte mit\l"
	.string "seinen zehn Jahren bereits die Welt\l"
	.string "erobert und macht sich über unsere\l"
	.string "Organisation lustig, nur weil er ein\l"
	.string "paar fingierte Kämpfe gewonnen hat.$"

RocketHideoutViridian_Combate_Atlas_Texto_6:
	.string "Ich hoffe, dass du weder diese Art von\n"
	.string "TRAINER noch Person wirst, {PLAYER}.\p"
	.string "Ich würde tausendmal lieber deinen Weg\n"
	.string "bestreiten. Du hast deine Reise mit\l"
	.string "einem schwachen ZUBAT begonnen und\l"
	.string "gelernt, es durch hartes Training zu\l"
	.string "einem starken POKéMON zu machen.\p"
	.string "Währenddessen wurde ROT ein exklusiver\n"
	.string "Starter in den ARSCH geschoben und\l"
	.string "sein Weg durch EICH und den\l"
	.string "ARENALEITERN von allen möglichen\l"
	.string "Hindernissen befreit.$"

RocketHideoutViridian_Combate_Atlas_Texto_7:
	.string "Die Herausforderungen, denen du dich\n"
	.string "stellen musstest, haben dich stark\l"
	.string "gemacht - dafür gesorgt, dass du\l"
	.string "wächst. Es war kein einfacher Weg, aber\l"
	.string "genau auf diesen Pfaden geschehen die\l"
	.string "Dinge, die einen zur wahren Größe\l"
	.string "führen. Und genau deshalb stehst du\l"
	.string "jetzt hier, {PLAYER}!$"

RocketHideoutViridian_Combate_Atlas_Texto_8:
	.string "Erwarte ja keine Sonderbehandlung in\n"
	.string "der POKéMON LIGA, wie sie ROT und sogar\l"
	.string "BLAU genießen werden. Die TOP VIER\l"
	.string "werden ihre stärksten POKÉMON\l"
	.string "einsetzen, um jeden zu besiegen, der\l"
	.string "SIEGFRIEDs Regierung gefährlich\l"
	.string "werden könnte.$"

RocketHideoutViridian_Combate_Atlas_Texto_9:
	.string "Aus diesem Grund bin ich, ATLAS -\n"
	.string "CHEF-ADMINISTRATOR und GIOVANNI's\l"
	.string "rechte Hand, dein finaler Test, bevor\l"
	.string "du deine bisher wichtigste Mission\l"
	.string "antrittst. Zeig mir alles, was du\l"
	.string "gelernt hast!$"

RocketHideoutViridian_Combate_Atlas_Texto_10:
	.string "Ha! Ich bin stolz, jemanden wie dich mit\n"
	.string "ausgebildet zu haben. Du hast dir den\l"
	.string "ERDORDEN redlich verdient.$"

RocketHideoutViridian_Combate_Atlas_Texto_11:
	.string "Beeindruckend! In so kurzer Zeit ist es\n"
	.string "dir gelungen, eine außergewöhnliche\l"
	.string "Stärke zu erlangen. Und das Beste daran\l"
	.string "ist, dass du dein Potenzial noch lange\l"
	.string "nicht ausgeschöpft hast!$"

RocketHideoutViridian_Combate_Atlas_Texto_12:
	.string "Weder GIOVANNI noch ich können die\n"
	.string "POKéMON LIGA betreten. Wir sind zu\l"
	.string "bekannt und unser Ruf wurde in den\l"
	.string "Medien zu stark in den Dreck gezogen.\p"
	.string "Wir würden sofort verhaftet werden.\p"
	.string "Doch nach all dem, was ich gerade\n"
	.string "gesehen habe, kann ich mit Zuversicht\l"
	.string "sagen, dass du uns in dieser Mission\l"
	.string "würdig vertreten wirst.$"

RocketHideoutViridian_Combate_Atlas_Texto_13:
	.string "LIGA-CHAMP zu werden, verleiht einem\n"
	.string "eine Macht, die nicht einmal SIEGFRIED\l"
	.string "und seine Regierung anfechten können.\p"
	.string "Deshalb solltest du dich auf das\n"
	.string "Schlimmste gefasst machen, wenn du die\l"
	.string "POKéMON LIGA betrittst. Sie werden es\l"
	.string "einem ROCKET gewiss nicht leicht\l"
	.string "machen, den Titel zu gewinnen {PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Combate_Atlas_Texto_14:
	.string "{PLAYER}, Ich werde nach EILAND FÜNF\n"
	.string "zurückkehren. Komm bei Gelegenheit mal\l"
	.string "vorbei. Ich werde GIOVANNI von deinem\l"
	.string "Erfolg hier berichten.$"

RocketHideoutViridian_Combate_Atlas_Texto_15:
.string "Spiele deine Karten klug aus.$"

RocketHideoutViridian_Combate_Atlas_Move_1:
walk_in_place_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_2:
emote_exclamation_mark
step_end

RocketHideoutViridian_Combate_Atlas_Move_3:
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_4:
face_down
step_end

RocketHideoutViridian_Combate_Atlas_Move_5:
walk_down
walk_down
walk_left
walk_left
walk_down
step_end

RocketHideoutViridian_Combate_Atlas_Move_6:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_in_place_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_7:
walk_down
walk_down
walk_left
walk_in_place_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_8:
walk_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_9:
walk_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_10:
face_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_11:
walk_in_place_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_12:
face_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_13:
face_right
step_end

RocketHideoutViridian_Escena_8::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_8_Move_5
waitmovement 0x0
delay 50
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
fadescreen 1
delay 20
addobject 16
fadescreen 0
delay 30
msgbox RocketHideoutViridian_Escena_8_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideoutViridian_Escena_8_Texto_2 MSGBOX_AUTOCLOSE
applymovement 17, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_3 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_4 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_5 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_6 MSGBOX_AUTOCLOSE
applymovement 17, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_7 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_8 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
fadescreen 1
delay 20
removeobject 16
fadescreen 0
delay 40
warpsilent MAP_CINNABAR_ISLAND, 20, 5
release
end

RocketHideoutViridian_Escena_8_Move_1:
walk_in_place_down
step_end

RocketHideoutViridian_Escena_8_Move_2:
face_right
step_end

RocketHideoutViridian_Escena_8_Move_3:
walk_in_place_up
step_end

RocketHideoutViridian_Escena_8_Move_4:
face_up
step_end

RocketHideoutViridian_Escena_8_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
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

RocketHideoutViridian_Escena_8_Texto_1:
.string "LANCE: Ist es vorbei?$"

RocketHideoutViridian_Escena_8_Texto_2:
	.string "GIOVANNI: Ja, LANCE. Offiziell\n"
	.string "existieren wir in KANTO nicht mehr.$"

RocketHideoutViridian_Escena_8_Texto_3:
	.string "LANCE: Denken Sie nicht, dass Sie es\n"
	.string "ROT ein wenig zu einfach gemacht\l"
	.string "haben? Sie haben nicht einmal ein\l"
	.string "RIZEROS verwendet, geschweige denn\l"
	.string "RIHORNI{PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_8_Texto_4:
	.string "GIOVANNI: Er verdient es nicht, auch\n"
	.string "nur einen Hauch der wahren Stärke\l"
	.string "dieser Region zu sehen. Ihm wurde der\l"
	.string "Weg bis hierher geebnet - befreit von\l"
	.string "jeglichen Hindernissen. Und sei dir\l"
	.string "gewiss, dass ich mich für alles\l"
	.string "revanchieren werde - mit Zinsen\l"
	.string "versteht sich. Meine gespielte\l"
	.string "Heuchelei gegenüber ROT wird dann\l"
	.string "noch viel deutlicher hervorstechen.$"

RocketHideoutViridian_Escena_8_Texto_5:
	.string "Diese Region ist derart verkommen, dass\n"
	.string "es niemanden mehr wundert, wenn der\l"
	.string "stärkste ARENALEITER ein einfaches\l"
	.string "RIHORN als Ass besitzt, ohne es\l"
	.string "jemals entwickelt zu haben.$"

RocketHideoutViridian_Escena_8_Texto_6:
	.string "LANCE! Ich möchte, dass alles für ANDRA\n"
	.string "und {PLAYER} vorbereitet ist, wenn\l"
	.string "sie ankommen. Sie werden sich ihren\l"
	.string "Orden in der wahren ARENA von\l"
	.string "VERTANIA CITY verdienen müssen!$"

RocketHideoutViridian_Escena_8_Texto_7:
	.string "LANCE: Alles ist bereit, Sir.\n"
	.string "Was Ihren S{PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_8_Texto_8:
	.string "GIOVANNI: Ich weiß. Ich muss sofort\n"
	.string "aufbrechen. Die öffentliche\l"
	.string "Bekanntgabe unserer Auflösung hat ihn\l"
	.string "verärgert. Er muss sich beruhigen.$"

RocketHideoutViridian_Warp_Escena_9::
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setvar VAR_UNUSED_0x40F7, 85
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
warpsilent MAP_ROUTE22, 12, 5
waitmovement 0x0
release
end
